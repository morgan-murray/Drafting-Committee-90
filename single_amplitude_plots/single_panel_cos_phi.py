from matplotlib import figure as fig
from matplotlib import pyplot as plt
from matplotlib import path as Path
from matplotlib import patches as patches
import matplotlib

from hermes_alu_ac_data_complete import *


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


tlimits=[0.01,0.7]
tticks=[0.01,0.1]

xBlimits = [0.025,0.39]
xBticks = [0.03,0.3]

qlimits = [0.9,10]
qticks=[1,5,10]

ac_fig = plt.figure(1,figsize=(12,4.5))
ac_fig.subplots_adjust(wspace=0,hspace=0)


# Make a_c cos(phi) figure
plt.figure(1)

cosphilims = [ -0.07, 0.22]
cosphiticks = [0.0 ,0.1, 0.2]

## # t-plot
ax = plt.subplot(1,3,1)

xlims = tlimits
xticks = tticks
xticklabels=[str(ii) for ii in xticks]
xlabel = "$-t$ (GeV$^{2}$)"

ylims=cosphilims
yticks=cosphiticks
yticklabels=[str(x) for x in yticks]
ylabel="$A_{C}^{\cos(\phi)}$"

set_axis_opts(xlims,xticks,xticklabels,xlabel,
              ylims,yticks,yticklabels,ylabel)

## # Phenomenology
ax.plot(taxis2,km_ac_t_cos1[0],"b--",label="KM09 (a)",lw=2)
ax.plot(taxis2,km_ac_t_cos1[1],"m-.",label="KM09 (b)",lw=2)
ax.plot(taxis2,liuti_ac_t_cos1,"g:",lw=2)

# HERMES 6-bin
ax.errorbar(taxis2,hermes_ac_6bin_t[1],hermes_ac_6bin_t_d_stat[1],
             marker='s',ms=5,mfc='red',ls='None',c="red")

## # Make a legend
handles, labels = ax.get_legend_handles_labels()
leg_spec = matplotlib.font_manager.FontProperties(size="large")
ax.legend(handles,labels,loc="upper center",mode="expand",numpoints=1,prop=leg_spec,frameon=False)

# Make syst error band
offset = -0.04

verts = [
    (taxis2_edges[0][0],offset),
    (taxis2_edges[5][1],offset),
    ]

codes = [ Path.Path.MOVETO,
          Path.Path.LINETO,]

for ii in range(5,-1,-1):
    verts.append((taxis2_edges[ii][1], offset + hermes_ac_6bin_t_d_syst[1][ii]))
    codes.append(Path.Path.LINETO)
    verts.append((taxis2_edges[ii][0], offset + hermes_ac_6bin_t_d_syst[1][ii]))
    codes.append(Path.Path.LINETO)

# Close the path
verts.append((taxis2_edges[0][0], offset + hermes_ac_6bin_t_d_syst[1][0]))
codes.append(Path.Path.CLOSEPOLY)

# Make the drawn object
syst_band = Path.Path(verts,codes)
patch = patches.PathPatch(syst_band,facecolor="None",ec="red")
ax.add_patch(patch)



# xB plots
ax = plt.subplot(1,3,2)

xlims = xBlimits
xticks = xBticks
xticklabels = map(str,xticks)
xlabel = "$x_B$"

# Get rid of the labels on the y-axis
ylabel=""
yticklabels=["" for ii in range(len(yticks))]

set_axis_opts(xlims,xticks,xticklabels,xlabel,
              ylims,yticks,yticklabels,ylabel)

## # Phenomenology
ax.plot(xaxis2,km_ac_x_cos1[0],"b--",lw=2)
ax.plot(xaxis2,km_ac_x_cos1[1],"m-.",lw=2)
ax.plot(xaxis2,liuti_ac_x_cos1,"g:",lw=2,label="GGL11")


# HERMES 6-bin
ax.errorbar(xaxis2,hermes_ac_6bin_x[1],hermes_ac_6bin_x_d_stat[1],
             marker='s',ms=5,mfc='red',ls='None',c="red")

# Make syst error band
offset = -0.04

verts = [
    (xaxis2_edges[0][0],offset),
    (xaxis2_edges[5][1],offset),
    ]

codes = [ Path.Path.MOVETO,
          Path.Path.LINETO,]

for ii in range(5,-1,-1):
    verts.append((xaxis2_edges[ii][1], offset + hermes_ac_6bin_x_d_syst[1][ii]))
    codes.append(Path.Path.LINETO)
    verts.append((xaxis2_edges[ii][0], offset + hermes_ac_6bin_x_d_syst[1][ii]))
    codes.append(Path.Path.LINETO)

# Close the path
verts.append((xaxis2_edges[0][0], offset + hermes_ac_6bin_x_d_syst[1][0]))
codes.append(Path.Path.CLOSEPOLY)

# Make the object
syst_band = Path.Path(verts,codes)
patch = patches.PathPatch(syst_band,facecolor="None",ec="red")
ax.add_patch(patch)

## # Make a legend
handles, labels = ax.get_legend_handles_labels()
leg_spec = matplotlib.font_manager.FontProperties(size="large")
ax.legend(handles,labels,loc="upper center",mode="expand",numpoints=1,prop=leg_spec,frameon=False)


# Q^2 plots
ax = plt.subplot(1,3,3)

xlims = qlimits
xticks = qticks
xticklabels = map(str,xticks)
xlabel = "$Q^2$ (GeV$^2$)"

# Get rid of the labels on the y-axis
ylabel=""
yticklabels=["" for ii in range(len(yticks))]

set_axis_opts(xlims,xticks,xticklabels,xlabel,
              ylims,yticks,yticklabels,ylabel)

## # Phenomenology
ax.plot(qaxis2,km_ac_q_cos1[0],"b--",lw=2)
ax.plot(qaxis2,km_ac_q_cos1[1],"m-.",lw=2)
ax.plot(qaxis2,liuti_ac_q_cos1,"g:",lw=2)

# HERMES 6-bin
ax.errorbar(qaxis2,hermes_ac_6bin_q[1],hermes_ac_6bin_q_d_stat[1],
             marker='s',ms=5,mfc='red',ls='None',c="red")


# Make syst error band
offset = -0.04

verts = [
    (qaxis2_edges[0][0],offset),
    (qaxis2_edges[5][1],offset),
    ]

codes = [ Path.Path.MOVETO,
          Path.Path.LINETO,]

for ii in range(5,-1,-1):
    verts.append((qaxis2_edges[ii][1], offset + hermes_ac_6bin_q_d_syst[1][ii]))
    codes.append(Path.Path.LINETO)
    verts.append((qaxis2_edges[ii][0], offset + hermes_ac_6bin_q_d_syst[1][ii]))
    codes.append(Path.Path.LINETO)

# Close the path
verts.append((qaxis2_edges[0][0], offset + hermes_ac_6bin_q_d_syst[1][0]))
codes.append(Path.Path.CLOSEPOLY)

# Make the object
syst_band = Path.Path(verts,codes)
patch = patches.PathPatch(syst_band,facecolor="None",ec="red")
ax.add_patch(patch)


plt.show()
