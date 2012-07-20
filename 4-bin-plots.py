from matplotlib import figure as fig
from matplotlib import pyplot as plt
import matplotlib
import math

def calc_d(x,y):
    if len(x) != len(y):
        "Arrays are different lengths!"
        return []
    
    ret_list = []
    for ii in range(len(x)):
        ret_list.append(math.sqrt(x[ii]**2 + y[ii]**2))
    return ret_list

bins=[
      [0.116,0.097,2.53], # Overall bin
      [0.031,0.079,2.00], # t-projections
      [0.094,0.102,2.58],
      [0.202,0.117,3.05],
      [0.417,0.127,3.77], 
      [0.091,0.054,1.45], # x-projection 
      [0.102,0.084,2.17],
      [0.127,0.121,3.13],
      [0.195,0.200,5.13],
      [0.076,0.056,1.25], # Q2-projection
      [0.097,0.078,1.86],
      [0.127,0.107,2.83],
      [0.186,0.171,4.91]
    ]

taxis = [ bins[ii+1][0] for ii in range(4) ]
xaxis = [ bins[ii+5][1] for ii in range(4) ]
qaxis = [ bins[ii+9][2] for ii in range(4) ]
    

# HERMES A_LU Data
# Nested list entries. Lists have the amplitudes, i.e. alu_classic_t[0][0] accesses
# the first t-bin of the first amplitude sin(\phi), alu_classic_t[0][1] accesses
# the second t-bin of the first amplitude sin(\phi) and alu_classic_t[1][0] accesses
# the first t-bin of the second amplitude sin(2\phi).
# Names should eb self-explanatory

# HERMES "classic" data analysis style (without recoil)
hermes_alu_classic_t= [[-0.234,-0.215,-0.305,-0.324],[-0.003,0.038,-0.022,-0.023]]
hermes_alu_classic_t_d_stat = [[0.029,0.035,0.041,0.063],[0.029,0.034,0.041,0.065]]
hermes_alu_classic_t_d_syst = [[0.013,0.010,0.015,0.019],[0.006,0.007,0.009,0.002]]

hermes_alu_classic_t_d_total = [calc_d(hermes_alu_classic_t_d_stat[ii],hermes_alu_classic_t_d_syst[ii])
                                for ii in (0,1)] 


hermes_alu_classic_x= [[-0.249,-0.254,-0.260,-0.234],[-0.003,0.001,0.052,-0.060]]
hermes_alu_classic_x_d_stat = [[0.031,0.036,0.040,0.054],[0.031,0.036,0.039,0.052]]
hermes_alu_classic_x_d_syst = [[0.065,0.050,0.041,0.030],[0.005,0.010,0.007,0.004]]

hermes_alu_classic_x_d_total = [calc_d(hermes_alu_classic_x_d_stat[ii],hermes_alu_classic_x_d_syst[ii])
                                for ii in (0,1)]


hermes_alu_classic_q= [[-0.239,-0.271,-0.222,-0.268],[0.002,-0.005,0.012,0.014]]
hermes_alu_classic_q_d_stat = [[0.036,0.034,0.038,0.042],[0.036,0.034,0.038,0.042]]
hermes_alu_classic_q_d_syst = [[0.062,0.054,0.045,0.033],[0.010,0.002,0.005,0.002]]

hermes_alu_classic_q_d_total = [calc_d(hermes_alu_classic_q_d_stat[ii],hermes_alu_classic_q_d_syst[ii])
                                for ii in (0,1)]

# HERMES "pure" data analysis style (with recoil)
hermes_alu_pure_t= [[-0.342,-0.256,-0.409,-0.336],[-0.010,0.060,-0.044,0.073]]
hermes_alu_pure_t_d_stat = [[0.047,0.045,0.053,0.094],[0.048,0.044,0.052,0.098]]
hermes_alu_pure_t_d_syst = [[0.016,0.014,0.015,0.022],[0.005,0.008,0.011,0.007]]

hermes_alu_pure_t_d_total = [calc_d(hermes_alu_pure_t_d_stat[ii],hermes_alu_pure_t_d_syst[ii])
                                for ii in (0,1)] 


hermes_alu_pure_x= [[-0.302,-0.345,-0.391,-0.262],[-0.003,0.013,0.104,-0.081]]
hermes_alu_pure_x_d_stat = [[0.047,0.050,0.055,0.075],[0.047,0.050,0.054,0.075]]
hermes_alu_pure_x_d_syst = [[0.066,0.053,0.043,0.027],[0.010,0.012,0.005,0.000]]

hermes_alu_pure_x_d_total = [calc_d(hermes_alu_pure_x_d_stat[ii],hermes_alu_pure_x_d_syst[ii])
                                for ii in (0,1)]


hermes_alu_pure_q= [[-0.306,-0.346,-0.298,-0.365],[0.003,0.018,0.009,0.032]]
hermes_alu_pure_q_d_stat = [[0.054,0.049,0.053,0.058],[0.053,0.049,0.053,0.059]]
hermes_alu_pure_q_d_syst = [[0.057,0.053,0.047,0.032],[0.024,0.004,0.006,0.000]]

hermes_alu_pure_q_d_total = [calc_d(hermes_alu_pure_q_d_stat[ii],hermes_alu_pure_q_d_syst[ii])
                                for ii in (0,1)]

# Liuti Predictions
liuti_alu_t = [-0.140,-0.213,-0.270,-0.307]
liuti_alu_x = [-0.208,-0.206,-0.252,-0.333]
liuti_alu_q = [-0.224,-0.248,-0.241,-0.297]

# HERMES Complete Data Set

# HERMES Interference
hermes_alu_I_t = [
    [-0.233257486795997088,-0.191429222499900353,-0.255496352628737655,-0.273378345506268217],
    [0.013792259199513343,-0.022482948033,-0.034005437723804224,-0.023335841759961652]
    ]

hermes_alu_I_t_d_stat = [
    [0.025820972454808449,0.033424557910585150,0.038710740338331537,0.059996273818080557],
    [0.025328725580420815,0.033057216425723943,0.038761025657946223,0.061678767573789824]
    ]
hermes_alu_I_t_d_syst = [
    [0.004735,0.008488,0.013728,0.016075],
    [0.002185,0.004383,0.009524,0.025125]
    ]

hermes_alu_I_t_d_total = [calc_d(hermes_alu_I_t_d_stat[ii],hermes_alu_I_t_d_syst[ii])
                                for ii in (0,1)] 

hermes_alu_I_x= [
    [-0.211308523002891269,-0.273728075101726420,-0.255761255591425318,-0.125832486669446408],
    [-0.013914462669781573,0.029999156880158664,-0.030617329005175144,-0.048843404084314326]
    ]
hermes_alu_I_x_d_stat = [
    [0.030471487489119948,0.033692602672867222,0.037907510858148134,0.05147036677383314],
    [0.030552495833160422,0.033588042517729622,0.038139843163760151,0.049719404254613415]
    ]
hermes_alu_I_x_d_syst = [[0.082902,0.031575,0.029914,0.007780],
                         [0.006887,0.009816,0.007511,0.005647]
                         ]

hermes_alu_I_x_d_total = [calc_d(hermes_alu_I_x_d_stat[ii],hermes_alu_I_x_d_syst[ii])
                                for ii in (0,1)]


hermes_alu_I_q= [
    [-0.206438694964471509,-0.271045143287665047,-0.239202153085215086,-0.182390861864073189],
    [-0.017530115885997330,-0.014580370012303775,0.027560183329378461,-0.038099868258346395]
    ]
hermes_alu_I_q_d_stat = [
    [0.034335767736470478,0.032871091205727995,0.036695171806115305,0.040561991083795393],
    [0.034197696441975678,0.032558504735476813,0.037036546838793302,0.040286011478602994]
    ]
hermes_alu_I_q_d_syst = [
    [0.065914,0.049826,0.044667,0.013825],
    [0.014183,0.004175,0.012966,0.005094]
    ]

hermes_alu_I_q_d_total = [calc_d(hermes_alu_I_q_d_stat[ii],hermes_alu_I_q_d_syst[ii])
                                for ii in (0,1)]


# HERMES DVCS
hermes_alu_dvcs_t= [0.034018929642120416,-0.013976100515830675,0.024032434213715551,0.022176347661721024]
hermes_alu_dvcs_t_d_stat=[0.025702663878828441,0.033530649444740608,0.038911324271927332,0.060175010079618611]
hermes_alu_dvcs_t_d_syst = [0.003842,0.003531,0.006939,0.015324]

hermes_alu_dvcs_t_d_total = calc_d(hermes_alu_dvcs_t_d_stat,hermes_alu_dvcs_t_d_syst) 


hermes_alu_dvcs_x= [0.015612155184859373,0.049311411071714349,0.019782105100832153,-0.055853616009468338]
hermes_alu_dvcs_x_d_stat=[0.030590905051734639,0.03377977762235818,0.038023227545423005,0.051668829833993853]
hermes_alu_dvcs_x_d_syst = [0.003355,0.004300,0.003873,0.018770]

hermes_alu_dvcs_x_d_total = calc_d(hermes_alu_dvcs_x_d_stat,hermes_alu_dvcs_x_d_syst)


hermes_alu_dvcs_q= [0.016039799039136875,0.040789493588740157,0.026594029057292263,-0.031483303896328342]
hermes_alu_dvcs_q_d_stat = [0.034422427994971888,0.033035325640078765,0.036821848595006708,0.040653668259885783]
hermes_alu_dvcs_q_d_syst = [0.002068,0.003530,0.003813,0.008792]

hermes_alu_dvcs_q_d_total = calc_d(hermes_alu_dvcs_q_d_stat,hermes_alu_dvcs_q_d_syst)


# A_C data

# t
hermes_ac_t=[[-0.010995557666784006,-0.017358815352054524,-0.023735090464467066,-0.060636253147785230],
             [0.006296392621142719,0.040727707371012528,0.069221174142629419,0.138676890407678249],
             [-0.013031547357036696,-0.000465941747636600,-0.000309566570538809,0.031369393690098481],
             [-0.004440307083134254,-0.013391555401703906,0.019648314984521228,0.003572271383370227]
            ]
hermes_ac_t_d_stat=[[0.005003930007567507,0.006021798406625051,0.007039842379816974,0.011342415406529433],
                    [0.007053562022163644,0.008392353346951677,0.009930967921205307,0.016924993989441240],
                    [0.007039193302291546,0.008350538111077674,0.009729858045024648,0.015800153812410737],
                    [0.007112812729884183,0.008380512078442601,0.009756984733814708,0.015375149927869345]
                   ]
hermes_ac_t_d_syst=[[0.007605,0.007251,0.005196,0.006915],
                    [0.001638,0.015747,0.024329,0.046865],
                    [0.003813,0.014198,0.035259,0.039270],
                    [0.004359,0.003859,0.000883,0.008547]
                   ]

hermes_ac_t_d_total = [ calc_d(hermes_ac_t_d_stat[ii],hermes_ac_t_d_syst[ii]) for ii in range(4) ]

# xB
hermes_ac_x=[[-0.042297134833106959,-0.020879196961277619,-0.010273903312394087,0.009525095611749013],
             [0.024964837714583694,0.032716329402159045,0.036125825639055524,0.047430482497101564],
             [-0.017678013334391715,-0.001651674280070309,-0.004277377447155492,0.027660577689119718],
             [0.002027640351691827,-0.014174516951805157,0.005035261066797977,-0.016420330475164498]
            ]
hermes_ac_x_d_stat=[[0.005648207254891777,0.006210077448390538,0.007027563032973355,0.009511707923596759],
                    [0.008168731213122424,0.008771364400029902,0.009969274303445555,0.013509006819366351],
                    [0.007833797210007497,0.008622117231645554,0.009765965419586124,0.013229233498680704],
                    [0.007590786729053187,0.008629771972970653,0.009697344480621014,0.012951538607519469],
                   ]
hermes_ac_x_d_syst=[[0.011229,0.017371,0.009025,0.010598],
                    [0.013314,0.018280,0.007326,0.010650],
                    [0.010507,0.013666,0.004491,0.012017],
                    [0.001186,0.004788,0.008503,0.002053]
                   ]

hermes_ac_x_d_total = [ calc_d(hermes_ac_x_d_stat[ii],hermes_ac_x_d_syst[ii]) for ii in range(4) ]



# Q2
hermes_ac_q=[[-0.041316183808863274,-0.029710885505703739,-0.013699613880876068,0.013114175384147924],
             [0.028001300880661592,0.040181201853396888,0.042488567122892208,0.045573272041335267],
             [-0.010166618471141765,-0.020704119268176471,0.021285705363519286,0.004605279907538683],
             [-0.001910031394507281,0.006509662316194415,-0.014236210209282880,-0.002275597614123247]
            ]
hermes_ac_q_d_stat=[[0.006144887810786623,0.005929823054267669,0.006802467189981229,0.007584071296791892],
                    [0.008597406758370826,0.008248290008365387,0.009707215140513755,0.010733654308195967],
                    [0.008507896166439686,0.008253630104152197,0.009425620886149908,0.010545834607389126],
                    [0.008489376204082862,0.008229669024289638,0.009475148588557010,0.010546365050917043],
                   ]
hermes_ac_q_d_syst=[[0.025487,0.022297,0.021051,0.02999],
                    [0.029143,0.021184,0.016517,0.019182],
                    [0.012220,0.010482,0.017144,0.007210],
                    [0.005023,0.001531,0.005777,0.003601]
                   ]

hermes_ac_q_d_total = [ calc_d(hermes_ac_q_d_stat[ii],hermes_ac_q_d_syst[ii]) for ii in range(4) ]

# 6-bin analysis
hermes_alu_I_6bin_t = [
    [-0.225,-0.242,-0.177,-0.253,-0.287,-0.173],
    [0.003,0.026,-0.002,-0.008,-0.047,-0.111]
    ]

hermes_alu_I_6bin_t_d_stat = [
    [0.039,0.039,0.043,0.037,0.050,0.072],
    [0.039,0.038,0.043,0.037,0.051,0.074]
    ]

hermes_alu_I_6bin_t_d_syst = [
    [0.010,0.014,0.012,0.010,0.006,0.016],
    [0.003,0.001,0.005,0.006,0.005,0.028]
    ]

hermes_alu_I_6bin_t_d_total = [ calc_d(hermes_alu_I_6bin_t_d_stat[ii], hermes_alu_I_6bin_t_d_syst[ii]) \
                                for ii in range(2)
                                ]
    

hermes_alu_I_6bin_x = [
    [-0.249, -0.228, -0.250, -0.237, -0.224, -0.077],
    [ -0.044,0.023,0.032,-0.027,-0.050,-0.023]
    ]

hermes_alu_I_6bin_x_d_stat = [
    [0.038 , 0.037, 0.043, 0.045, 0.048, 0.080],
    [0.039,0.037,0.043,0.045,0.047,0.080]
    ]

hermes_alu_I_6bin_x_d_syst = [
    [0.079, 0.049, 0.033, 0.030, 0.013, 0.022],
    [0.011,0.012,0.007,0.010,0.006,0.007]
    ]

hermes_alu_I_6bin_x_d_total = [ calc_d(hermes_alu_I_6bin_x_d_stat[ii], hermes_alu_I_6bin_x_d_syst[ii]) \
                                for ii in range(2)
                                ]
    

hermes_alu_I_6bin_q = [
    [-0.218,-0.257,-0.233,-0.302,-0.160,-0.169],
    [-0.023,0.011,-0.010,0.031,-0.061,-0.017]
    ]

hermes_alu_I_6bin_q_d_stat = [
    [0.038,0.042,0.041,0.044,0.048,0.057],
    [0.038,0.042,0.040,0.044,0.048,0.056]
    ]

hermes_alu_I_6bin_q_d_syst = [
    [0.063,0.064,0.042,0.044,0.032,0.008],
    [0.012,0.004,0.007,0.005,0.004,0.013]
    ]

hermes_alu_I_6bin_q_d_total = [ calc_d(hermes_alu_I_6bin_q_d_stat[ii], hermes_alu_I_6bin_q_d_syst[ii]) \
                                for ii in range(2)
                                ]


# DVCS Term
hermes_alu_DVCS_6bin_t = [0.048,0.019,-0.023,0.010,0.105,-0.107]

hermes_alu_DVCS_6bin_t_d_stat = [0.039,0.039,0.043,0.037,0.051,0.073]

hermes_alu_DVCS_6bin_t_d_syst = [0.003,0.005,0.004,0.002,0.002,0.023]

hermes_alu_DVCS_6bin_t_d_total = calc_d(hermes_alu_DVCS_6bin_t_d_stat, hermes_alu_DVCS_6bin_t_d_syst)    

hermes_alu_DVCS_6bin_x = [0.035,0.013,0.047,-0.003,0.033,-0.141]

hermes_alu_DVCS_6bin_x_d_stat = [0.038,0.038,0.043,0.045,0.048,0.085]

hermes_alu_DVCS_6bin_x_d_syst = [0.004,0.002,0.004,0.006,0.006,0.012]

hermes_alu_DVCS_6bin_x_d_total = calc_d(hermes_alu_DVCS_6bin_x_d_stat, hermes_alu_DVCS_6bin_x_d_syst)
    

hermes_alu_DVCS_6bin_q = [0.029,0.040,0.016,0.087,-0.057,-0.065]

hermes_alu_DVCS_6bin_q_d_stat = [0.038,0.042,0.041,0.044,0.048,0.057]

hermes_alu_DVCS_6bin_q_d_syst = [0.002,0.006,0.004,0.006,0.005,0.005]

hermes_alu_DVCS_6bin_q_d_total = calc_d(hermes_alu_DVCS_6bin_q_d_stat, hermes_alu_DVCS_6bin_q_d_syst)

# A_C Data

# t
hermes_ac_t=[[-0.017,-0.05,-0.012,-0.016,-0.040,-0.072],
             [0.005,0.007,0.028,0.052,0.108,0.134],
             [-0.023,-0.003,0.013,-0.008,-0.003,0.049],
             [-0.013,0.005,-0.023,0.006,0.012,0.030]
            ]
hermes_ac_t_d_stat=[[0.007,0.007,0.008,0.007,0.009,0.014],
                    [0.010,0.010,0.011,0.009,0.013,0.021],
                    [0.010,0.010,0.011,0.009,0.013,0.019],
                    [0.010,0.010,0.011,0.009,0.013,0.019]
                   ]
hermes_ac_t_d_syst=[[0.007,0.006,0.006,0.009,0.002,0.004],
                    [0.003,0.014,0.013,0.015,0.030,0.062],
                    [0.001,0.007,0.013,0.025,0.040,0.040],
                    [0.004,0.004,0.003,0.001,0.001,0.017]
                   ]

hermes_ac_t_d_total = [ calc_d(hermes_ac_t_d_stat[ii],hermes_ac_t_d_syst[ii]) for ii in range(4) ]

# xB
hermes_ac_x=[[-0.045,-0.035,-0.017,-0.007,-0.006,0.019],
             [0.016,0.028,0.044,0.030,0.049,0.050],
             [-0.017,-0.019,0.005,-0.001,-0.001,0.051],
             [0.004,-0.012,-0.009,-0.009,0.002,0.002]
            ]
hermes_ac_x_d_stat=[[0.007,0.007,0.008,0.008,0.009,0.016],
                    [0.011,0.009,0.011,0.012,0.013,0.022],
                    [0.010,0.009,0.011,0.012,0.012,0.022],
                    [0.009,0.009,0.011,0.011,0.012,0.021],
                   ]
hermes_ac_x_d_syst=[
    [0.014,0.013,0.017,0.015,0.007,0.027],
    [0.014,0.015,0.019,0.002,0.030,0.018],
    [0.013,0.009,0.016,0.006,0.001,0.027],
    [0.003,0.005,0.002,0.009,0.005,0.008]
    ]

hermes_ac_x_d_total = [ calc_d(hermes_ac_x_d_stat[ii],hermes_ac_x_d_syst[ii]) for ii in range(4) ]



# Q2
hermes_ac_q=[[-0.048,-0.022,-0.028,-0.017,0.011,0.006],
             [0.029,0.041,0.031,0.059,0.037,0.038],
             [-0.008,-0.020,-0.012,0.014,-0.008,0.036],
             [0.005-0.004,-0.000,-0.010,-0.012,0.005]
            ]
hermes_ac_q_d_stat=[[0.007,0.008,0.007,0.008,0.009,0.011],
                    [0.010,0.011,0.010,0.012,0.013,0.015],
                    [0.009,0.011,0.010,0.011,0.013,0.015],
                    [0.009,0.011,0.010,0.011,0.012,0.015],
                   ]
hermes_ac_q_d_syst=[[0.024,0.022,0.022,0.019,0.013,0.013],
                    [0.030,0.021,0.018,0.019,0.002,0.038],
                    [0.011,0.012,0.013,0.013,0.015,0.002],
                    [0.004,0.002,0.004,0.009,0.001,0.004]
                   ]

hermes_ac_q_d_total = [ calc_d(hermes_ac_q_d_stat[ii],hermes_ac_q_d_syst[ii]) for ii in range(4) ]

    
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
alu_fig = plt.figure(1)
alu_fig.subplots_adjust(wspace=0,hspace=0)

ac_fig = plt.figure(2)
ac_fig.subplots_adjust(wspace=0,hspace=0)


# Make a_lu figure
plt.figure(1)

# y-axis values
sinphilims = [-0.5,0.15]
sinphiticks = [-0.4,-0.3,-0.2,-0.1,0,0.1]

# Make t-plots
tlimits=[0.01,0.7]
tticks=[0.01,0.1]

# -- sin(phi)
ax = plt.subplot(2,3,1)


xlims = tlimits
xticks = tticks
xticklabels=["" for ii in range(len(xticks))]
xlabel=""

ylims=sinphilims
yticks=sinphiticks
yticklabels=[str(x) for x in yticks]
ylabel="$A_{LU}\,\sin(\phi)$"

set_axis_opts(xlims,xticks,xticklabels,xlabel,
              ylims,yticks,yticklabels,ylabel)

# HERMES 'classic'
plt.errorbar(taxis,hermes_alu_classic_t[0],hermes_alu_classic_t_d_total[0],
             marker='s',ms=5,mfc='red',ls='None',c="red",label="HERMES Classic")

# HERMES "pure"
ax.errorbar([x*1.1 for x in taxis],hermes_alu_pure_t[0],hermes_alu_pure_t_d_total[0],
            marker='^',ms=5,mfc='blue',ls="None",c="blue",label="HERMES Pure")

# Liuti data points
ax.plot([x*1.2 for x in taxis],liuti_alu_t,marker='o',ms=4,mfc="green",ls="--",c="green",label="Liuti")


# Make a legend
handles, labels = ax.get_legend_handles_labels()


# -- sin(2\phi)
ax = plt.subplot(2,3,4)

xticklabels=[str(ii) for ii in xticks]
xlabel = "$-t_{c}$ (GeV$^{2}$)"

ylabel = "$A_{LU}\,\sin(2\phi)$"

set_axis_opts(xlims,xticks,xticklabels,xlabel,
              ylims,yticks,yticklabels,ylabel)

plt.errorbar(taxis,hermes_alu_classic_t[1],hermes_alu_classic_t_d_total[1],
             marker='s',ms=5,mfc='red',ls='None',c="red")

# HERMES "pure"
ax.errorbar([x*1.1 for x in taxis],hermes_alu_pure_t[1],hermes_alu_pure_t_d_total[1],
            marker='^',ms=5,mfc='blue',ls="None",c="blue")


# Make x-plots
xBlimits = [0.025,0.39]
xBticks = [0.03,0.3]

# -- sin(\phi)
ax = plt.subplot(2,3,2)


xlims = xBlimits
xticks = xBticks
xticklabels=["" for ii in range(len(xticks))]
xlabel = ""

# Get rid of the labels on the y-axis
ylabel=""
yticklabels=["" for ii in range(len(yticks))]

set_axis_opts(xlims,xticks,xticklabels,xlabel,
              ylims,yticks,yticklabels,ylabel)

# HERMES "classic"
plt.errorbar(xaxis,hermes_alu_classic_x[0],hermes_alu_classic_x_d_total[0],
             marker='s',ms=5,mfc='red',ls='None',c="red")

# HERMES "pure"
ax.errorbar([x*1.1 for x in xaxis],hermes_alu_pure_x[0],hermes_alu_pure_x_d_total[0],
            marker='^',ms=5,mfc='blue',ls="None",c="blue")


# Liuti data points
ax.plot([x*1.2 for x in xaxis],liuti_alu_x,marker='o',ms=4,mfc="green",ls="--",c="green")

# -- sin(2\phi)
ax = plt.subplot(2,3,5)

xticklabels=[str(x) for x in xticks]
xlabel = "$x_B$"

set_axis_opts(xlims,xticks,xticklabels,xlabel,
              ylims,yticks,yticklabels,ylabel)

plt.errorbar(xaxis,hermes_alu_classic_x[1],hermes_alu_classic_x_d_total[1],
             marker='s',ms=5,mfc='red',ls='None',c="red")
# HERMES "pure"
ax.errorbar([x*1.1 for x in xaxis],hermes_alu_pure_x[1],hermes_alu_pure_x_d_total[1],
            marker='^',ms=5,mfc='blue',ls="None",c="blue")

leg_spec = matplotlib.font_manager.FontProperties(size="small")
ax.legend(handles,labels,loc="lower center",mode="expand",numpoints=1,prop=leg_spec)
# Make q-plots
qlimits = [0.9,10]
qticks=[1,5,10]

# -- sin(\phi)
ax = plt.subplot(2,3,3)

xlims = qlimits
xticks = qticks
xticklabels = ["" for ii in range(len(xticks))]
xlabel = ""

set_axis_opts(xlims,xticks,xticklabels,xlabel,
              ylims,yticks,yticklabels,ylabel)

# HERMES "classic"
plt.errorbar(qaxis,hermes_alu_classic_q[0],hermes_alu_classic_q_d_total[0],
             marker='s',ms=5,mfc='red',ls='None',c="red")

# HERMES "pure"
ax.errorbar([x*1.1 for x in qaxis],hermes_alu_pure_q[0],hermes_alu_pure_q_d_total[0],
            marker='^',ms=5,mfc='blue',ls="None",c="blue")

# Liuti data points
ax.plot([x*1.2 for x in qaxis],liuti_alu_q,marker='o',ms=4,mfc="green",ls="--",c="green")

# -- sin(2\phi)
ax = plt.subplot(2,3,6)

xticklabels=[str(x) for x in xticks]
xlabel="$Q^2$ (GeV$^{2}$)"

set_axis_opts(xlims,xticks,xticklabels,xlabel,
              ylims,yticks,yticklabels,ylabel)

plt.errorbar(qaxis,hermes_alu_classic_q[1],hermes_alu_classic_q_d_total[1],
             marker='s',ms=5,mfc='red',ls='None',c="red")

# HERMES "pure"
ax.errorbar([x*1.1 for x in qaxis],hermes_alu_pure_q[1],hermes_alu_pure_q_d_total[1],
            marker='^',ms=5,mfc='blue',ls="None",c="blue")


plt.savefig("hermes_alu_four_bins_with_liuti.pdf")



# a_c figure
plt.figure(2)

cosphilims = [ -0.1, 0.2]
cosphiticks = [-0.05, 0.05 ,0.15]


xlims = tlimits
xticks = tticks
xticklabels=["" for ii in range( len(xticks) ) ]
xlabel=""

# -- cos(0\phi)
ax = plt.subplot(4,3,1)

ylims=cosphilims
yticks=cosphiticks
yticklabels=[str(x) for x in yticks]
ylabel="$A_{C}\,\cos(0\phi)$"

set_axis_opts(xlims,xticks,xticklabels,xlabel,
              ylims,yticks,yticklabels,ylabel)

# HERMES 'classic' - only type of data for A_C
plt.errorbar(taxis,hermes_ac_t[0],hermes_ac_t_d_total[0],
             marker='+',ms=5,mfc='red',ls='None',c="red",label="HERMES Classic")


# -- cos(\phi)
ax = plt.subplot(4,3,4)

ylabel="$A_{C}\,\cos(\phi)$"

set_axis_opts(xlims,xticks,xticklabels,xlabel,
              ylims,yticks,yticklabels,ylabel)

plt.errorbar(taxis,hermes_ac_t[1],hermes_ac_t_d_total[1],
             marker='+',ms=5,mfc='red',ls='None',c="red",label="HERMES Classic")

# -- cos(2\phi)
ax = plt.subplot(4,3,7)

ylabel="$A_{C}\,\cos(2\phi)$"

set_axis_opts(xlims,xticks,xticklabels,xlabel,
              ylims,yticks,yticklabels,ylabel)

plt.errorbar(taxis,hermes_ac_t[2],hermes_ac_t_d_total[2],
             marker='+',ms=5,mfc='red',ls='None',c="red",label="HERMES Classic")

# -- cos(3\phi)
ax = plt.subplot(4,3,10)

# Need to add x-axis labels for this plot

xlims = tlimits
xticks = tticks
xticklabels=["" for ii in range( len(xticks) ) ]
xlabel="$t_c$ (GeV$^{2}$)"

ylabel="$A_{C}\,\cos(3\phi)$"

set_axis_opts(xlims,xticks,xticklabels,xlabel,
              ylims,yticks,yticklabels,ylabel)

plt.errorbar(taxis,hermes_ac_t[3],hermes_ac_t_d_total[3],
             marker='+',ms=5,mfc='red',ls='None',c="red",label="HERMES Classic")


# xB plots

# -- cos(0\phi)
ax = plt.subplot(4,3,2)

xlims = xBlimits
xticks = xBticks
xticklabels=["" for ii in range(len(xticks))]
xlabel = ""

# Get rid of the labels on the y-axis
ylabel=""
yticklabels=["" for ii in range(len(yticks))]

set_axis_opts(xlims,xticks,xticklabels,xlabel,
              ylims,yticks,yticklabels,ylabel)

# HERMES "classic"
plt.errorbar(xaxis,hermes_ac_x[0],hermes_ac_x_d_total[0],
             marker='+',ms=5,mfc='red',ls='None',c="red")

# -- cos(\phi)
ax = plt.subplot(4,3,5)

set_axis_opts(xlims,xticks,xticklabels,xlabel,
              ylims,yticks,yticklabels,ylabel)

plt.errorbar(xaxis,hermes_ac_x[1],hermes_ac_x_d_total[1],
             marker='+',ms=5,mfc='red',ls='None',c="red")

# -- cos(2\phi)
ax = plt.subplot(4,3,8)

set_axis_opts(xlims,xticks,xticklabels,xlabel,
              ylims,yticks,yticklabels,ylabel)

plt.errorbar(xaxis,hermes_ac_x[2],hermes_ac_x_d_total[2],
             marker='+',ms=5,mfc='red',ls='None',c="red")

# -- cos(3\phi)
ax = plt.subplot(4,3,11)

# Need x-axis labels for this plot

xticklabels = map(str,xticks)  
xlabel = "$x_{B}$"

set_axis_opts(xlims,xticks,xticklabels,xlabel,
              ylims,yticks,yticklabels,ylabel)

plt.errorbar(xaxis,hermes_ac_x[3],hermes_ac_x_d_total[3],
             marker='+',ms=5,mfc='red',ls='None',c="red")


# Q2 plots

# -- cos(0\phi)
ax = plt.subplot(4,3,3)

xlims = qlimits
xticks = qticks
xticklabels=["" for ii in range(len(xticks))]
xlabel = ""

# Get rid of the labels on the y-axis
ylabel=""
yticklabels=["" for ii in range(len(yticks))]

set_axis_opts(xlims,xticks,xticklabels,xlabel,
              ylims,yticks,yticklabels,ylabel)

# HERMES "classic"
plt.errorbar(qaxis,hermes_ac_q[0],hermes_ac_q_d_total[0],
             marker='+',ms=5,mfc='red',ls='None',c="red")

# -- cos(\phi)
ax = plt.subplot(4,3,6)

set_axis_opts(xlims,xticks,xticklabels,xlabel,
              ylims,yticks,yticklabels,ylabel)

plt.errorbar(qaxis,hermes_ac_q[1],hermes_ac_q_d_total[1],
             marker='+',ms=5,mfc='red',ls='None',c="red")

# -- cos(2\phi)
ax = plt.subplot(4,3,9)

set_axis_opts(xlims,xticks,xticklabels,xlabel,
              ylims,yticks,yticklabels,ylabel)

plt.errorbar(qaxis,hermes_ac_q[2],hermes_ac_q_d_total[2],
             marker='+',ms=5,mfc='red',ls='None',c="red")

# -- cos(3\phi)
ax = plt.subplot(4,3,12)

# Need x-axis labels for this plot

xticklabels = map(str,xticks)  
xlabel = "$Q^2$ (GeV$^2$)"

set_axis_opts(xlims,xticks,xticklabels,xlabel,
              ylims,yticks,yticklabels,ylabel)

plt.errorbar(qaxis,hermes_ac_q[3],hermes_ac_q_d_total[3],
             marker='+',ms=5,mfc='red',ls='None',c="red")


# Save the a_c figure
plt.savefig("hermes_ac_four_bins.pdf")


with open('ac_4bin.dat','w') as f:

    # ii = bin counter
    # jj = amplitude counter

    overall = 0
    spacer = "\t"

    for kk in range(13):

        if kk == 0:
            continue # Skip the overall bin

        idx1 = int((kk-1)/4)
        idx2 = int((kk-1)%4)

        if idx1 == 0 and idx2 == 0:
            f.write("\n\n\n####### t-projections #######\n")
        elif idx1 == 1 and idx2 == 0:
            f.write("\n\n\n####### xB-projections #######\n")
        elif idx1 == 2 and idx2 == 0:
            f.write("\n\n\n####### Q2-projections #######\n")
        
        f.write("\nAvg Bin Kinematics:\t t=" + str(bins[kk][0]) + "\t x=" + \
                str(bins[kk][1]) + "\t q=" +str(bins[kk][2]) + "\n")

        if idx1 < 1:
            for ii in range(4):
                 wrt_str = "Acos(" + str(ii) + "\phi): " + \
                  str(hermes_ac_t[ii][idx2]) + spacer +\
                  str(hermes_ac_t_d_stat[ii][idx2]) + " " + " (dstat.)" + spacer +\
                  str(hermes_ac_t_d_syst[ii][idx2]) + " " + " (dsyst.)" + spacer +\
                  str(hermes_ac_t_d_total[ii][idx2]) + " (dtotal) \n"
                 f.write(wrt_str)

            for ii in range(2):
                wrt_str = "A_I sin(" + str(ii+1) + "\phi): " + \
                  str(hermes_alu_I_t[ii][idx2]) + spacer +\
                  str(hermes_alu_I_t_d_stat[ii][idx2]) + " " + " (dstat.)" + spacer +\
                  str(hermes_alu_I_t_d_syst[ii][idx2]) + " " + " (dsyst.)" + spacer  +\
                  str(hermes_alu_I_t_d_total[ii][idx2]) + " (dtotal) \n"
                f.write(wrt_str)

            wrt_str = "A_DVCS sin(\phi): " + \
                  str(hermes_alu_dvcs_t[idx2]) + spacer +\
                  str(hermes_alu_dvcs_t_d_stat[idx2]) + " " + " (dstat.)" + spacer +\
                  str(hermes_alu_dvcs_t_d_syst[idx2]) + " " + " (dsyst.)" + spacer  +\
                  str(hermes_alu_dvcs_t_d_total[idx2]) + " (dtotal) \n"
            f.write(wrt_str)

        elif idx1 < 2:
            for ii in range(4):
                 wrt_str = "Acos(" + str(ii) + "\phi): " + \
                  str(hermes_ac_x[ii][idx2]) + spacer +\
                  str(hermes_ac_x_d_stat[ii][idx2]) + " " + " (dstat.)" + spacer +\
                  str(hermes_ac_x_d_syst[ii][idx2]) + " " + " (dsyst.)" + spacer  +\
                  str(hermes_ac_x_d_total[ii][idx2]) + " (dtotal) \n"
                 f.write(wrt_str)

            for ii in range(2):
                wrt_str = "A_I sin(" + str(ii+1) + "\phi): " + \
                  str(hermes_alu_I_x[ii][idx2]) + spacer +\
                  str(hermes_alu_I_x_d_stat[ii][idx2]) + " " + " (dstat.)" + spacer +\
                  str(hermes_alu_I_x_d_syst[ii][idx2]) + " " + " (dsyst.)" + spacer  +\
                  str(hermes_alu_I_x_d_total[ii][idx2]) + " (dtotal) \n"
                f.write(wrt_str)

            wrt_str = "A_DVCS sin(\phi): " + \
                  str(hermes_alu_dvcs_x[idx2]) + spacer +\
                  str(hermes_alu_dvcs_x_d_stat[idx2]) + " " + " (dstat.)" + spacer +\
                  str(hermes_alu_dvcs_x_d_syst[idx2]) + " " + " (dsyst.)" + spacer  +\
                  str(hermes_alu_dvcs_x_d_total[idx2]) + " (dtotal) \n"
            f.write(wrt_str)

        else:
            for ii in range(4):
                wrt_str = "Acos(" + str(ii) + "\phi): " + \
                          str(hermes_ac_q[ii][idx2]) + spacer +\
                          str(hermes_ac_q_d_stat[ii][idx2]) + " " + " (dstat.)" + spacer +\
                          str(hermes_ac_q_d_syst[ii][idx2]) + " " + " (dsyst.)" + spacer  +\
                          str(hermes_ac_q_d_total[ii][idx2]) + " (dtotal) \n"
                f.write(wrt_str)

            for ii in range(2):
                wrt_str = "A_I sin(" + str(ii+1) + "\phi): " + \
                          str(hermes_alu_I_q[ii][idx2]) + spacer +\
                          str(hermes_alu_I_q_d_stat[ii][idx2]) + " " + " (dstat.)" + spacer +\
                          str(hermes_alu_I_q_d_syst[ii][idx2]) + " " + " (dsyst.)" + spacer  +\
                          str(hermes_alu_I_q_d_total[ii][idx2]) + " (dtotal) \n"
                f.write(wrt_str)

            wrt_str = "A_DVCS sin(\phi): " + \
                      str(hermes_alu_dvcs_q[idx2]) + spacer +\
                      str(hermes_alu_dvcs_q_d_stat[idx2]) + " " + " (dstat.)" + spacer +\
                      str(hermes_alu_dvcs_q_d_syst[idx2]) + " " + " (dsyst.)" + spacer  +\
                      str(hermes_alu_dvcs_q_d_total[idx2]) + " (dtotal) \n"
            f.write(wrt_str)


