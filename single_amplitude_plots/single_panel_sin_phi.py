from matplotlib import figure as fig
from matplotlib import pyplot as plt
from matplotlib import path as Path
from matplotlib import patches as patches
import matplotlib
from hermes_alu_ac_data_complete import *
    
###########################################################################################

# Plots

###########################################################################################
def set_axis_opts(xlims,xticks,xticklabels,xlabel,
                  ylims,yticks,yticklabels,ylabel):

    plt.xscale('log')

    plt.xlim(xlims)
    plt.ylim(ylims)
    
    plt.xlabel(xlabel)
    plt.ylabel(ylabel)
    
    plt.xticks(xticks,xticklabels)
    plt.yticks(yticks,yticklabels)

    plt.axhline(ls='--',c="black")

# Get rid of space between each pad
alu_fig = plt.figure(1,figsize=(12,4.5))
alu_fig.subplots_adjust(wspace=0,hspace=0)

# Make a_lu figure
plt.figure(1)

# y-axis values
sinphilims = [-0.41,0.2]
sinphiticks = [-0.4,-0.2,0,0.2]

# Make t-plots
tlimits=[0.01,0.7]
tticks=[0.01,0.1]

# -- sin(phi)
ax = plt.subplot(1,3,1)

xlims = tlimits
xticks = tticks
xticklabels=[str(ii) for ii in xticks]
xlabel = "$-t$ (GeV$^{2}$)"

ylims=sinphilims
yticks=sinphiticks
yticklabels=[str(x) for x in yticks]
ylabel="$A_{LU,I}^{\sin(\phi)}$"

set_axis_opts(xlims,xticks,xticklabels,xlabel,
              ylims,yticks,yticklabels,ylabel)

ax.plot(taxis2,km_alu_I_t[0],"b-",label="KM09 (a)",lw=2)
ax.plot(taxis2,km_alu_I_t[1],"m--",label="KM09 (b)",lw=2)
ax.plot(taxis2,liuti_alu_I_t,"g-.",lw=2)

# HERMES 6-bin 'classic'
ax.errorbar(taxis2,hermes_alu_I_6bin_t[0],hermes_alu_I_6bin_t_d_stat[0],
            marker="s",ms=5,mfc='red',ls='None',c="red")


# Make a legend
handles, labels = ax.get_legend_handles_labels()
leg_spec = matplotlib.font_manager.FontProperties(size="large")
ax.legend(handles,labels,loc="upper center",mode="expand",numpoints=1,prop=leg_spec,frameon=False)



# Make syst error band
offset = -0.4

verts = [
    (taxis2_edges[0][0],offset),
    (taxis2_edges[5][1],offset),
    ]

codes = [ Path.Path.MOVETO,
          Path.Path.LINETO,]

for ii in range(5,-1,-1):
    verts.append((taxis2_edges[ii][1], offset + hermes_alu_I_6bin_t_d_syst[0][ii]))
    codes.append(Path.Path.LINETO)
    verts.append((taxis2_edges[ii][0], offset + hermes_alu_I_6bin_t_d_syst[0][ii]))
    codes.append(Path.Path.LINETO)

# Close the path
verts.append((taxis2_edges[0][0], offset + hermes_alu_I_6bin_t_d_syst[0][0]))
codes.append(Path.Path.CLOSEPOLY)

# Make the object
syst_band = Path.Path(verts,codes)
patch = patches.PathPatch(syst_band,facecolor="None",ec="red")
ax.add_patch(patch)


## # Make x-plots
xBlimits = [0.025,0.39]
xBticks = [0.03,0.3]

# -- sin(\phi)
ax = plt.subplot(1,3,2)

xlims = xBlimits
xticks = xBticks
xticklabels=[str(x) for x in xticks]
xlabel = "$x_B$"


# Get rid of the labels on the y-axis
ylabel=""
yticklabels=["" for ii in range(len(yticks))]

set_axis_opts(xlims,xticks,xticklabels,xlabel,
              ylims,yticks,yticklabels,ylabel)



# Phenomenology
ax.plot(xaxis2,km_alu_I_x[0],"b-",lw=2)
ax.plot(xaxis2,km_alu_I_x[1],"m--",lw=2)
ax.plot(xaxis2,liuti_alu_I_x,"g-.",lw=2,label="GGL11")

# HERMES 6-bin 'classic'
ax.errorbar(xaxis2,hermes_alu_I_6bin_x[0],hermes_alu_I_6bin_x_d_stat[0],
            marker="s",ms=5,mfc='red',ls='None',c="red")


# Make a legend
handles, labels = ax.get_legend_handles_labels()
leg_spec = matplotlib.font_manager.FontProperties(size="large")
ax.legend(handles,labels,loc="upper center",mode="expand",numpoints=1,prop=leg_spec,frameon=False)


# Make syst error band
offset = -0.4

verts = [
    (xaxis2_edges[0][0],offset),
    (xaxis2_edges[5][1],offset),
    ]

codes = [ Path.Path.MOVETO,
          Path.Path.LINETO,]

for ii in range(5,-1,-1):
    verts.append((xaxis2_edges[ii][1], offset + hermes_alu_I_6bin_x_d_syst[0][ii]))
    codes.append(Path.Path.LINETO)
    verts.append((xaxis2_edges[ii][0], offset + hermes_alu_I_6bin_x_d_syst[0][ii]))
    codes.append(Path.Path.LINETO)

# Close the path
verts.append((xaxis2_edges[0][0], offset + hermes_alu_I_6bin_x_d_syst[0][0]))
codes.append(Path.Path.CLOSEPOLY)

# Make the object
syst_band = Path.Path(verts,codes)
patch = patches.PathPatch(syst_band,facecolor="None",ec="red")
ax.add_patch(patch)


# Make q-plots
qlimits = [0.9,10]
qticks=[1,5,10]

# -- sin(\phi)
ax = plt.subplot(1,3,3)

xlims = qlimits
xticks = qticks
xticklabels=[str(x) for x in xticks]
xlabel = "Q$^{2}$ (GeV$^{2}$)"

set_axis_opts(xlims,xticks,xticklabels,xlabel,
              ylims,yticks,yticklabels,ylabel)

ax.plot(qaxis2,km_alu_I_q[0],"b-",lw=2)
ax.plot(qaxis2,km_alu_I_q[1],"m--",lw=2)
ax.plot(qaxis2,liuti_alu_I_q,"g-.",lw=2)

# HERMES 6-bin 'classic'
ax.errorbar(qaxis2,hermes_alu_I_6bin_q[0],hermes_alu_I_6bin_q_d_stat[0],
            marker="s",ms=5,mfc='red',ls='None',c="red",label="HERMES 6-bin")

# Make syst error band
offset = -0.4

verts = [
    (qaxis2_edges[0][0],offset),
    (qaxis2_edges[5][1],offset),
    ]

codes = [ Path.Path.MOVETO,
          Path.Path.LINETO,]

for ii in range(5,-1,-1):
    verts.append((qaxis2_edges[ii][1], offset + hermes_alu_I_6bin_q_d_syst[0][ii]))
    codes.append(Path.Path.LINETO)
    verts.append((qaxis2_edges[ii][0], offset + hermes_alu_I_6bin_q_d_syst[0][ii]))
    codes.append(Path.Path.LINETO)

# Close the path
verts.append((qaxis2_edges[0][0], offset + hermes_alu_I_6bin_q_d_syst[0][0]))
codes.append(Path.Path.CLOSEPOLY)

# Make the object
syst_band = Path.Path(verts,codes)
patch = patches.PathPatch(syst_band,facecolor="None",ec="red")
ax.add_patch(patch)


plt.show()

exit()
