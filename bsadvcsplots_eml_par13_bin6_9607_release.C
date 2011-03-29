/* 
Macro for displaying values for BSA vs standard kinematics


STAND-ALONE PROGRAM. Compile and run with links to ROOT libraries.
Use root-compile.sh shell script


*/

#include "Riostream.h"
#include "TROOT.h"
#include "TTree.h"
#include "TGraph.h"
#include "TMinuit.h"
#include "TCanvas.h"
#include "TLegend.h"
#include "TLine.h"
#include "TGraphErrors.h"
#include "TStyle.h"
#include "TSystem.h"
#include "TPad.h"
#include "TVirtualPad.h"
#include "TAxis.h"
#include "TH1.h"
#include "TPolyLine.h"
#include "TAttFill.h"
#include "TLatex.h"

#define bins 9
#define pup 1.2
#define plo 0

#define std_title_size 0.05
#define std_title_offset 0.9



int main(){

  //gROOT->Reset();

  gStyle->SetOptStat(0);
  gStyle->SetOptFit(0);
  gStyle->SetStatX(0.9); 
  gStyle->SetStatY(0.9);
  gStyle->SetStatW(0.4);
  gStyle->SetStatH(0.26);
  gStyle->SetStatBorderSize(1);
  gStyle->SetStatColor(0);
  gStyle->SetTitleFillColor(0);
  //gStyle->SetTitleXOffset(100);
  //gStyle->SetTitleYOffset(100);
  gStyle->SetTitleBorderSize(1);
  //gStyle->SetTitleY(0.9);
  //gStyle->SetTitleX(0.1);
  gStyle->SetCanvasBorderMode(0);
  gStyle->SetCanvasColor(0);
  gStyle->SetPadBorderMode(0);


  gStyle->SetFrameBorderMode(0);
  gStyle->SetFrameFillStyle(0);
  gStyle->SetFillStyle(0);



  /** LOAD DATA **/

 /* Reading values from pi0 Q2, xB, tc .txt files */
  /*********************************************************************************************************
   ********************************************************************************************************/

  Double_t c0ctc_pi0[7];
  Double_t c1ctc_pi0[7];
  Double_t s1ctc_pi0[7];
  Double_t c2ctc_pi0[7];
  Double_t c3ctc_pi0[7];
  Double_t dc0ctc_pi0[7];
  Double_t dc1ctc_pi0[7];
  Double_t ds1ctc_pi0[7];
  Double_t dc2ctc_pi0[7];
  Double_t dc3ctc_pi0[7];

  Double_t c0dvcstc_pi0[7];
  Double_t c1dvcstc_pi0[7];
  Double_t s1dvcstc_pi0[7];
  Double_t s2dvcstc_pi0[7];
  Double_t dc0dvcstc_pi0[7];
  Double_t dc1dvcstc_pi0[7];
  Double_t ds1dvcstc_pi0[7];
  Double_t ds2dvcstc_pi0[7];

  Double_t c0itc_pi0[7];
  Double_t s1itc_pi0[7];
  Double_t c1itc_pi0[7];
  Double_t s2itc_pi0[7];
  Double_t dc0itc_pi0[7];
  Double_t ds1itc_pi0[7];
  Double_t dc1itc_pi0[7];
  Double_t ds2itc_pi0[7];


  Int_t tc_pi0index = 0;
  Char_t tempStringtc_pi0[111024];
  FILE *tc_pi0file;
  
  if((tc_pi0file = fopen("/user/jburns/analysis_code/kinematic_stuff/q2/gordanfit/tc_eml_bins13parsyst_bin6_pol_pi0_0007.txt","r"))==NULL){
    fprintf(stderr,"Could not open the tc pi0 file!\n");
    return 0;
  }
  while(fgets(tempStringtc_pi0,sizeof(tempStringtc_pi0),tc_pi0file)!=NULL){
    if(sscanf(tempStringtc_pi0,"%lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf\n",
	      &c0ctc_pi0[tc_pi0index], &dc0ctc_pi0[tc_pi0index],
	      &c1ctc_pi0[tc_pi0index], &dc1ctc_pi0[tc_pi0index],
	      &s1ctc_pi0[tc_pi0index], &ds1ctc_pi0[tc_pi0index],
	      &c2ctc_pi0[tc_pi0index], &dc2ctc_pi0[tc_pi0index],
	      &c3ctc_pi0[tc_pi0index], &dc3ctc_pi0[tc_pi0index],
	      &c0dvcstc_pi0[tc_pi0index], &dc0dvcstc_pi0[tc_pi0index],
	      &s1dvcstc_pi0[tc_pi0index], &ds1dvcstc_pi0[tc_pi0index],
	      &c1dvcstc_pi0[tc_pi0index], &dc1dvcstc_pi0[tc_pi0index],
	      &s2dvcstc_pi0[tc_pi0index], &ds2dvcstc_pi0[tc_pi0index],
	      &c0itc_pi0[tc_pi0index], &dc0itc_pi0[tc_pi0index],
	      &s1itc_pi0[tc_pi0index], &ds1itc_pi0[tc_pi0index],
	      &c1itc_pi0[tc_pi0index], &dc1itc_pi0[tc_pi0index],
	      &s2itc_pi0[tc_pi0index], &ds2itc_pi0[tc_pi0index])!=26){
      fprintf(stderr,
	      "There was a problem with your parsing of the tc_pi0 file!\n");
      return 0;
    }
    tc_pi0index++;
  }
  fclose(tc_pi0file);


  Double_t c0cq2_pi0[7];
  Double_t c1cq2_pi0[7];
  Double_t s1cq2_pi0[7];
  Double_t c2cq2_pi0[7];
  Double_t c3cq2_pi0[7];
  Double_t dc0cq2_pi0[7];
  Double_t dc1cq2_pi0[7];
  Double_t ds1cq2_pi0[7];
  Double_t dc2cq2_pi0[7];
  Double_t dc3cq2_pi0[7];

  Double_t c0dvcsq2_pi0[7];
  Double_t s1dvcsq2_pi0[7];
  Double_t c1dvcsq2_pi0[7];
  Double_t s2dvcsq2_pi0[7];
  Double_t dc0dvcsq2_pi0[7];
  Double_t ds1dvcsq2_pi0[7];
  Double_t dc1dvcsq2_pi0[7];
  Double_t ds2dvcsq2_pi0[7];

  Double_t c0iq2_pi0[7];
  Double_t s1iq2_pi0[7];
  Double_t c1iq2_pi0[7];
  Double_t s2iq2_pi0[7];
  Double_t dc0iq2_pi0[7];
  Double_t ds1iq2_pi0[7];
  Double_t dc1iq2_pi0[7];
  Double_t ds2iq2_pi0[7];


  Int_t q2_pi0index = 0;
  Char_t tempStringq2_pi0[111024];
  FILE *q2_pi0file;
  
  if((q2_pi0file = fopen("/user/jburns/analysis_code/kinematic_stuff/q2/gordanfit/q2_eml_bins13parsyst_bin6_pol_pi0_0007.txt","r"))==NULL){
    fprintf(stderr,"Could not open the q2 pi0 file!\n");
    return 0;
  }
  while(fgets(tempStringq2_pi0,sizeof(tempStringq2_pi0),q2_pi0file)!=NULL){
    if(sscanf(tempStringq2_pi0,"%lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf\n",
	      &c0cq2_pi0[q2_pi0index], &dc0cq2_pi0[q2_pi0index],
	      &c1cq2_pi0[q2_pi0index], &dc1cq2_pi0[q2_pi0index],
	      &s1cq2_pi0[q2_pi0index], &ds1cq2_pi0[q2_pi0index],
	      &c2cq2_pi0[q2_pi0index], &dc2cq2_pi0[q2_pi0index],
	      &c3cq2_pi0[q2_pi0index], &dc3cq2_pi0[q2_pi0index],
	      &c0dvcsq2_pi0[q2_pi0index], &dc0dvcsq2_pi0[q2_pi0index],
	      &s1dvcsq2_pi0[q2_pi0index], &ds1dvcsq2_pi0[q2_pi0index],
	      &c1dvcsq2_pi0[q2_pi0index], &dc1dvcsq2_pi0[q2_pi0index],
	      &s2dvcsq2_pi0[q2_pi0index], &ds2dvcsq2_pi0[q2_pi0index],
	      &c0iq2_pi0[q2_pi0index], &dc0iq2_pi0[q2_pi0index],
	      &s1iq2_pi0[q2_pi0index], &ds1iq2_pi0[q2_pi0index],
	      &c1iq2_pi0[q2_pi0index], &dc1iq2_pi0[q2_pi0index],
	      &s2iq2_pi0[q2_pi0index], &ds2iq2_pi0[q2_pi0index])!=26){
      fprintf(stderr,
	      "There was a problem with your parsing of the q2_pi0 file!\n");
      return 0;
    }
    q2_pi0index++;
  }
  fclose(q2_pi0file);


  Double_t c0cxbj_pi0[7];
  Double_t c1cxbj_pi0[7];
  Double_t s1cxbj_pi0[7];
  Double_t c2cxbj_pi0[7];
  Double_t c3cxbj_pi0[7];
  Double_t dc0cxbj_pi0[7];
  Double_t dc1cxbj_pi0[7];
  Double_t ds1cxbj_pi0[7];
  Double_t dc2cxbj_pi0[7];
  Double_t dc3cxbj_pi0[7];

  Double_t c0dvcsxbj_pi0[7];
  Double_t s1dvcsxbj_pi0[7];
  Double_t c1dvcsxbj_pi0[7];
  Double_t s2dvcsxbj_pi0[7];
  Double_t dc0dvcsxbj_pi0[7];
  Double_t ds1dvcsxbj_pi0[7];
  Double_t dc1dvcsxbj_pi0[7];
  Double_t ds2dvcsxbj_pi0[7];

  Double_t c0ixbj_pi0[7];
  Double_t s1ixbj_pi0[7];
  Double_t c1ixbj_pi0[7];
  Double_t s2ixbj_pi0[7];
  Double_t dc0ixbj_pi0[7];
  Double_t ds1ixbj_pi0[7];
  Double_t dc1ixbj_pi0[7];
  Double_t ds2ixbj_pi0[7];


  Int_t xbj_pi0index = 0;
  Char_t tempStringxbj_pi0[11024];
  FILE *xbj_pi0file;
  
  if((xbj_pi0file = fopen("/user/jburns/analysis_code/kinematic_stuff/q2/gordanfit/xbj_eml_bins13parsyst_bin6_pol_pi0_0007.txt","r"))==NULL){
    fprintf(stderr,"Could not open the xbj pi0 file!\n");
    return 0;
  }
  while(fgets(tempStringxbj_pi0,sizeof(tempStringxbj_pi0),xbj_pi0file)!=NULL){
    if(sscanf(tempStringxbj_pi0,"%lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf\n",
	      &c0cxbj_pi0[xbj_pi0index], &dc0cxbj_pi0[xbj_pi0index],
	      &c1cxbj_pi0[xbj_pi0index], &dc1cxbj_pi0[xbj_pi0index],
	      &s1cxbj_pi0[xbj_pi0index], &ds1cxbj_pi0[xbj_pi0index],
	      &c2cxbj_pi0[xbj_pi0index], &dc2cxbj_pi0[xbj_pi0index],
	      &c3cxbj_pi0[xbj_pi0index], &dc3cxbj_pi0[xbj_pi0index],
	      &c0dvcsxbj_pi0[xbj_pi0index], &dc0dvcsxbj_pi0[xbj_pi0index],
	      &s1dvcsxbj_pi0[xbj_pi0index], &ds1dvcsxbj_pi0[xbj_pi0index],
	      &c1dvcsxbj_pi0[xbj_pi0index], &dc1dvcsxbj_pi0[xbj_pi0index],
	      &s2dvcsxbj_pi0[xbj_pi0index], &ds2dvcsxbj_pi0[xbj_pi0index],
	      &c0ixbj_pi0[xbj_pi0index], &dc0ixbj_pi0[xbj_pi0index],
	      &s1ixbj_pi0[xbj_pi0index], &ds1ixbj_pi0[xbj_pi0index],
	      &c1ixbj_pi0[xbj_pi0index], &dc1ixbj_pi0[xbj_pi0index],
	      &s2ixbj_pi0[xbj_pi0index], &ds2ixbj_pi0[xbj_pi0index])!=26){
      fprintf(stderr,
	      "There was a problem with your parsing of the xbj_pi0 file!\n");
      return 0;
    }
    xbj_pi0index++;
  }
  fclose(xbj_pi0file);


  /***********************************************************************************************************
   **********************************************************************************************************/
  // Read in the fsidis file


  Double_t fsidis_q2[7];
  Double_t fsidis_tc[7];
  Double_t fsidis_xbj[7];
  
  Int_t findex = 0;
  Char_t tempStringf[111024];
  FILE *ffile;

  if((ffile = fopen("/user/jburns/analysis_code/Sidis/Sidis_input2.txt","r"))==NULL){
    fprintf(stderr,"Could not open the file!\n");
    return 0;
  }
  while(fgets(tempStringf,sizeof(tempStringf),ffile)!=NULL){
    if(sscanf(tempStringf,"%lf %lf %lf\n",
              &fsidis_q2[findex], &fsidis_xbj[findex], &fsidis_tc[findex]) != 3){
      fprintf(stderr,
              "There was a problem with your parsing fsidis file!\n");
      return 0;
    }
    findex++;
  }
  fclose(ffile);


  /***********************************************************************************************************
   **********************************************************************************************************/
  // Load VGG theory band files

  Double_t vgg_regge_overallxvalues[5] = {0.5, 1.5, 1.5, 0.5, 0.5};

  Double_t vggregge_overallc0c[5];
  Double_t vggregge_overallc1c[5];
  Double_t vggregge_overallc2c[5];
  Double_t vggregge_overallc3c[5];
  Double_t vggregge_overallc0dvcs[5];
  Double_t vggregge_overalls1dvcs[5];
  Double_t vggregge_overalls2dvcs[5];
  Double_t vggregge_overallc0i[5];
  Double_t vggregge_overalls1i[5];
  Double_t vggregge_overalls2i[5];
    
  Int_t index_vggregge_overall = 0;
  Char_t string_vggregge_overall[11024];
  FILE *file_vggregge_overall;

  if((file_vggregge_overall = fopen("/user/jburns/analysis_code/vgg_new/theoryscripts/overallreggeband_all.out","r"))==NULL){
    fprintf(stderr,"Could not open the VGG regge overall file!\n");
    return 0;
  }

  while(fgets(string_vggregge_overall,sizeof(string_vggregge_overall),file_vggregge_overall)!=NULL){
    if(string_vggregge_overall[0]=='_') continue;
    if(sscanf(string_vggregge_overall,"%lf %lf %lf %lf %lf %lf %lf %lf %lf %lf\n",
	      &vggregge_overallc0c[index_vggregge_overall],
	      &vggregge_overallc1c[index_vggregge_overall],
	      &vggregge_overallc2c[index_vggregge_overall],
	      &vggregge_overallc3c[index_vggregge_overall],
	      &vggregge_overallc0dvcs[index_vggregge_overall],
	      &vggregge_overalls1dvcs[index_vggregge_overall],
	      &vggregge_overalls2dvcs[index_vggregge_overall],
	      &vggregge_overallc0i[index_vggregge_overall],
	      &vggregge_overalls1i[index_vggregge_overall],
	      &vggregge_overalls2i[index_vggregge_overall])!=10){
      fprintf(stderr,
	      "There was a problem with your parsing of the Vgg regge overall file!\n");
      return 0;
    }
    index_vggregge_overall++;
  }
  fclose(file_vggregge_overall);


  Double_t vgg_regge_q2xvalues[13] = {1.199648, 1.591432, 2.080343, 2.768593,
				     3.767008, 5.851009, 5.851009, 3.767008, 2.768593, 2.080343, 1.591432, 1.199648, 1.199648};

  Double_t vggregge_q2c0c[13];
  Double_t vggregge_q2c1c[13];
  Double_t vggregge_q2c2c[13];
  Double_t vggregge_q2c3c[13];
  Double_t vggregge_q2c0dvcs[13];
  Double_t vggregge_q2s1dvcs[13];
  Double_t vggregge_q2s2dvcs[13];
  Double_t vggregge_q2c0i[13];
  Double_t vggregge_q2s1i[13];
  Double_t vggregge_q2s2i[13];
    
  Int_t index_vggregge_q2 = 0;
  Char_t string_vggregge_q2[11024];
  FILE *file_vggregge_q2;

  if((file_vggregge_q2 = fopen("/user/jburns/analysis_code/vgg_new/theoryscripts/q2reggeband_all.out","r"))==NULL){
    fprintf(stderr,"Could not open the VGG regge q2 file!\n");
    return 0;
  }

  while(fgets(string_vggregge_q2,sizeof(string_vggregge_q2),file_vggregge_q2)!=NULL){
    if(string_vggregge_q2[0]=='_') continue;
    if(sscanf(string_vggregge_q2,"%lf %lf %lf %lf %lf %lf %lf %lf %lf %lf\n",
	      &vggregge_q2c0c[index_vggregge_q2],
	      &vggregge_q2c1c[index_vggregge_q2],
	      &vggregge_q2c2c[index_vggregge_q2],
	      &vggregge_q2c3c[index_vggregge_q2],
	      &vggregge_q2c0dvcs[index_vggregge_q2],
	      &vggregge_q2s1dvcs[index_vggregge_q2],
	      &vggregge_q2s2dvcs[index_vggregge_q2],
	      &vggregge_q2c0i[index_vggregge_q2],
	      &vggregge_q2s1i[index_vggregge_q2],
	      &vggregge_q2s2i[index_vggregge_q2])!=10){
      fprintf(stderr,
	      "There was a problem with your parsing of the Vgg regge q2 file!\n");
      return 0;
    }
    index_vggregge_q2++;
  }
  fclose(file_vggregge_q2);


  Double_t vgg_regge_xbxvalues[13] = {0.049070, 0.069647, 0.089392, 0.113598,
				     0.157213, 0.245365, 0.245365, 0.157213, 0.113598, 0.089392, 0.069647, 0.049070, 0.049070};

  Double_t vggregge_xbc0c[13];
  Double_t vggregge_xbc1c[13];
  Double_t vggregge_xbc2c[13];
  Double_t vggregge_xbc3c[13];
  Double_t vggregge_xbc0dvcs[13];
  Double_t vggregge_xbs1dvcs[13];
  Double_t vggregge_xbs2dvcs[13];
  Double_t vggregge_xbc0i[13];
  Double_t vggregge_xbs1i[13];
  Double_t vggregge_xbs2i[13];
    
  Int_t index_vggregge_xb = 0;
  Char_t string_vggregge_xb[11024];
  FILE *file_vggregge_xb;

  if((file_vggregge_xb = fopen("/user/jburns/analysis_code/vgg_new/theoryscripts/xbreggeband_all.out","r"))==NULL){
    fprintf(stderr,"Could not open the VGG regge xb file!\n");
    return 0;
  }

  while(fgets(string_vggregge_xb,sizeof(string_vggregge_xb),file_vggregge_xb)!=NULL){
    if(string_vggregge_xb[0]=='_') continue;
    if(sscanf(string_vggregge_xb,"%lf %lf %lf %lf %lf %lf %lf %lf %lf %lf\n",
	      &vggregge_xbc0c[index_vggregge_xb],
	      &vggregge_xbc1c[index_vggregge_xb],
	      &vggregge_xbc2c[index_vggregge_xb],
	      &vggregge_xbc3c[index_vggregge_xb],
	      &vggregge_xbc0dvcs[index_vggregge_xb],
	      &vggregge_xbs1dvcs[index_vggregge_xb],
	      &vggregge_xbs2dvcs[index_vggregge_xb],
	      &vggregge_xbc0i[index_vggregge_xb],
	      &vggregge_xbs1i[index_vggregge_xb],
	      &vggregge_xbs2i[index_vggregge_xb])!=10){
      fprintf(stderr,
	      "There was a problem with your parsing of the Vgg regge xb file!\n");
      return 0;
    }
    index_vggregge_xb++;
  }
  fclose(file_vggregge_xb);


  Double_t vgg_regge_txvalues[13] = {0.018761, 0.043940, 0.078792, 0.142805, 0.260879, 0.466061, 0.466061,
                                     0.260879, 0.142805, 0.078792, 0.043940, 0.018761, 0.018761};

  Double_t vggregge_tc0c[13];
  Double_t vggregge_tc1c[13];
  Double_t vggregge_tc2c[13];
  Double_t vggregge_tc3c[13];
  Double_t vggregge_tc0dvcs[13];
  Double_t vggregge_ts1dvcs[13];
  Double_t vggregge_ts2dvcs[13];
  Double_t vggregge_tc0i[13];
  Double_t vggregge_ts1i[13];
  Double_t vggregge_ts2i[13];
    
  Int_t index_vggregge_t = 0;
  Char_t string_vggregge_t[11024];
  FILE *file_vggregge_t;

  if((file_vggregge_t = fopen("/user/jburns/analysis_code/vgg_new/theoryscripts/treggeband_all.out","r"))==NULL){
    fprintf(stderr,"Could not open the VGG regge t file!\n");
    return 0;
  }

  while(fgets(string_vggregge_t,sizeof(string_vggregge_t),file_vggregge_t)!=NULL){
    if(string_vggregge_t[0]=='_') continue;
    if(sscanf(string_vggregge_t,"%lf %lf %lf %lf %lf %lf %lf %lf %lf %lf\n",
	      &vggregge_tc0c[index_vggregge_t],
	      &vggregge_tc1c[index_vggregge_t],
	      &vggregge_tc2c[index_vggregge_t],
	      &vggregge_tc3c[index_vggregge_t],
	      &vggregge_tc0dvcs[index_vggregge_t],
	      &vggregge_ts1dvcs[index_vggregge_t],
	      &vggregge_ts2dvcs[index_vggregge_t],
	      &vggregge_tc0i[index_vggregge_t],
	      &vggregge_ts1i[index_vggregge_t],
	      &vggregge_ts2i[index_vggregge_t])!=10){
      fprintf(stderr,
	      "There was a problem with your parsing of the Vgg regge t file!\n");
      return 0;
    }
    index_vggregge_t++;
  }
  fclose(file_vggregge_t);


 /******************************************************************************************

  Load the kumericki theory band files

  ********************************************************************************************/


  Double_t c0ctc_kumericki_without_hallA[7];
  Double_t c1ctc_kumericki_without_hallA[7];
  Double_t s1ctc_kumericki_without_hallA[7];
  Double_t c2ctc_kumericki_without_hallA[7];
  Double_t c3ctc_kumericki_without_hallA[7];
  Double_t dc0ctc_kumericki_without_hallA[7];
  Double_t dc1ctc_kumericki_without_hallA[7];
  Double_t ds1ctc_kumericki_without_hallA[7];
  Double_t dc2ctc_kumericki_without_hallA[7];
  Double_t dc3ctc_kumericki_without_hallA[7];

  Double_t c0dvcstc_kumericki_without_hallA[7];
  Double_t c1dvcstc_kumericki_without_hallA[7];
  Double_t s1dvcstc_kumericki_without_hallA[7];
  Double_t s2dvcstc_kumericki_without_hallA[7];
  Double_t dc0dvcstc_kumericki_without_hallA[7];
  Double_t dc1dvcstc_kumericki_without_hallA[7];
  Double_t ds1dvcstc_kumericki_without_hallA[7];
  Double_t ds2dvcstc_kumericki_without_hallA[7];

  Double_t c0itc_kumericki_without_hallA[7];
  Double_t s1itc_kumericki_without_hallA[7];
  Double_t c1itc_kumericki_without_hallA[7];
  Double_t s2itc_kumericki_without_hallA[7];
  Double_t dc0itc_kumericki_without_hallA[7];
  Double_t ds1itc_kumericki_without_hallA[7];
  Double_t dc1itc_kumericki_without_hallA[7];
  Double_t ds2itc_kumericki_without_hallA[7];


  Int_t tc_kumericki_without_hallAindex = 0;
  Char_t tempStringtc_kumericki_without_hallA[111024];
  FILE *tc_kumericki_without_hallAfile;
  
  if((tc_kumericki_without_hallAfile = fopen("/user/jburns/analysis_code/kumericki/kumericki_model_without_hallA_tc_all.txt","r"))==NULL){
    fprintf(stderr,"Could not open the tc kumericki_without_hallA file!\n");
    return 0;
  }
  while(fgets(tempStringtc_kumericki_without_hallA,sizeof(tempStringtc_kumericki_without_hallA),tc_kumericki_without_hallAfile)!=NULL){
    if(sscanf(tempStringtc_kumericki_without_hallA,"%lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf\n",
	      &c0ctc_kumericki_without_hallA[tc_kumericki_without_hallAindex],
	      &c1ctc_kumericki_without_hallA[tc_kumericki_without_hallAindex],
	      &s1ctc_kumericki_without_hallA[tc_kumericki_without_hallAindex],
	      &c2ctc_kumericki_without_hallA[tc_kumericki_without_hallAindex],
	      &c3ctc_kumericki_without_hallA[tc_kumericki_without_hallAindex],
	      &c0dvcstc_kumericki_without_hallA[tc_kumericki_without_hallAindex],
	      &s1dvcstc_kumericki_without_hallA[tc_kumericki_without_hallAindex],
	      &c1dvcstc_kumericki_without_hallA[tc_kumericki_without_hallAindex],
	      &s2dvcstc_kumericki_without_hallA[tc_kumericki_without_hallAindex],
	      &c0itc_kumericki_without_hallA[tc_kumericki_without_hallAindex],
	      &s1itc_kumericki_without_hallA[tc_kumericki_without_hallAindex],
	      &c1itc_kumericki_without_hallA[tc_kumericki_without_hallAindex],
	      &s2itc_kumericki_without_hallA[tc_kumericki_without_hallAindex])!=13){
      fprintf(stderr,
	      "There was a problem with your parsing of the tc_kumericki_without_hallA file!\n");
      return 0;
    }
    tc_kumericki_without_hallAindex++;
  }
  fclose(tc_kumericki_without_hallAfile);

  Double_t c0cq2_kumericki_without_hallA[7];
  Double_t c1cq2_kumericki_without_hallA[7];
  Double_t s1cq2_kumericki_without_hallA[7];
  Double_t c2cq2_kumericki_without_hallA[7];
  Double_t c3cq2_kumericki_without_hallA[7];
  Double_t dc0cq2_kumericki_without_hallA[7];
  Double_t dc1cq2_kumericki_without_hallA[7];
  Double_t ds1cq2_kumericki_without_hallA[7];
  Double_t dc2cq2_kumericki_without_hallA[7];
  Double_t dc3cq2_kumericki_without_hallA[7];

  Double_t c0dvcsq2_kumericki_without_hallA[7];
  Double_t c1dvcsq2_kumericki_without_hallA[7];
  Double_t s1dvcsq2_kumericki_without_hallA[7];
  Double_t s2dvcsq2_kumericki_without_hallA[7];
  Double_t dc0dvcsq2_kumericki_without_hallA[7];
  Double_t dc1dvcsq2_kumericki_without_hallA[7];
  Double_t ds1dvcsq2_kumericki_without_hallA[7];
  Double_t ds2dvcsq2_kumericki_without_hallA[7];

  Double_t c0iq2_kumericki_without_hallA[7];
  Double_t s1iq2_kumericki_without_hallA[7];
  Double_t c1iq2_kumericki_without_hallA[7];
  Double_t s2iq2_kumericki_without_hallA[7];
  Double_t dc0iq2_kumericki_without_hallA[7];
  Double_t ds1iq2_kumericki_without_hallA[7];
  Double_t dc1iq2_kumericki_without_hallA[7];
  Double_t ds2iq2_kumericki_without_hallA[7];


  Int_t q2_kumericki_without_hallAindex = 0;
  Char_t tempStringq2_kumericki_without_hallA[111024];
  FILE *q2_kumericki_without_hallAfile;
  
  if((q2_kumericki_without_hallAfile = fopen("/user/jburns/analysis_code/kumericki/kumericki_model_without_hallA_q2_all.txt","r"))==NULL){
    fprintf(stderr,"Could not open the q2 kumericki_without_hallA file!\n");
    return 0;
  }
  while(fgets(tempStringq2_kumericki_without_hallA,sizeof(tempStringq2_kumericki_without_hallA),q2_kumericki_without_hallAfile)!=NULL){
    if(sscanf(tempStringq2_kumericki_without_hallA,"%lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf\n",
	      &c0cq2_kumericki_without_hallA[q2_kumericki_without_hallAindex],
	      &c1cq2_kumericki_without_hallA[q2_kumericki_without_hallAindex],
	      &s1cq2_kumericki_without_hallA[q2_kumericki_without_hallAindex],
	      &c2cq2_kumericki_without_hallA[q2_kumericki_without_hallAindex],
	      &c3cq2_kumericki_without_hallA[q2_kumericki_without_hallAindex],
	      &c0dvcsq2_kumericki_without_hallA[q2_kumericki_without_hallAindex],
	      &s1dvcsq2_kumericki_without_hallA[q2_kumericki_without_hallAindex],
	      &c1dvcsq2_kumericki_without_hallA[q2_kumericki_without_hallAindex],
	      &s2dvcsq2_kumericki_without_hallA[q2_kumericki_without_hallAindex],
	      &c0iq2_kumericki_without_hallA[q2_kumericki_without_hallAindex],
	      &s1iq2_kumericki_without_hallA[q2_kumericki_without_hallAindex],
	      &c1iq2_kumericki_without_hallA[q2_kumericki_without_hallAindex],
	      &s2iq2_kumericki_without_hallA[q2_kumericki_without_hallAindex])!=13){
      fprintf(stderr,
	      "There was a problem with your parsing of the q2_kumericki_without_hallA file!\n");
      return 0;
    }
    q2_kumericki_without_hallAindex++;
  }
  fclose(q2_kumericki_without_hallAfile);


  Double_t c0cxbj_kumericki_without_hallA[7];
  Double_t c1cxbj_kumericki_without_hallA[7];
  Double_t s1cxbj_kumericki_without_hallA[7];
  Double_t c2cxbj_kumericki_without_hallA[7];
  Double_t c3cxbj_kumericki_without_hallA[7];
  Double_t dc0cxbj_kumericki_without_hallA[7];
  Double_t dc1cxbj_kumericki_without_hallA[7];
  Double_t ds1cxbj_kumericki_without_hallA[7];
  Double_t dc2cxbj_kumericki_without_hallA[7];
  Double_t dc3cxbj_kumericki_without_hallA[7];

  Double_t c0dvcsxbj_kumericki_without_hallA[7];
  Double_t c1dvcsxbj_kumericki_without_hallA[7];
  Double_t s1dvcsxbj_kumericki_without_hallA[7];
  Double_t s2dvcsxbj_kumericki_without_hallA[7];
  Double_t dc0dvcsxbj_kumericki_without_hallA[7];
  Double_t dc1dvcsxbj_kumericki_without_hallA[7];
  Double_t ds1dvcsxbj_kumericki_without_hallA[7];
  Double_t ds2dvcsxbj_kumericki_without_hallA[7];

  Double_t c0ixbj_kumericki_without_hallA[7];
  Double_t s1ixbj_kumericki_without_hallA[7];
  Double_t c1ixbj_kumericki_without_hallA[7];
  Double_t s2ixbj_kumericki_without_hallA[7];
  Double_t dc0ixbj_kumericki_without_hallA[7];
  Double_t ds1ixbj_kumericki_without_hallA[7];
  Double_t dc1ixbj_kumericki_without_hallA[7];
  Double_t ds2ixbj_kumericki_without_hallA[7];


  Int_t xbj_kumericki_without_hallAindex = 0;
  Char_t tempStringxbj_kumericki_without_hallA[111024];
  FILE *xbj_kumericki_without_hallAfile;
  
  if((xbj_kumericki_without_hallAfile = fopen("/user/jburns/analysis_code/kumericki/kumericki_model_without_hallA_xbj_all.txt","r"))==NULL){
    fprintf(stderr,"Could not open the xbj kumericki_without_hallA file!\n");
    return 0;
  }
  while(fgets(tempStringxbj_kumericki_without_hallA,sizeof(tempStringxbj_kumericki_without_hallA),xbj_kumericki_without_hallAfile)!=NULL){
    if(sscanf(tempStringxbj_kumericki_without_hallA,"%lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf\n",
	      &c0cxbj_kumericki_without_hallA[xbj_kumericki_without_hallAindex],
	      &c1cxbj_kumericki_without_hallA[xbj_kumericki_without_hallAindex],
	      &s1cxbj_kumericki_without_hallA[xbj_kumericki_without_hallAindex],
	      &c2cxbj_kumericki_without_hallA[xbj_kumericki_without_hallAindex],
	      &c3cxbj_kumericki_without_hallA[xbj_kumericki_without_hallAindex],
	      &c0dvcsxbj_kumericki_without_hallA[xbj_kumericki_without_hallAindex],
	      &s1dvcsxbj_kumericki_without_hallA[xbj_kumericki_without_hallAindex],
	      &c1dvcsxbj_kumericki_without_hallA[xbj_kumericki_without_hallAindex],
	      &s2dvcsxbj_kumericki_without_hallA[xbj_kumericki_without_hallAindex],
	      &c0ixbj_kumericki_without_hallA[xbj_kumericki_without_hallAindex],
	      &s1ixbj_kumericki_without_hallA[xbj_kumericki_without_hallAindex],
	      &c1ixbj_kumericki_without_hallA[xbj_kumericki_without_hallAindex],
	      &s2ixbj_kumericki_without_hallA[xbj_kumericki_without_hallAindex])!=13){
      fprintf(stderr,
	      "There was a problem with your parsing of the xbj_kumericki_without_hallA file!\n");
      return 0;
    }
    xbj_kumericki_without_hallAindex++;
  }
  fclose(xbj_kumericki_without_hallAfile);


  Double_t c0ctc_kumericki_with_hallA[7];
  Double_t c1ctc_kumericki_with_hallA[7];
  Double_t s1ctc_kumericki_with_hallA[7];
  Double_t c2ctc_kumericki_with_hallA[7];
  Double_t c3ctc_kumericki_with_hallA[7];
  Double_t dc0ctc_kumericki_with_hallA[7];
  Double_t dc1ctc_kumericki_with_hallA[7];
  Double_t ds1ctc_kumericki_with_hallA[7];
  Double_t dc2ctc_kumericki_with_hallA[7];
  Double_t dc3ctc_kumericki_with_hallA[7];

  Double_t c0dvcstc_kumericki_with_hallA[7];
  Double_t c1dvcstc_kumericki_with_hallA[7];
  Double_t s1dvcstc_kumericki_with_hallA[7];
  Double_t s2dvcstc_kumericki_with_hallA[7];
  Double_t dc0dvcstc_kumericki_with_hallA[7];
  Double_t dc1dvcstc_kumericki_with_hallA[7];
  Double_t ds1dvcstc_kumericki_with_hallA[7];
  Double_t ds2dvcstc_kumericki_with_hallA[7];

  Double_t c0itc_kumericki_with_hallA[7];
  Double_t s1itc_kumericki_with_hallA[7];
  Double_t c1itc_kumericki_with_hallA[7];
  Double_t s2itc_kumericki_with_hallA[7];
  Double_t dc0itc_kumericki_with_hallA[7];
  Double_t ds1itc_kumericki_with_hallA[7];
  Double_t dc1itc_kumericki_with_hallA[7];
  Double_t ds2itc_kumericki_with_hallA[7];


  Int_t tc_kumericki_with_hallAindex = 0;
  Char_t tempStringtc_kumericki_with_hallA[111024];
  FILE *tc_kumericki_with_hallAfile;
  
  if((tc_kumericki_with_hallAfile = fopen("/user/jburns/analysis_code/kumericki/kumericki_model_with_hallA_tc_all.txt","r"))==NULL){
    fprintf(stderr,"Could not open the tc kumericki_with_hallA file!\n");
    return 0;
  }
  while(fgets(tempStringtc_kumericki_with_hallA,sizeof(tempStringtc_kumericki_with_hallA),tc_kumericki_with_hallAfile)!=NULL){
    if(sscanf(tempStringtc_kumericki_with_hallA,"%lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf\n",
	      &c0ctc_kumericki_with_hallA[tc_kumericki_with_hallAindex],
	      &c1ctc_kumericki_with_hallA[tc_kumericki_with_hallAindex],
	      &s1ctc_kumericki_with_hallA[tc_kumericki_with_hallAindex],
	      &c2ctc_kumericki_with_hallA[tc_kumericki_with_hallAindex],
	      &c3ctc_kumericki_with_hallA[tc_kumericki_with_hallAindex],
	      &c0dvcstc_kumericki_with_hallA[tc_kumericki_with_hallAindex],
	      &s1dvcstc_kumericki_with_hallA[tc_kumericki_with_hallAindex],
	      &c1dvcstc_kumericki_with_hallA[tc_kumericki_with_hallAindex],
	      &s2dvcstc_kumericki_with_hallA[tc_kumericki_with_hallAindex],
	      &c0itc_kumericki_with_hallA[tc_kumericki_with_hallAindex],
	      &s1itc_kumericki_with_hallA[tc_kumericki_with_hallAindex],
	      &c1itc_kumericki_with_hallA[tc_kumericki_with_hallAindex],
	      &s2itc_kumericki_with_hallA[tc_kumericki_with_hallAindex])!=13){
      fprintf(stderr,
	      "There was a problem with your parsing of the tc_kumericki_with_hallA file!\n");
      return 0;
    }
    tc_kumericki_with_hallAindex++;
  }
  fclose(tc_kumericki_with_hallAfile);

  Double_t c0cq2_kumericki_with_hallA[7];
  Double_t c1cq2_kumericki_with_hallA[7];
  Double_t s1cq2_kumericki_with_hallA[7];
  Double_t c2cq2_kumericki_with_hallA[7];
  Double_t c3cq2_kumericki_with_hallA[7];
  Double_t dc0cq2_kumericki_with_hallA[7];
  Double_t dc1cq2_kumericki_with_hallA[7];
  Double_t ds1cq2_kumericki_with_hallA[7];
  Double_t dc2cq2_kumericki_with_hallA[7];
  Double_t dc3cq2_kumericki_with_hallA[7];

  Double_t c0dvcsq2_kumericki_with_hallA[7];
  Double_t c1dvcsq2_kumericki_with_hallA[7];
  Double_t s1dvcsq2_kumericki_with_hallA[7];
  Double_t s2dvcsq2_kumericki_with_hallA[7];
  Double_t dc0dvcsq2_kumericki_with_hallA[7];
  Double_t dc1dvcsq2_kumericki_with_hallA[7];
  Double_t ds1dvcsq2_kumericki_with_hallA[7];
  Double_t ds2dvcsq2_kumericki_with_hallA[7];

  Double_t c0iq2_kumericki_with_hallA[7];
  Double_t s1iq2_kumericki_with_hallA[7];
  Double_t c1iq2_kumericki_with_hallA[7];
  Double_t s2iq2_kumericki_with_hallA[7];
  Double_t dc0iq2_kumericki_with_hallA[7];
  Double_t ds1iq2_kumericki_with_hallA[7];
  Double_t dc1iq2_kumericki_with_hallA[7];
  Double_t ds2iq2_kumericki_with_hallA[7];


  Int_t q2_kumericki_with_hallAindex = 0;
  Char_t tempStringq2_kumericki_with_hallA[111024];
  FILE *q2_kumericki_with_hallAfile;
  
  if((q2_kumericki_with_hallAfile = fopen("/user/jburns/analysis_code/kumericki/kumericki_model_with_hallA_q2_all.txt","r"))==NULL){
    fprintf(stderr,"Could not open the q2 kumericki_with_hallA file!\n");
    return 0;
  }
  while(fgets(tempStringq2_kumericki_with_hallA,sizeof(tempStringq2_kumericki_with_hallA),q2_kumericki_with_hallAfile)!=NULL){
    if(sscanf(tempStringq2_kumericki_with_hallA,"%lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf\n",
	      &c0cq2_kumericki_with_hallA[q2_kumericki_with_hallAindex],
	      &c1cq2_kumericki_with_hallA[q2_kumericki_with_hallAindex],
	      &s1cq2_kumericki_with_hallA[q2_kumericki_with_hallAindex],
	      &c2cq2_kumericki_with_hallA[q2_kumericki_with_hallAindex],
	      &c3cq2_kumericki_with_hallA[q2_kumericki_with_hallAindex],
	      &c0dvcsq2_kumericki_with_hallA[q2_kumericki_with_hallAindex],
	      &s1dvcsq2_kumericki_with_hallA[q2_kumericki_with_hallAindex],
	      &c1dvcsq2_kumericki_with_hallA[q2_kumericki_with_hallAindex],
	      &s2dvcsq2_kumericki_with_hallA[q2_kumericki_with_hallAindex],
	      &c0iq2_kumericki_with_hallA[q2_kumericki_with_hallAindex],
	      &s1iq2_kumericki_with_hallA[q2_kumericki_with_hallAindex],
	      &c1iq2_kumericki_with_hallA[q2_kumericki_with_hallAindex],
	      &s2iq2_kumericki_with_hallA[q2_kumericki_with_hallAindex])!=13){
      fprintf(stderr,
	      "There was a problem with your parsing of the q2_kumericki_with_hallA file!\n");
      return 0;
    }
    q2_kumericki_with_hallAindex++;
  }
  fclose(q2_kumericki_with_hallAfile);


  Double_t c0cxbj_kumericki_with_hallA[7];
  Double_t c1cxbj_kumericki_with_hallA[7];
  Double_t s1cxbj_kumericki_with_hallA[7];
  Double_t c2cxbj_kumericki_with_hallA[7];
  Double_t c3cxbj_kumericki_with_hallA[7];
  Double_t dc0cxbj_kumericki_with_hallA[7];
  Double_t dc1cxbj_kumericki_with_hallA[7];
  Double_t ds1cxbj_kumericki_with_hallA[7];
  Double_t dc2cxbj_kumericki_with_hallA[7];
  Double_t dc3cxbj_kumericki_with_hallA[7];

  Double_t c0dvcsxbj_kumericki_with_hallA[7];
  Double_t c1dvcsxbj_kumericki_with_hallA[7];
  Double_t s1dvcsxbj_kumericki_with_hallA[7];
  Double_t s2dvcsxbj_kumericki_with_hallA[7];
  Double_t dc0dvcsxbj_kumericki_with_hallA[7];
  Double_t dc1dvcsxbj_kumericki_with_hallA[7];
  Double_t ds1dvcsxbj_kumericki_with_hallA[7];
  Double_t ds2dvcsxbj_kumericki_with_hallA[7];

  Double_t c0ixbj_kumericki_with_hallA[7];
  Double_t s1ixbj_kumericki_with_hallA[7];
  Double_t c1ixbj_kumericki_with_hallA[7];
  Double_t s2ixbj_kumericki_with_hallA[7];
  Double_t dc0ixbj_kumericki_with_hallA[7];
  Double_t ds1ixbj_kumericki_with_hallA[7];
  Double_t dc1ixbj_kumericki_with_hallA[7];
  Double_t ds2ixbj_kumericki_with_hallA[7];


  Int_t xbj_kumericki_with_hallAindex = 0;
  Char_t tempStringxbj_kumericki_with_hallA[111024];
  FILE *xbj_kumericki_with_hallAfile;
  
  if((xbj_kumericki_with_hallAfile = fopen("/user/jburns/analysis_code/kumericki/kumericki_model_with_hallA_xbj_all.txt","r"))==NULL){
    fprintf(stderr,"Could not open the xbj kumericki_with_hallA file!\n");
    return 0;
  }
  while(fgets(tempStringxbj_kumericki_with_hallA,sizeof(tempStringxbj_kumericki_with_hallA),xbj_kumericki_with_hallAfile)!=NULL){
    if(sscanf(tempStringxbj_kumericki_with_hallA,"%lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf\n",
	      &c0cxbj_kumericki_with_hallA[xbj_kumericki_with_hallAindex],
	      &c1cxbj_kumericki_with_hallA[xbj_kumericki_with_hallAindex],
	      &s1cxbj_kumericki_with_hallA[xbj_kumericki_with_hallAindex],
	      &c2cxbj_kumericki_with_hallA[xbj_kumericki_with_hallAindex],
	      &c3cxbj_kumericki_with_hallA[xbj_kumericki_with_hallAindex],
	      &c0dvcsxbj_kumericki_with_hallA[xbj_kumericki_with_hallAindex],
	      &s1dvcsxbj_kumericki_with_hallA[xbj_kumericki_with_hallAindex],
	      &c1dvcsxbj_kumericki_with_hallA[xbj_kumericki_with_hallAindex],
	      &s2dvcsxbj_kumericki_with_hallA[xbj_kumericki_with_hallAindex],
	      &c0ixbj_kumericki_with_hallA[xbj_kumericki_with_hallAindex],
	      &s1ixbj_kumericki_with_hallA[xbj_kumericki_with_hallAindex],
	      &c1ixbj_kumericki_with_hallA[xbj_kumericki_with_hallAindex],
	      &s2ixbj_kumericki_with_hallA[xbj_kumericki_with_hallAindex])!=13){
      fprintf(stderr,
	      "There was a problem with your parsing of the xbj_kumericki_with_hallA file!\n");
      return 0;
    }
    xbj_kumericki_with_hallAindex++;
  }
  fclose(xbj_kumericki_with_hallAfile);


  Double_t c0ctc[7];
  Double_t c1ctc[7];
  Double_t s1ctc[7];
  Double_t c2ctc[7];
  Double_t c3ctc[7];
  Double_t dc0ctc[7];
  Double_t dc1ctc[7];
  Double_t ds1ctc[7];
  Double_t dc2ctc[7];
  Double_t dc3ctc[7];

  Double_t c0dvcstc[7];
  Double_t c1dvcstc[7];
  Double_t s1dvcstc[7];
  Double_t s2dvcstc[7];
  Double_t dc0dvcstc[7];
  Double_t dc1dvcstc[7];
  Double_t ds1dvcstc[7];
  Double_t ds2dvcstc[7];

  Double_t c0itc[7];
  Double_t s1itc[7];
  Double_t c1itc[7];
  Double_t s2itc[7];
  Double_t dc0itc[7];
  Double_t ds1itc[7];
  Double_t dc1itc[7];
  Double_t ds2itc[7];

  
  Int_t tcindex = 0;
  Char_t tempStringtc[111024];
  FILE *tcfile;
  
  if((tcfile = fopen("/user/jburns/analysis_code/kinematic_stuff/q2/gordanfit/tc_eml_bins13parsyst_bin6_pol_all_new_withpos.txt","r"))==NULL){
    fprintf(stderr,"Could not open the tc result file!\n");
    return 0;
  }
  while(fgets(tempStringtc,sizeof(tempStringtc),tcfile)!=NULL){
    if(sscanf(tempStringtc,"%lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf\n",
	      &c0ctc[tcindex], &dc0ctc[tcindex],
	      &c1ctc[tcindex], &dc1ctc[tcindex],
	      &s1ctc[tcindex], &ds1ctc[tcindex],
	      &c2ctc[tcindex], &dc2ctc[tcindex],
	      &c3ctc[tcindex], &dc3ctc[tcindex],
	      &c0dvcstc[tcindex], &dc0dvcstc[tcindex],
	      &s1dvcstc[tcindex], &ds1dvcstc[tcindex],
	      &c1dvcstc[tcindex], &dc1dvcstc[tcindex],
	      &s2dvcstc[tcindex], &ds2dvcstc[tcindex],
	      &c0itc[tcindex], &dc0itc[tcindex],
	      &s1itc[tcindex], &ds1itc[tcindex],
	      &c1itc[tcindex], &dc1itc[tcindex],
	      &s2itc[tcindex], &ds2itc[tcindex])!=26){
      fprintf(stderr,
	      "There was a problem with your parsing of the tc result file!\n");
      return 0;
    }
    tcindex++;
  }
  fclose(tcfile);


  Double_t checkc0ctc[7];
  Double_t checkc1ctc[7]; 
  Double_t checks1ctc[7]; 
  Double_t checkc2ctc[7]; 
  Double_t checkc3ctc[7]; 
  Double_t checkdc0ctc[7];
  Double_t checkdc1ctc[7];
  Double_t checkds1ctc[7];
  Double_t checkdc2ctc[7];
  Double_t checkdc3ctc[7];

  Double_t checkc0dvcstc[7];
  Double_t checkc1dvcstc[7];
  Double_t checks1dvcstc[7];
  Double_t checks2dvcstc[7];
  Double_t checkdc0dvcstc[7];
  Double_t checkdc1dvcstc[7];
  Double_t checkds1dvcstc[7];
  Double_t checkds2dvcstc[7];

  Double_t checkc0itc[7];
  Double_t checks1itc[7];
  Double_t checkc1itc[7]; 
  Double_t checks2itc[7];
  Double_t checkdc0itc[7];
  Double_t checkds1itc[7];
  Double_t checkdc1itc[7];
  Double_t checkds2itc[7];


  Int_t tc_checkindex = 0;
  Char_t tempStringtc_check[111024];
  FILE *tc_checkfile;
  
  if((tc_checkfile = fopen("/user/jburns/analysis_code/kinematic_stuff/q2/gordanfit/tc_eml_bins13parsyst_bin6_pol_06_new_all_tracksave.txt","r"))==NULL){
    fprintf(stderr,"Could not open the tc check file!\n");
    return 0;
  }
  while(fgets(tempStringtc_check,sizeof(tempStringtc_check),tc_checkfile)!=NULL){
    if(sscanf(tempStringtc_check,"%lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf\n",
	      &checkc0ctc[tc_checkindex], &checkdc0ctc[tc_checkindex],
	      &checkc1ctc[tc_checkindex], &checkdc1ctc[tc_checkindex],
	      &checks1ctc[tc_checkindex], &checkds1ctc[tc_checkindex],
	      &checkc2ctc[tc_checkindex], &checkdc2ctc[tc_checkindex],
	      &checkc3ctc[tc_checkindex], &checkdc3ctc[tc_checkindex],
	      &checkc0dvcstc[tc_checkindex], &checkdc0dvcstc[tc_checkindex],
	      &checks1dvcstc[tc_checkindex], &checkds1dvcstc[tc_checkindex],
	      &checkc1dvcstc[tc_checkindex], &checkdc1dvcstc[tc_checkindex],
	      &checks2dvcstc[tc_checkindex], &checkds2dvcstc[tc_checkindex],
	      &checkc0itc[tc_checkindex], &checkdc0itc[tc_checkindex],
	      &checks1itc[tc_checkindex], &checkds1itc[tc_checkindex],
	      &checkc1itc[tc_checkindex], &checkdc1itc[tc_checkindex],
	      &checks2itc[tc_checkindex], &checkds2itc[tc_checkindex])!=26){
      fprintf(stderr,
	      "There was a problem with your parsing of the tc_check file!\n");
      return 0;
    }
    tc_checkindex++;
  }
  fclose(tc_checkfile);


  Double_t c0cq2[7];
  Double_t c1cq2[7];
  Double_t s1cq2[7];
  Double_t c2cq2[7];
  Double_t c3cq2[7];
  Double_t dc0cq2[7];
  Double_t dc1cq2[7];
  Double_t ds1cq2[7];
  Double_t dc2cq2[7];
  Double_t dc3cq2[7];

  Double_t c0dvcsq2[7];
  Double_t s1dvcsq2[7];
  Double_t c1dvcsq2[7];
  Double_t s2dvcsq2[7];
  Double_t dc0dvcsq2[7];
  Double_t ds1dvcsq2[7];
  Double_t dc1dvcsq2[7];
  Double_t ds2dvcsq2[7];

  Double_t c0iq2[7];
  Double_t s1iq2[7];
  Double_t c1iq2[7];
  Double_t s2iq2[7];
  Double_t dc0iq2[7];
  Double_t ds1iq2[7];
  Double_t dc1iq2[7];
  Double_t ds2iq2[7];

  
  Int_t q2index = 0;
  Char_t tempStringq2[111024];
  FILE *q2file;
  
  if((q2file = fopen("/user/jburns/analysis_code/kinematic_stuff/q2/gordanfit/q2_eml_bins13parsyst_bin6_pol_all_new_withpos.txt","r"))==NULL){
    fprintf(stderr,"Could not open the q2 result file!\n");
    return 0;
  }
  while(fgets(tempStringq2,sizeof(tempStringq2),q2file)!=NULL){
    if(sscanf(tempStringq2,"%lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf\n",
	      &c0cq2[q2index], &dc0cq2[q2index],
	      &c1cq2[q2index], &dc1cq2[q2index],
	      &s1cq2[q2index], &ds1cq2[q2index],
	      &c2cq2[q2index], &dc2cq2[q2index],
	      &c3cq2[q2index], &dc3cq2[q2index],
	      &c0dvcsq2[q2index], &dc0dvcsq2[q2index],
	      &s1dvcsq2[q2index], &ds1dvcsq2[q2index],
	      &c1dvcsq2[q2index], &dc1dvcsq2[q2index],
	      &s2dvcsq2[q2index], &ds2dvcsq2[q2index],
	      &c0iq2[q2index], &dc0iq2[q2index],
	      &s1iq2[q2index], &ds1iq2[q2index],
	      &c1iq2[q2index], &dc1iq2[q2index],
	      &s2iq2[q2index], &ds2iq2[q2index])!=26){
      fprintf(stderr,
	      "There was a problem with your parsing of the q2 result file!\n");
      return 0;
    }
    q2index++;
  }
  fclose(q2file);


  Double_t checkc0cq2[7];
  Double_t checkc1cq2[7]; 
  Double_t checks1cq2[7]; 
  Double_t checkc2cq2[7]; 
  Double_t checkc3cq2[7]; 
  Double_t checkdc0cq2[7];
  Double_t checkdc1cq2[7];
  Double_t checkds1cq2[7];
  Double_t checkdc2cq2[7];
  Double_t checkdc3cq2[7];

  Double_t checkc0dvcsq2[7];
  Double_t checks1dvcsq2[7];
  Double_t checkc1dvcsq2[7];
  Double_t checks2dvcsq2[7];
  Double_t checkdc0dvcsq2[7];
  Double_t checkds1dvcsq2[7];
  Double_t checkdc1dvcsq2[7];
  Double_t checkds2dvcsq2[7];

  Double_t checkc0iq2[7];
  Double_t checks1iq2[7];
  Double_t checkc1iq2[7]; 
  Double_t checks2iq2[7];
  Double_t checkdc0iq2[7];
  Double_t checkds1iq2[7];
  Double_t checkdc1iq2[7];
  Double_t checkds2iq2[7];


  Int_t q2_checkindex = 0;
  Char_t tempStringq2_check[111024];
  FILE *q2_checkfile;
  
  if((q2_checkfile = fopen("/user/jburns/analysis_code/kinematic_stuff/q2/gordanfit/q2_eml_bins13parsyst_bin6_pol_0607_crosscheckresults_jb.txt","r"))==NULL){
    fprintf(stderr,"Could not open the q2 check file!\n");
    return 0;
  }
  while(fgets(tempStringq2_check,sizeof(tempStringq2_check),q2_checkfile)!=NULL){
    if(sscanf(tempStringq2_check,"%lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf\n",
	      &checkc0cq2[q2_checkindex], &checkdc0cq2[q2_checkindex],
	      &checkc1cq2[q2_checkindex], &checkdc1cq2[q2_checkindex],
	      &checks1cq2[q2_checkindex], &checkds1cq2[q2_checkindex],
	      &checkc2cq2[q2_checkindex], &checkdc2cq2[q2_checkindex],
	      &checkc3cq2[q2_checkindex], &checkdc3cq2[q2_checkindex],
	      &checkc0dvcsq2[q2_checkindex], &checkdc0dvcsq2[q2_checkindex],
	      &checks1dvcsq2[q2_checkindex], &checkds1dvcsq2[q2_checkindex],
	      &checkc1dvcsq2[q2_checkindex], &checkdc1dvcsq2[q2_checkindex],
	      &checks2dvcsq2[q2_checkindex], &checkds2dvcsq2[q2_checkindex],
	      &checkc0iq2[q2_checkindex], &checkdc0iq2[q2_checkindex],
	      &checks1iq2[q2_checkindex], &checkds1iq2[q2_checkindex],
	      &checkc1iq2[q2_checkindex], &checkdc1iq2[q2_checkindex],
	      &checks2iq2[q2_checkindex], &checkds2iq2[q2_checkindex])!=26){
      fprintf(stderr,
	      "There was a problem with your parsing of the q2_check file!\n");
      return 0;
    }
    q2_checkindex++;
  }
  fclose(q2_checkfile);


  Double_t c0cxbj[7];
  Double_t c1cxbj[7];
  Double_t s1cxbj[7];
  Double_t c2cxbj[7];
  Double_t c3cxbj[7];
  Double_t dc0cxbj[7];
  Double_t dc1cxbj[7];
  Double_t ds1cxbj[7];
  Double_t dc2cxbj[7];
  Double_t dc3cxbj[7];

  Double_t c0dvcsxbj[7];
  Double_t s1dvcsxbj[7];
  Double_t c1dvcsxbj[7];
  Double_t s2dvcsxbj[7];
  Double_t dc0dvcsxbj[7];
  Double_t ds1dvcsxbj[7];
  Double_t dc1dvcsxbj[7];
  Double_t ds2dvcsxbj[7];

  Double_t c0ixbj[7];
  Double_t s1ixbj[7];
  Double_t c1ixbj[7];
  Double_t s2ixbj[7];
  Double_t dc0ixbj[7];
  Double_t ds1ixbj[7];
  Double_t dc1ixbj[7];
  Double_t ds2ixbj[7];

  
  Int_t xbjindex = 0;
  Char_t tempStringxbj[11024];
  FILE *xbjfile;
  
  if((xbjfile = fopen("/user/jburns/analysis_code/kinematic_stuff/q2/gordanfit/xbj_eml_bins13parsyst_bin6_pol_all_new_withpos.txt","r"))==NULL){
    fprintf(stderr,"Could not open the xbj result file!\n");
    return 0;
  }
  while(fgets(tempStringxbj,sizeof(tempStringxbj),xbjfile)!=NULL){
    if(sscanf(tempStringxbj,"%lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf\n",
	      &c0cxbj[xbjindex], &dc0cxbj[xbjindex],
	      &c1cxbj[xbjindex], &dc1cxbj[xbjindex],
	      &s1cxbj[xbjindex], &ds1cxbj[xbjindex],
	      &c2cxbj[xbjindex], &dc2cxbj[xbjindex],
	      &c3cxbj[xbjindex], &dc3cxbj[xbjindex],
	      &c0dvcsxbj[xbjindex], &dc0dvcsxbj[xbjindex],
	      &s1dvcsxbj[xbjindex], &ds1dvcsxbj[xbjindex],
	      &c1dvcsxbj[xbjindex], &dc1dvcsxbj[xbjindex],
	      &s2dvcsxbj[xbjindex], &ds2dvcsxbj[xbjindex],
	      &c0ixbj[xbjindex], &dc0ixbj[xbjindex],
	      &s1ixbj[xbjindex], &ds1ixbj[xbjindex],
	      &c1ixbj[xbjindex], &dc1ixbj[xbjindex],
	      &s2ixbj[xbjindex], &ds2ixbj[xbjindex])!=26){
      fprintf(stderr,
	      "There was a problem with your parsing of the xbj result file!\n");
      return 0;
    }
    xbjindex++;
  }
  fclose(xbjfile);


  Double_t checkc0cxbj[7];
  Double_t checkc1cxbj[7]; 
  Double_t checks1cxbj[7]; 
  Double_t checkc2cxbj[7]; 
  Double_t checkc3cxbj[7]; 
  Double_t checkdc0cxbj[7];
  Double_t checkdc1cxbj[7];
  Double_t checkds1cxbj[7];
  Double_t checkdc2cxbj[7];
  Double_t checkdc3cxbj[7];

  Double_t checkc0dvcsxbj[7];
  Double_t checks1dvcsxbj[7];
  Double_t checkc1dvcsxbj[7];
  Double_t checks2dvcsxbj[7];
  Double_t checkdc0dvcsxbj[7];
  Double_t checkds1dvcsxbj[7];
  Double_t checkdc1dvcsxbj[7];
  Double_t checkds2dvcsxbj[7];

  Double_t checkc0ixbj[7];
  Double_t checks1ixbj[7];
  Double_t checkc1ixbj[7];
  Double_t checks2ixbj[7];
  Double_t checkdc0ixbj[7];
  Double_t checkds1ixbj[7];
  Double_t checkdc1ixbj[7];
  Double_t checkds2ixbj[7];


  Int_t xbj_checkindex = 0;
  Char_t tempStringxbj_check[111024];
  FILE *xbj_checkfile;
  
  if((xbj_checkfile = fopen("/user/jburns/analysis_code/kinematic_stuff/q2/gordanfit/xbj_eml_bins13parsyst_bin6_pol_06_new_all_tracksave.txt","r"))==NULL){
    fprintf(stderr,"Could not open the xbj check file!\n");
    return 0;
  }
  while(fgets(tempStringxbj_check,sizeof(tempStringxbj_check),xbj_checkfile)!=NULL){
    if(sscanf(tempStringxbj_check,"%lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf\n",
	      &checkc0cxbj[xbj_checkindex], &checkdc0cxbj[xbj_checkindex],
	      &checkc1cxbj[xbj_checkindex], &checkdc1cxbj[xbj_checkindex],
	      &checks1cxbj[xbj_checkindex], &checkds1cxbj[xbj_checkindex],
	      &checkc2cxbj[xbj_checkindex], &checkdc2cxbj[xbj_checkindex],
	      &checkc3cxbj[xbj_checkindex], &checkdc3cxbj[xbj_checkindex],
	      &checkc0dvcsxbj[xbj_checkindex], &checkdc0dvcsxbj[xbj_checkindex],
	      &checks1dvcsxbj[xbj_checkindex], &checkds1dvcsxbj[xbj_checkindex],
	      &checkc1dvcsxbj[xbj_checkindex], &checkdc1dvcsxbj[xbj_checkindex],
	      &checks2dvcsxbj[xbj_checkindex], &checkds2dvcsxbj[xbj_checkindex],
	      &checkc0ixbj[xbj_checkindex], &checkdc0ixbj[xbj_checkindex],
	      &checks1ixbj[xbj_checkindex], &checkds1ixbj[xbj_checkindex],
	      &checkc1ixbj[xbj_checkindex], &checkdc1ixbj[xbj_checkindex],
	      &checks2ixbj[xbj_checkindex], &checkds2ixbj[xbj_checkindex])!=26){
      fprintf(stderr,
	      "There was a problem with your parsing of the xbj_check file!\n");
      return 0;
    }
    xbj_checkindex++;
  }
  fclose(xbj_checkfile);



  Double_t c0ctc_mc[7];
  Double_t c1ctc_mc[7];
  Double_t s1ctc_mc[7];
  Double_t c2ctc_mc[7];
  Double_t c3ctc_mc[7];
  Double_t dc0ctc_mc[7];
  Double_t dc1ctc_mc[7];
  Double_t ds1ctc_mc[7];
  Double_t dc2ctc_mc[7];
  Double_t dc3ctc_mc[7];

  Double_t c0dvcstc_mc[7];
  Double_t c1dvcstc_mc[7];
  Double_t s1dvcstc_mc[7];
  Double_t s2dvcstc_mc[7];
  Double_t dc0dvcstc_mc[7];
  Double_t dc1dvcstc_mc[7];
  Double_t ds1dvcstc_mc[7];
  Double_t ds2dvcstc_mc[7];

  Double_t c0itc_mc[7];
  Double_t s1itc_mc[7];
  Double_t c1itc_mc[7];
  Double_t s2itc_mc[7];
  Double_t dc0itc_mc[7];
  Double_t ds1itc_mc[7];
  Double_t dc1itc_mc[7];
  Double_t ds2itc_mc[7];

  
  Int_t tc_mcindex = 0;
  Char_t tempStringtc_mc[111024];
  FILE *tc_mcfile;
  
  if((tc_mcfile = fopen("/user/jburns/analysis_code/kinematic_stuff/q2/gordanfit/gmcdual_oldstyle_9605_tc_results_short.txt","r"))==NULL){
    fprintf(stderr,"Could not open the tc mc file!\n");
    return 0;
  }
  while(fgets(tempStringtc_mc,sizeof(tempStringtc_mc),tc_mcfile)!=NULL){
    if(sscanf(tempStringtc_mc,"%lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf\n",
	      &c0ctc_mc[tc_mcindex], &dc0ctc_mc[tc_mcindex],
	      &c1ctc_mc[tc_mcindex], &dc1ctc_mc[tc_mcindex],
	      &s1ctc_mc[tc_mcindex], &ds1ctc_mc[tc_mcindex],
	      &c2ctc_mc[tc_mcindex], &dc2ctc_mc[tc_mcindex],
	      &c3ctc_mc[tc_mcindex], &dc3ctc_mc[tc_mcindex],
	      &c0dvcstc_mc[tc_mcindex], &dc0dvcstc_mc[tc_mcindex],
	      &s1dvcstc_mc[tc_mcindex], &ds1dvcstc_mc[tc_mcindex],
	      &c1dvcstc_mc[tc_mcindex], &dc1dvcstc_mc[tc_mcindex],
	      &s2dvcstc_mc[tc_mcindex], &ds2dvcstc_mc[tc_mcindex],
	      &c0itc_mc[tc_mcindex], &dc0itc_mc[tc_mcindex],
	      &s1itc_mc[tc_mcindex], &ds1itc_mc[tc_mcindex],
	      &c1itc_mc[tc_mcindex], &dc1itc_mc[tc_mcindex],
	      &s2itc_mc[tc_mcindex], &ds2itc_mc[tc_mcindex])!=26){
      fprintf(stderr,
	      "There was a problem with your parsing of the tc_mc file!\n");
      return 0;
    }
    tc_mcindex++;
  }
  fclose(tc_mcfile);


  Double_t c0ctc_qplot[7];
  Double_t c1ctc_qplot[7];
  Double_t s1ctc_qplot[7];
  Double_t c2ctc_qplot[7];
  Double_t c3ctc_qplot[7];
  Double_t dc0ctc_qplot[7];
  Double_t dc1ctc_qplot[7];
  Double_t ds1ctc_qplot[7];
  Double_t dc2ctc_qplot[7];
  Double_t dc3ctc_qplot[7];

  Double_t c0dvcstc_qplot[7];
  Double_t c1dvcstc_qplot[7];
  Double_t s1dvcstc_qplot[7];
  Double_t s2dvcstc_qplot[7];
  Double_t dc0dvcstc_qplot[7];
  Double_t dc1dvcstc_qplot[7];
  Double_t ds1dvcstc_qplot[7];
  Double_t ds2dvcstc_qplot[7];

  Double_t c0itc_qplot[7];
  Double_t s1itc_qplot[7];
  Double_t c1itc_qplot[7];
  Double_t s2itc_qplot[7];
  Double_t dc0itc_qplot[7];
  Double_t ds1itc_qplot[7];
  Double_t dc1itc_qplot[7];
  Double_t ds2itc_qplot[7];


  Int_t tc_qplotindex = 0;
  Char_t tempStringtc_qplot[111024];
  FILE *tc_qplotfile;
  
  if((tc_qplotfile = fopen("/user/jburns/analysis_code/dual/combana_newfit_oldversionwithmistake/dat/bsabca_t_Hy_reg_9607.dat","r"))==NULL){
    fprintf(stderr,"Could not open the tc qplot file!\n");
    return 0;
  }
  while(fgets(tempStringtc_qplot,sizeof(tempStringtc_qplot),tc_qplotfile)!=NULL){
    if(sscanf(tempStringtc_qplot,"%lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf\n",
	      &c0ctc_qplot[tc_qplotindex],
	      &s1ctc_qplot[tc_qplotindex],
	      &c1ctc_qplot[tc_qplotindex],
	      &c2ctc_qplot[tc_qplotindex],
	      &c3ctc_qplot[tc_qplotindex],
	      &c0dvcstc_qplot[tc_qplotindex],
	      &s1dvcstc_qplot[tc_qplotindex],
	      &c1dvcstc_qplot[tc_qplotindex],
	      &s2dvcstc_qplot[tc_qplotindex],
	      &c0itc_qplot[tc_qplotindex],
	      &s1itc_qplot[tc_qplotindex],
	      &c1itc_qplot[tc_qplotindex],
	      &s2itc_qplot[tc_qplotindex])!=13){
      fprintf(stderr,
	      "There was a problem with your parsing of the tc_qplot file!\n");
      return 0;
    }
    tc_qplotindex++;
  }
  fclose(tc_qplotfile);

  Double_t diffc0itc[7];
  Double_t diffs1itc[7];
  Double_t diffc1itc[7];
  Double_t diffs2itc[7];

  for(Int_t j = 0;j<=6;j++){
    diffc0itc[j] = c0itc_mc[j] - c0itc_qplot[j];
    diffs1itc[j] = s1itc_mc[j] - s1itc_qplot[j];
    diffc1itc[j] = c1itc_mc[j] - c1itc_qplot[j];
    diffs2itc[j] = s2itc_mc[j] - s2itc_qplot[j];
  }

  Double_t diffc0dvcstc[7];
  Double_t diffs1dvcstc[7];
  Double_t diffc1dvcstc[7];
  Double_t diffs2dvcstc[7];

  for(Int_t j = 0;j<=6;j++){
    diffc0dvcstc[j] = c0dvcstc_mc[j] - c0dvcstc_qplot[j];
    diffs1dvcstc[j] = s1dvcstc_mc[j] - s1dvcstc_qplot[j];
    diffc1dvcstc[j] = c1dvcstc_mc[j] - c1dvcstc_qplot[j];
    diffs2dvcstc[j] = s2dvcstc_mc[j] - s2dvcstc_qplot[j];
  }

  Double_t c0cq2_mc[7];
  Double_t c1cq2_mc[7];
  Double_t s1cq2_mc[7];
  Double_t c2cq2_mc[7];
  Double_t c3cq2_mc[7];
  Double_t dc0cq2_mc[7];
  Double_t dc1cq2_mc[7];
  Double_t ds1cq2_mc[7];
  Double_t dc2cq2_mc[7];
  Double_t dc3cq2_mc[7];

  Double_t c0dvcsq2_mc[7];
  Double_t s1dvcsq2_mc[7];
  Double_t c1dvcsq2_mc[7];
  Double_t s2dvcsq2_mc[7];
  Double_t dc0dvcsq2_mc[7];
  Double_t ds1dvcsq2_mc[7];
  Double_t dc1dvcsq2_mc[7];
  Double_t ds2dvcsq2_mc[7];

  Double_t c0iq2_mc[7];
  Double_t s1iq2_mc[7];
  Double_t c1iq2_mc[7];
  Double_t s2iq2_mc[7];
  Double_t dc0iq2_mc[7];
  Double_t ds1iq2_mc[7];
  Double_t dc1iq2_mc[7];
  Double_t ds2iq2_mc[7];


  Int_t q2_mcindex = 0;
  Char_t tempStringq2_mc[111024];
  FILE *q2_mcfile;
  
  if((q2_mcfile = fopen("/user/jburns/analysis_code/kinematic_stuff/q2/gordanfit/gmcdual_oldstyle_9605_q2_results_short.txt","r"))==NULL){
    fprintf(stderr,"Could not open the q2 mc file!\n");
    return 0;
  }
  while(fgets(tempStringq2_mc,sizeof(tempStringq2_mc),q2_mcfile)!=NULL){
    if(sscanf(tempStringq2_mc,"%lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf\n",
	      &c0cq2_mc[q2_mcindex], &dc0cq2_mc[q2_mcindex],
	      &c1cq2_mc[q2_mcindex], &dc1cq2_mc[q2_mcindex],
	      &s1cq2_mc[q2_mcindex], &ds1cq2_mc[q2_mcindex],
	      &c2cq2_mc[q2_mcindex], &dc2cq2_mc[q2_mcindex],
	      &c3cq2_mc[q2_mcindex], &dc3cq2_mc[q2_mcindex],
	      &c0dvcsq2_mc[q2_mcindex], &dc0dvcsq2_mc[q2_mcindex],
	      &s1dvcsq2_mc[q2_mcindex], &ds1dvcsq2_mc[q2_mcindex],
	      &c1dvcsq2_mc[q2_mcindex], &dc1dvcsq2_mc[q2_mcindex],
	      &s2dvcsq2_mc[q2_mcindex], &ds2dvcsq2_mc[q2_mcindex],
	      &c0iq2_mc[q2_mcindex], &dc0iq2_mc[q2_mcindex],
	      &s1iq2_mc[q2_mcindex], &ds1iq2_mc[q2_mcindex],
	      &c1iq2_mc[q2_mcindex], &dc1iq2_mc[q2_mcindex],
	      &s2iq2_mc[q2_mcindex], &ds2iq2_mc[q2_mcindex])!=26){
      fprintf(stderr,
	      "There was a problem with your parsing of the q2_mc file!\n");
      return 0;
    }
    q2_mcindex++;
  }
  fclose(q2_mcfile);


  Double_t c0cq2_qplot[7];
  Double_t c1cq2_qplot[7];
  Double_t s1cq2_qplot[7];
  Double_t c2cq2_qplot[7];
  Double_t c3cq2_qplot[7];
  Double_t dc0cq2_qplot[7];
  Double_t dc1cq2_qplot[7];
  Double_t ds1cq2_qplot[7];
  Double_t dc2cq2_qplot[7];
  Double_t dc3cq2_qplot[7];

  Double_t c0dvcsq2_qplot[7];
  Double_t s1dvcsq2_qplot[7];
  Double_t c1dvcsq2_qplot[7];
  Double_t s2dvcsq2_qplot[7];
  Double_t dc0dvcsq2_qplot[7];
  Double_t ds1dvcsq2_qplot[7];
  Double_t dc1dvcsq2_qplot[7];
  Double_t ds2dvcsq2_qplot[7];

  Double_t c0iq2_qplot[7];
  Double_t s1iq2_qplot[7];
  Double_t c1iq2_qplot[7];
  Double_t s2iq2_qplot[7];
  Double_t dc0iq2_qplot[7];
  Double_t ds1iq2_qplot[7];
  Double_t dc1iq2_qplot[7];
  Double_t ds2iq2_qplot[7];


  Int_t q2_qplotindex = 0;
  Char_t tempStringq2_qplot[111024];
  FILE *q2_qplotfile;
  
  if((q2_qplotfile = fopen("/user/jburns/analysis_code/dual/combana_newfit_oldversionwithmistake/dat/bsabca_q_Hy_reg_9607.dat","r"))==NULL){
    fprintf(stderr,"Could not open the q2 qplot file!\n");
    return 0;
  }
  while(fgets(tempStringq2_qplot,sizeof(tempStringq2_qplot),q2_qplotfile)!=NULL){
    if(sscanf(tempStringq2_qplot,"%lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf\n",
	      &c0cq2_qplot[q2_qplotindex],
	      &s1cq2_qplot[q2_qplotindex],
	      &c1cq2_qplot[q2_qplotindex],
	      &c2cq2_qplot[q2_qplotindex],
	      &c3cq2_qplot[q2_qplotindex],
	      &c0dvcsq2_qplot[q2_qplotindex],
	      &s1dvcsq2_qplot[q2_qplotindex],
	      &c1dvcsq2_qplot[q2_qplotindex],
	      &s2dvcsq2_qplot[q2_qplotindex],
	      &c0iq2_qplot[q2_qplotindex],
	      &s1iq2_qplot[q2_qplotindex],
	      &c1iq2_qplot[q2_qplotindex],
	      &s2iq2_qplot[q2_qplotindex])!=13){
      fprintf(stderr,
	      "There was a problem with your parsing of the q2_qplot file!\n");
      return 0;
    }
    q2_qplotindex++;
  }
  fclose(q2_qplotfile);


  Double_t diffc0iq2[7];
  Double_t diffs1iq2[7];
  Double_t diffc1iq2[7];
  Double_t diffs2iq2[7];

  for(Int_t k = 0;k<=6;k++){
    diffc0iq2[k] = c0iq2_mc[k] - c0iq2_qplot[k];
    diffs1iq2[k] = s1iq2_mc[k] - s1iq2_qplot[k];
    diffc1iq2[k] = c1iq2_mc[k] - c1iq2_qplot[k];
    diffs2iq2[k] = s2iq2_mc[k] - s2iq2_qplot[k];
  }

  Double_t diffc0dvcsq2[7];
  Double_t diffs1dvcsq2[7];
  Double_t diffc1dvcsq2[7];
  Double_t diffs2dvcsq2[7];

  for(Int_t k = 0;k<=6;k++){
    diffc0dvcsq2[k] = c0dvcsq2_mc[k] - c0dvcsq2_qplot[k];
    diffs1dvcsq2[k] = s1dvcsq2_mc[k] - s1dvcsq2_qplot[k];
    diffc1dvcsq2[k] = c1dvcsq2_mc[k] - c1dvcsq2_qplot[k];
    diffs2dvcsq2[k] = s2dvcsq2_mc[k] - s2dvcsq2_qplot[k];
  }

  Double_t c0cxbj_mc[7];
  Double_t c1cxbj_mc[7];
  Double_t s1cxbj_mc[7];
  Double_t c2cxbj_mc[7];
  Double_t c3cxbj_mc[7];
  Double_t dc0cxbj_mc[7];
  Double_t dc1cxbj_mc[7];
  Double_t ds1cxbj_mc[7];
  Double_t dc2cxbj_mc[7];
  Double_t dc3cxbj_mc[7];

  Double_t c0dvcsxbj_mc[7];
  Double_t s1dvcsxbj_mc[7];
  Double_t c1dvcsxbj_mc[7];
  Double_t s2dvcsxbj_mc[7];
  Double_t dc0dvcsxbj_mc[7];
  Double_t ds1dvcsxbj_mc[7];
  Double_t dc1dvcsxbj_mc[7];
  Double_t ds2dvcsxbj_mc[7];

  Double_t c0ixbj_mc[7];
  Double_t s1ixbj_mc[7];
  Double_t c1ixbj_mc[7];
  Double_t s2ixbj_mc[7];
  Double_t dc0ixbj_mc[7];
  Double_t ds1ixbj_mc[7];
  Double_t dc1ixbj_mc[7];
  Double_t ds2ixbj_mc[7];

  
  Int_t xbj_mcindex = 0;
  Char_t tempStringxbj_mc[11024];
  FILE *xbj_mcfile;
  
  if((xbj_mcfile = fopen("/user/jburns/analysis_code/kinematic_stuff/q2/gordanfit/gmcdual_oldstyle_9605_xbj_results_short.txt","r"))==NULL){
    fprintf(stderr,"Could not open the xbj mc file!\n");
    return 0;
  }
  while(fgets(tempStringxbj_mc,sizeof(tempStringxbj_mc),xbj_mcfile)!=NULL){
    if(sscanf(tempStringxbj_mc,"%lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf\n",
	      &c0cxbj_mc[xbj_mcindex], &dc0cxbj_mc[xbj_mcindex],
	      &c1cxbj_mc[xbj_mcindex], &dc1cxbj_mc[xbj_mcindex],
	      &s1cxbj_mc[xbj_mcindex], &ds1cxbj_mc[xbj_mcindex],
	      &c2cxbj_mc[xbj_mcindex], &dc2cxbj_mc[xbj_mcindex],
	      &c3cxbj_mc[xbj_mcindex], &dc3cxbj_mc[xbj_mcindex],
	      &c0dvcsxbj_mc[xbj_mcindex], &dc0dvcsxbj_mc[xbj_mcindex],
	      &s1dvcsxbj_mc[xbj_mcindex], &ds1dvcsxbj_mc[xbj_mcindex],
	      &c1dvcsxbj_mc[xbj_mcindex], &dc1dvcsxbj_mc[xbj_mcindex],
	      &s2dvcsxbj_mc[xbj_mcindex], &ds2dvcsxbj_mc[xbj_mcindex],
	      &c0ixbj_mc[xbj_mcindex], &dc0ixbj_mc[xbj_mcindex],
	      &s1ixbj_mc[xbj_mcindex], &ds1ixbj_mc[xbj_mcindex],
	      &c1ixbj_mc[xbj_mcindex], &dc1ixbj_mc[xbj_mcindex],
	      &s2ixbj_mc[xbj_mcindex], &ds2ixbj_mc[xbj_mcindex])!=26){
      fprintf(stderr,
	      "There was a problem with your parsing of the xbj_mc file!\n");
      return 0;
    }
    xbj_mcindex++;
  }
  fclose(xbj_mcfile);


  Double_t c0cxbj_qplot[7];
  Double_t c1cxbj_qplot[7];
  Double_t s1cxbj_qplot[7];
  Double_t c2cxbj_qplot[7];
  Double_t c3cxbj_qplot[7];
  Double_t dc0cxbj_qplot[7];
  Double_t dc1cxbj_qplot[7];
  Double_t ds1cxbj_qplot[7];
  Double_t dc2cxbj_qplot[7];
  Double_t dc3cxbj_qplot[7];

  Double_t c0dvcsxbj_qplot[7];
  Double_t s1dvcsxbj_qplot[7];
  Double_t c1dvcsxbj_qplot[7];
  Double_t s2dvcsxbj_qplot[7];
  Double_t dc0dvcsxbj_qplot[7];
  Double_t ds1dvcsxbj_qplot[7];
  Double_t dc1dvcsxbj_qplot[7];
  Double_t ds2dvcsxbj_qplot[7];

  Double_t c0ixbj_qplot[7];
  Double_t s1ixbj_qplot[7];
  Double_t c1ixbj_qplot[7];
  Double_t s2ixbj_qplot[7];
  Double_t dc0ixbj_qplot[7];
  Double_t ds1ixbj_qplot[7];
  Double_t dc1ixbj_qplot[7];
  Double_t ds2ixbj_qplot[7];

  Int_t xbj_qplotindex = 0;
  Char_t tempStringxbj_qplot[11024];
  FILE *xbj_qplotfile;
  
  if((xbj_qplotfile = fopen("/user/jburns/analysis_code/dual/combana_newfit_oldversionwithmistake/dat/bsabca_x_Hy_reg_9607.dat","r"))==NULL){
    fprintf(stderr,"Could not open the xbj qplot file!\n");
    return 0;
  }
  while(fgets(tempStringxbj_qplot,sizeof(tempStringxbj_qplot),xbj_qplotfile)!=NULL){
    if(sscanf(tempStringxbj_qplot,"%lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf\n",
	      &c0cxbj_qplot[xbj_qplotindex],
	      &s1cxbj_qplot[xbj_qplotindex],
	      &c1cxbj_qplot[xbj_qplotindex],
	      &c2cxbj_qplot[xbj_qplotindex],
	      &c3cxbj_qplot[xbj_qplotindex],
	      &c0dvcsxbj_qplot[xbj_qplotindex],
	      &s1dvcsxbj_qplot[xbj_qplotindex],
	      &c1dvcsxbj_qplot[xbj_qplotindex],
	      &s2dvcsxbj_qplot[xbj_qplotindex],
	      &c0ixbj_qplot[xbj_qplotindex],
	      &s1ixbj_qplot[xbj_qplotindex],
	      &c1ixbj_qplot[xbj_qplotindex],
	      &s2ixbj_qplot[xbj_qplotindex])!=13){
      fprintf(stderr,
	      "There was a problem with your parsing of the xbj_qplot file!\n");
      return 0;
    }
    xbj_qplotindex++;
  }
  fclose(xbj_qplotfile);

  Double_t diffc0ixbj[7];
  Double_t diffs1ixbj[7];
  Double_t diffc1ixbj[7];
  Double_t diffs2ixbj[7];

  for(Int_t m = 0;m<=6;m++){
    diffc0ixbj[m] = c0ixbj_mc[m] - c0ixbj_qplot[m];
    diffs1ixbj[m] = s1ixbj_mc[m] - s1ixbj_qplot[m];
    diffc1ixbj[m] = c1ixbj_mc[m] - c1ixbj_qplot[m];
    diffs2ixbj[m] = s2ixbj_mc[m] - s2ixbj_qplot[m];
  }

  Double_t diffc0dvcsxbj[7];
  Double_t diffs1dvcsxbj[7];
  Double_t diffc1dvcsxbj[7];
  Double_t diffs2dvcsxbj[7];

  for(Int_t m = 0;m<=6;m++){
    diffc0dvcsxbj[m] = c0dvcsxbj_mc[m] - c0dvcsxbj_qplot[m];
    diffs1dvcsxbj[m] = s1dvcsxbj_mc[m] - s1dvcsxbj_qplot[m];
    diffc1dvcsxbj[m] = c1dvcsxbj_mc[m] - c1dvcsxbj_qplot[m];
    diffs2dvcsxbj[m] = s2dvcsxbj_mc[m] - s2dvcsxbj_qplot[m];
  }

  Double_t c0ctc_mc_2[7];
  Double_t c1ctc_mc_2[7];
  Double_t s1ctc_mc_2[7];
  Double_t c2ctc_mc_2[7];
  Double_t c3ctc_mc_2[7];
  Double_t dc0ctc_mc_2[7];
  Double_t dc1ctc_mc_2[7];
  Double_t ds1ctc_mc_2[7];
  Double_t dc2ctc_mc_2[7];
  Double_t dc3ctc_mc_2[7];

  Double_t c0dvcstc_mc_2[7];
  Double_t c1dvcstc_mc_2[7];
  Double_t s1dvcstc_mc_2[7];
  Double_t s2dvcstc_mc_2[7];
  Double_t dc0dvcstc_mc_2[7];
  Double_t dc1dvcstc_mc_2[7];
  Double_t ds1dvcstc_mc_2[7];
  Double_t ds2dvcstc_mc_2[7];

  Double_t c0itc_mc_2[7];
  Double_t s1itc_mc_2[7];
  Double_t c1itc_mc_2[7];
  Double_t s2itc_mc_2[7];
  Double_t dc0itc_mc_2[7];
  Double_t ds1itc_mc_2[7];
  Double_t dc1itc_mc_2[7];
  Double_t ds2itc_mc_2[7];

  
  Int_t tc_mc_2index = 0;
  Char_t tempStringtc_mc_2[111024];
  FILE *tc_mc_2file;
  
  if((tc_mc_2file = fopen("/user/jburns/analysis_code/kinematic_stuff/q2/gordanfit/MC_model1_combined_tc_eml_13par_bin6_short_noassoc.txt","r"))==NULL){
    fprintf(stderr,"Could not open the tc mc_2 file!\n");
    return 0;
  }
  while(fgets(tempStringtc_mc_2,sizeof(tempStringtc_mc_2),tc_mc_2file)!=NULL){
    if(sscanf(tempStringtc_mc_2,"%lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf\n",
	      &c0ctc_mc_2[tc_mc_2index], &dc0ctc_mc_2[tc_mc_2index],
	      &c1ctc_mc_2[tc_mc_2index], &dc1ctc_mc_2[tc_mc_2index],
	      &s1ctc_mc_2[tc_mc_2index], &ds1ctc_mc_2[tc_mc_2index],
	      &c2ctc_mc_2[tc_mc_2index], &dc2ctc_mc_2[tc_mc_2index],
	      &c3ctc_mc_2[tc_mc_2index], &dc3ctc_mc_2[tc_mc_2index],
	      &c0dvcstc_mc_2[tc_mc_2index], &dc0dvcstc_mc_2[tc_mc_2index],
	      &s1dvcstc_mc_2[tc_mc_2index], &ds1dvcstc_mc_2[tc_mc_2index],
	      &c1dvcstc_mc_2[tc_mc_2index], &dc1dvcstc_mc_2[tc_mc_2index],
	      &s2dvcstc_mc_2[tc_mc_2index], &ds2dvcstc_mc_2[tc_mc_2index],
	      &c0itc_mc_2[tc_mc_2index], &dc0itc_mc_2[tc_mc_2index],
	      &s1itc_mc_2[tc_mc_2index], &ds1itc_mc_2[tc_mc_2index],
	      &c1itc_mc_2[tc_mc_2index], &dc1itc_mc_2[tc_mc_2index],
	      &s2itc_mc_2[tc_mc_2index], &ds2itc_mc_2[tc_mc_2index])!=26){
      fprintf(stderr,
	      "There was a problem with your parsing of the tc_mc_2 file!\n");
      return 0;
    }
    tc_mc_2index++;
  }
  fclose(tc_mc_2file);


  Double_t c0ctc_qplot_2[7];
  Double_t c1ctc_qplot_2[7];
  Double_t s1ctc_qplot_2[7];
  Double_t c2ctc_qplot_2[7];
  Double_t c3ctc_qplot_2[7];
  Double_t dc0ctc_qplot_2[7];
  Double_t dc1ctc_qplot_2[7];
  Double_t ds1ctc_qplot_2[7];
  Double_t dc2ctc_qplot_2[7];
  Double_t dc3ctc_qplot_2[7];

  Double_t c0dvcstc_qplot_2[7];
  Double_t c1dvcstc_qplot_2[7];
  Double_t s1dvcstc_qplot_2[7];
  Double_t s2dvcstc_qplot_2[7];
  Double_t dc0dvcstc_qplot_2[7];
  Double_t dc1dvcstc_qplot_2[7];
  Double_t ds1dvcstc_qplot_2[7];
  Double_t ds2dvcstc_qplot_2[7];

  Double_t c0itc_qplot_2[7];
  Double_t s1itc_qplot_2[7];
  Double_t c1itc_qplot_2[7];
  Double_t s2itc_qplot_2[7];
  Double_t dc0itc_qplot_2[7];
  Double_t ds1itc_qplot_2[7];
  Double_t dc1itc_qplot_2[7];
  Double_t ds2itc_qplot_2[7];


  Int_t tc_qplot_2index = 0;
  Char_t tempStringtc_qplot_2[111024];
  FILE *tc_qplot_2file;
  
  if((tc_qplot_2file = fopen("/user/jburns/analysis_code/qplot4_updated_FromDidi/dat/bsabca_bint_GPD1_gmcdvcsin.dat","r"))==NULL){
    fprintf(stderr,"Could not open the tc qplot_2 file!\n");
    return 0;
  }
  while(fgets(tempStringtc_qplot_2,sizeof(tempStringtc_qplot_2),tc_qplot_2file)!=NULL){
    if(sscanf(tempStringtc_qplot_2,"%lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf\n",
	      &c0ctc_qplot_2[tc_qplot_2index],
	      &c1ctc_qplot_2[tc_qplot_2index],
	      &s1ctc_qplot_2[tc_qplot_2index],
	      &c2ctc_qplot_2[tc_qplot_2index],
	      &c3ctc_qplot_2[tc_qplot_2index],
	      &c0dvcstc_qplot_2[tc_qplot_2index],
	      &s1dvcstc_qplot_2[tc_qplot_2index],
	      &c1dvcstc_qplot_2[tc_qplot_2index],
	      &s2dvcstc_qplot_2[tc_qplot_2index],
	      &c0itc_qplot_2[tc_qplot_2index],
	      &s1itc_qplot_2[tc_qplot_2index],
	      &c1itc_qplot_2[tc_qplot_2index],
	      &s2itc_qplot_2[tc_qplot_2index])!=13){
      fprintf(stderr,
	      "There was a problem with your parsing of the tc_qplot_2 file!\n");
      return 0;
    }
    tc_qplot_2index++;
  }
  fclose(tc_qplot_2file);

  Double_t diffc0itc_2[7];
  Double_t diffs1itc_2[7];
  Double_t diffc1itc_2[7];
  Double_t diffs2itc_2[7];

  for(Int_t j = 0;j<=6;j++){
    diffc0itc_2[j] = c0itc_mc_2[j] - c0itc_qplot_2[j];
    diffs1itc_2[j] = s1itc_mc_2[j] - s1itc_qplot_2[j];
    diffc1itc_2[j] = c1itc_mc_2[j] - c1itc_qplot_2[j];
    diffs2itc_2[j] = s2itc_mc_2[j] - s2itc_qplot_2[j];
  }

  Double_t diffc0dvcstc_2[7];
  Double_t diffs1dvcstc_2[7];
  Double_t diffc1dvcstc_2[7];
  Double_t diffs2dvcstc_2[7];

  for(Int_t j = 0;j<=6;j++){
    diffc0dvcstc_2[j] = c0dvcstc_mc_2[j] - c0dvcstc_qplot_2[j];
    diffs1dvcstc_2[j] = s1dvcstc_mc_2[j] - s1dvcstc_qplot_2[j];
    diffc1dvcstc_2[j] = c1dvcstc_mc_2[j] - c1dvcstc_qplot_2[j];
    diffs2dvcstc_2[j] = s2dvcstc_mc_2[j] - s2dvcstc_qplot_2[j];
  }

  Double_t c0cq2_mc_2[7];
  Double_t c1cq2_mc_2[7];
  Double_t s1cq2_mc_2[7];
  Double_t c2cq2_mc_2[7];
  Double_t c3cq2_mc_2[7];
  Double_t dc0cq2_mc_2[7];
  Double_t dc1cq2_mc_2[7];
  Double_t ds1cq2_mc_2[7];
  Double_t dc2cq2_mc_2[7];
  Double_t dc3cq2_mc_2[7];

  Double_t c0dvcsq2_mc_2[7];
  Double_t s1dvcsq2_mc_2[7];
  Double_t c1dvcsq2_mc_2[7];
  Double_t s2dvcsq2_mc_2[7];
  Double_t dc0dvcsq2_mc_2[7];
  Double_t ds1dvcsq2_mc_2[7];
  Double_t dc1dvcsq2_mc_2[7];
  Double_t ds2dvcsq2_mc_2[7];

  Double_t c0iq2_mc_2[7];
  Double_t s1iq2_mc_2[7];
  Double_t c1iq2_mc_2[7];
  Double_t s2iq2_mc_2[7];
  Double_t dc0iq2_mc_2[7];
  Double_t ds1iq2_mc_2[7];
  Double_t dc1iq2_mc_2[7];
  Double_t ds2iq2_mc_2[7];


  Int_t q2_mc_2index = 0;
  Char_t tempStringq2_mc_2[111024];
  FILE *q2_mc_2file;
  
  if((q2_mc_2file = fopen("/user/jburns/analysis_code/kinematic_stuff/q2/gordanfit/MC_model1_combined_q2_eml_13par_bin6_short_noassoc.txt","r"))==NULL){
    fprintf(stderr,"Could not open the q2 mc_2 file!\n");
    return 0;
  }
  while(fgets(tempStringq2_mc_2,sizeof(tempStringq2_mc_2),q2_mc_2file)!=NULL){
    if(sscanf(tempStringq2_mc_2,"%lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf\n",
	      &c0cq2_mc_2[q2_mc_2index], &dc0cq2_mc_2[q2_mc_2index],
	      &c1cq2_mc_2[q2_mc_2index], &dc1cq2_mc_2[q2_mc_2index],
	      &s1cq2_mc_2[q2_mc_2index], &ds1cq2_mc_2[q2_mc_2index],
	      &c2cq2_mc_2[q2_mc_2index], &dc2cq2_mc_2[q2_mc_2index],
	      &c3cq2_mc_2[q2_mc_2index], &dc3cq2_mc_2[q2_mc_2index],
	      &c0dvcsq2_mc_2[q2_mc_2index], &dc0dvcsq2_mc_2[q2_mc_2index],
	      &s1dvcsq2_mc_2[q2_mc_2index], &ds1dvcsq2_mc_2[q2_mc_2index],
	      &c1dvcsq2_mc_2[q2_mc_2index], &dc1dvcsq2_mc_2[q2_mc_2index],
	      &s2dvcsq2_mc_2[q2_mc_2index], &ds2dvcsq2_mc_2[q2_mc_2index],
	      &c0iq2_mc_2[q2_mc_2index], &dc0iq2_mc_2[q2_mc_2index],
	      &s1iq2_mc_2[q2_mc_2index], &ds1iq2_mc_2[q2_mc_2index],
	      &c1iq2_mc_2[q2_mc_2index], &dc1iq2_mc_2[q2_mc_2index],
	      &s2iq2_mc_2[q2_mc_2index], &ds2iq2_mc_2[q2_mc_2index])!=26){
      fprintf(stderr,
	      "There was a problem with your parsing of the q2_mc_2 file!\n");
      return 0;
    }
    q2_mc_2index++;
  }
  fclose(q2_mc_2file);


  Double_t c0cq2_qplot_2[7];
  Double_t c1cq2_qplot_2[7];
  Double_t s1cq2_qplot_2[7];
  Double_t c2cq2_qplot_2[7];
  Double_t c3cq2_qplot_2[7];
  Double_t dc0cq2_qplot_2[7];
  Double_t dc1cq2_qplot_2[7];
  Double_t ds1cq2_qplot_2[7];
  Double_t dc2cq2_qplot_2[7];
  Double_t dc3cq2_qplot_2[7];

  Double_t c0dvcsq2_qplot_2[7];
  Double_t s1dvcsq2_qplot_2[7];
  Double_t c1dvcsq2_qplot_2[7];
  Double_t s2dvcsq2_qplot_2[7];
  Double_t dc0dvcsq2_qplot_2[7];
  Double_t ds1dvcsq2_qplot_2[7];
  Double_t dc1dvcsq2_qplot_2[7];
  Double_t ds2dvcsq2_qplot_2[7];

  Double_t c0iq2_qplot_2[7];
  Double_t s1iq2_qplot_2[7];
  Double_t c1iq2_qplot_2[7];
  Double_t s2iq2_qplot_2[7];
  Double_t dc0iq2_qplot_2[7];
  Double_t ds1iq2_qplot_2[7];
  Double_t dc1iq2_qplot_2[7];
  Double_t ds2iq2_qplot_2[7];


  Int_t q2_qplot_2index = 0;
  Char_t tempStringq2_qplot_2[111024];
  FILE *q2_qplot_2file;
  
  if((q2_qplot_2file = fopen("/user/jburns/analysis_code/qplot4_updated_FromDidi/dat/bsabca_binq_GPD1_gmcdvcsin.dat","r"))==NULL){
    fprintf(stderr,"Could not open the q2 qplot_2 file!\n");
    return 0;
  }
  while(fgets(tempStringq2_qplot_2,sizeof(tempStringq2_qplot_2),q2_qplot_2file)!=NULL){
    if(sscanf(tempStringq2_qplot_2,"%lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf\n",
	      &c0cq2_qplot_2[q2_qplot_2index],
	      &c1cq2_qplot_2[q2_qplot_2index],
	      &s1cq2_qplot_2[q2_qplot_2index],
	      &c2cq2_qplot_2[q2_qplot_2index],
	      &c3cq2_qplot_2[q2_qplot_2index],
	      &c0dvcsq2_qplot_2[q2_qplot_2index],
	      &s1dvcsq2_qplot_2[q2_qplot_2index],
	      &c1dvcsq2_qplot_2[q2_qplot_2index],
	      &s2dvcsq2_qplot_2[q2_qplot_2index],
	      &c0iq2_qplot_2[q2_qplot_2index],
	      &s1iq2_qplot_2[q2_qplot_2index],
	      &c1iq2_qplot_2[q2_qplot_2index],
	      &s2iq2_qplot_2[q2_qplot_2index])!=13){
      fprintf(stderr,
	      "There was a problem with your parsing of the q2_qplot_2 file!\n");
      return 0;
    }
    q2_qplot_2index++;
  }
  fclose(q2_qplot_2file);


  Double_t diffc0iq2_2[7];
  Double_t diffs1iq2_2[7];
  Double_t diffc1iq2_2[7];
  Double_t diffs2iq2_2[7];

  for(Int_t k = 0;k<=6;k++){
    diffc0iq2_2[k] = c0iq2_mc_2[k] - c0iq2_qplot_2[k];
    diffs1iq2_2[k] = s1iq2_mc_2[k] - s1iq2_qplot_2[k];
    diffc1iq2_2[k] = c1iq2_mc_2[k] - c1iq2_qplot_2[k];
    diffs2iq2_2[k] = s2iq2_mc_2[k] - s2iq2_qplot_2[k];
  }

  Double_t diffc0dvcsq2_2[7];
  Double_t diffs1dvcsq2_2[7];
  Double_t diffc1dvcsq2_2[7];
  Double_t diffs2dvcsq2_2[7];

  for(Int_t k = 0;k<=6;k++){
    diffc0dvcsq2_2[k] = c0dvcsq2_mc_2[k] - c0dvcsq2_qplot_2[k];
    diffs1dvcsq2_2[k] = s1dvcsq2_mc_2[k] - s1dvcsq2_qplot_2[k];
    diffc1dvcsq2_2[k] = c1dvcsq2_mc_2[k] - c1dvcsq2_qplot_2[k];
    diffs2dvcsq2_2[k] = s2dvcsq2_mc_2[k] - s2dvcsq2_qplot_2[k];
  }


  Double_t c0cxbj_mc_2[7];
  Double_t c1cxbj_mc_2[7];
  Double_t s1cxbj_mc_2[7];
  Double_t c2cxbj_mc_2[7];
  Double_t c3cxbj_mc_2[7];
  Double_t dc0cxbj_mc_2[7];
  Double_t dc1cxbj_mc_2[7];
  Double_t ds1cxbj_mc_2[7];
  Double_t dc2cxbj_mc_2[7];
  Double_t dc3cxbj_mc_2[7];

  Double_t c0dvcsxbj_mc_2[7];
  Double_t s1dvcsxbj_mc_2[7];
  Double_t c1dvcsxbj_mc_2[7];
  Double_t s2dvcsxbj_mc_2[7];
  Double_t dc0dvcsxbj_mc_2[7];
  Double_t ds1dvcsxbj_mc_2[7];
  Double_t dc1dvcsxbj_mc_2[7];
  Double_t ds2dvcsxbj_mc_2[7];

  Double_t c0ixbj_mc_2[7];
  Double_t s1ixbj_mc_2[7];
  Double_t c1ixbj_mc_2[7];
  Double_t s2ixbj_mc_2[7];
  Double_t dc0ixbj_mc_2[7];
  Double_t ds1ixbj_mc_2[7];
  Double_t dc1ixbj_mc_2[7];
  Double_t ds2ixbj_mc_2[7];

  
  Int_t xbj_mc_2index = 0;
  Char_t tempStringxbj_mc_2[11024];
  FILE *xbj_mc_2file;
  
  if((xbj_mc_2file = fopen("/user/jburns/analysis_code/kinematic_stuff/q2/gordanfit/MC_model1_combined_xbj_eml_13par_bin6_short_noassoc.txt","r"))==NULL){
    fprintf(stderr,"Could not open the xbj mc_2 file!\n");
    return 0;
  }
  while(fgets(tempStringxbj_mc_2,sizeof(tempStringxbj_mc_2),xbj_mc_2file)!=NULL){
    if(sscanf(tempStringxbj_mc_2,"%lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf\n",
	      &c0cxbj_mc_2[xbj_mc_2index], &dc0cxbj_mc_2[xbj_mc_2index],
	      &c1cxbj_mc_2[xbj_mc_2index], &dc1cxbj_mc_2[xbj_mc_2index],
	      &s1cxbj_mc_2[xbj_mc_2index], &ds1cxbj_mc_2[xbj_mc_2index],
	      &c2cxbj_mc_2[xbj_mc_2index], &dc2cxbj_mc_2[xbj_mc_2index],
	      &c3cxbj_mc_2[xbj_mc_2index], &dc3cxbj_mc_2[xbj_mc_2index],
	      &c0dvcsxbj_mc_2[xbj_mc_2index], &dc0dvcsxbj_mc_2[xbj_mc_2index],
	      &s1dvcsxbj_mc_2[xbj_mc_2index], &ds1dvcsxbj_mc_2[xbj_mc_2index],
	      &c1dvcsxbj_mc_2[xbj_mc_2index], &dc1dvcsxbj_mc_2[xbj_mc_2index],
	      &s2dvcsxbj_mc_2[xbj_mc_2index], &ds2dvcsxbj_mc_2[xbj_mc_2index],
	      &c0ixbj_mc_2[xbj_mc_2index], &dc0ixbj_mc_2[xbj_mc_2index],
	      &s1ixbj_mc_2[xbj_mc_2index], &ds1ixbj_mc_2[xbj_mc_2index],
	      &c1ixbj_mc_2[xbj_mc_2index], &dc1ixbj_mc_2[xbj_mc_2index],
	      &s2ixbj_mc_2[xbj_mc_2index], &ds2ixbj_mc_2[xbj_mc_2index])!=26){
      fprintf(stderr,
	      "There was a problem with your parsing of the xbj_mc_2 file!\n");
      return 0;
    }
    xbj_mc_2index++;
  }
  fclose(xbj_mc_2file);


  Double_t c0cxbj_qplot_2[7];
  Double_t c1cxbj_qplot_2[7];
  Double_t s1cxbj_qplot_2[7];
  Double_t c2cxbj_qplot_2[7];
  Double_t c3cxbj_qplot_2[7];
  Double_t dc0cxbj_qplot_2[7];
  Double_t dc1cxbj_qplot_2[7];
  Double_t ds1cxbj_qplot_2[7];
  Double_t dc2cxbj_qplot_2[7];
  Double_t dc3cxbj_qplot_2[7];

  Double_t c0dvcsxbj_qplot_2[7];
  Double_t s1dvcsxbj_qplot_2[7];
  Double_t c1dvcsxbj_qplot_2[7];
  Double_t s2dvcsxbj_qplot_2[7];
  Double_t dc0dvcsxbj_qplot_2[7];
  Double_t ds1dvcsxbj_qplot_2[7];
  Double_t dc1dvcsxbj_qplot_2[7];
  Double_t ds2dvcsxbj_qplot_2[7];

  Double_t c0ixbj_qplot_2[7];
  Double_t s1ixbj_qplot_2[7];
  Double_t c1ixbj_qplot_2[7];
  Double_t s2ixbj_qplot_2[7];
  Double_t dc0ixbj_qplot_2[7];
  Double_t ds1ixbj_qplot_2[7];
  Double_t dc1ixbj_qplot_2[7];
  Double_t ds2ixbj_qplot_2[7];

  Int_t xbj_qplot_2index = 0;
  Char_t tempStringxbj_qplot_2[11024];
  FILE *xbj_qplot_2file;
  
  if((xbj_qplot_2file = fopen("/user/jburns/analysis_code/qplot4_updated_FromDidi/dat/bsabca_binx_GPD1_gmcdvcsin.dat","r"))==NULL){
    fprintf(stderr,"Could not open the xbj qplot_2 file!\n");
    return 0;
  }
  while(fgets(tempStringxbj_qplot_2,sizeof(tempStringxbj_qplot_2),xbj_qplot_2file)!=NULL){
    if(sscanf(tempStringxbj_qplot_2,"%lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf %lf\n",
	      &c0cxbj_qplot_2[xbj_qplot_2index],
	      &c1cxbj_qplot_2[xbj_qplot_2index],
	      &s1cxbj_qplot_2[xbj_qplot_2index],
	      &c2cxbj_qplot_2[xbj_qplot_2index],
	      &c3cxbj_qplot_2[xbj_qplot_2index],
	      &c0dvcsxbj_qplot_2[xbj_qplot_2index],
	      &s1dvcsxbj_qplot_2[xbj_qplot_2index],
	      &c1dvcsxbj_qplot_2[xbj_qplot_2index],
	      &s2dvcsxbj_qplot_2[xbj_qplot_2index],
	      &c0ixbj_qplot_2[xbj_qplot_2index],
	      &s1ixbj_qplot_2[xbj_qplot_2index],
	      &c1ixbj_qplot_2[xbj_qplot_2index],
	      &s2ixbj_qplot_2[xbj_qplot_2index])!=13){
      fprintf(stderr,
	      "There was a problem with your parsing of the xbj_qplot_2 file!\n");
      return 0;
    }
    xbj_qplot_2index++;
  }
  fclose(xbj_qplot_2file);

  Double_t diffc0ixbj_2[7];
  Double_t diffs1ixbj_2[7];
  Double_t diffc1ixbj_2[7];
  Double_t diffs2ixbj_2[7];

  for(Int_t m = 0;m<=6;m++){
    diffc0ixbj_2[m] = c0ixbj_mc_2[m] - c0ixbj_qplot_2[m];
    diffs1ixbj_2[m] = s1ixbj_mc_2[m] - s1ixbj_qplot_2[m];
    diffc1ixbj_2[m] = c1ixbj_mc_2[m] - c1ixbj_qplot_2[m];
    diffs2ixbj_2[m] = s2ixbj_mc_2[m] - s2ixbj_qplot_2[m];
  }

  Double_t diffc0dvcsxbj_2[7];
  Double_t diffs1dvcsxbj_2[7];
  Double_t diffc1dvcsxbj_2[7];
  Double_t diffs2dvcsxbj_2[7];

  for(Int_t m = 0;m<=6;m++){
    diffc0dvcsxbj_2[m] = c0dvcsxbj_mc_2[m] - c0dvcsxbj_qplot_2[m];
    diffs1dvcsxbj_2[m] = s1dvcsxbj_mc_2[m] - s1dvcsxbj_qplot_2[m];
    diffc1dvcsxbj_2[m] = c1dvcsxbj_mc_2[m] - c1dvcsxbj_qplot_2[m];
    diffs2dvcsxbj_2[m] = s2dvcsxbj_mc_2[m] - s2dvcsxbj_qplot_2[m];
  }

  Double_t total_assocBH[7] = {0.132095, 10.0000, 10.0000, 10.0000,10.0000,10.0000,10.0000};
  //q2 xbj tc
  Double_t assoc_q2[7]= {10.000000, 0.100706, 0.115763, 0.130940, 0.143032, 0.158857, 0.181278}; 
  Double_t assoc_xbj[7]= {10.00000, 0.129707, 0.115589, 0.125639, 0.137194, 0.152533, 0.164045};
  Double_t assoc_tc[7]= {10.00000, 0.047498, 0.074583, 0.111150, 0.158666, 0.233569, 0.338914};

  Int_t i;



  /** END LOAD DATA **/


  /** PRODUCE PLOT **/

  gStyle->SetPadBottomMargin(0.45);
  gStyle->SetPadTopMargin(0.10);
  gStyle->SetPadLeftMargin(0.35);
  gStyle->SetPadRightMargin(0.05);

  //TCanvas *combined = new TCanvas("COMBINED", "combined");
  TCanvas *combined = new TCanvas("combined", "", -1,1, 1200, 800);
  combined->SetFillColor(0);
  combined->SetFrameFillColor(0);
  combined->SetLineColor(0);

  TPad * pad1 = new TPad("pad1", "pad1",0.0,0.0,0.99,0.99);
  pad1->SetFillColor(0);
  pad1->SetFrameFillColor(0);
  pad1->SetLineColor(0);
  pad1->Draw();
  pad1->Divide(4, 4,0.00,0.00);


  // s1i amplitude



  pad1->cd(1);
  gPad->SetFrameFillStyle(0);
  gPad->SetFillStyle(0);
  gPad->SetPad(0.00,0.70,0.25,1.00);

  Double_t maxy_s1i = 0.25;
  Double_t miny_s1i = -0.65;

  TH1F *frame = gPad->DrawFrame(0,miny_s1i,5,maxy_s1i);

  Int_t MARKERSIZE=1;

  TAxis *xaxis;
  xaxis = frame->GetXaxis();
  xaxis->Set(3,0.0,2.0);
  xaxis->SetTickLength(0);
  xaxis->SetBinLabel(2,"Integrated Over All Kinematics");
  xaxis->SetLabelSize(0.01);
  xaxis->SetLabelOffset(0.015);
  xaxis->SetTitleSize(0.01);
  xaxis->LabelsOption("h");
  xaxis->Draw();
  Double_t  MAX_X = xaxis->GetXmax();
  Double_t  MIN_X = xaxis->GetXmin();
  TLine *xaxiszero = new TLine(MIN_X,0,MAX_X,0);
  xaxiszero->SetLineStyle(2);
  xaxiszero->Draw();

  TAxis *yaxis;
  yaxis = frame->GetYaxis();
  yaxis->SetTitle("A_{LU,I}^{sin #phi}");
  yaxis->SetNdivisions(205,kTRUE);
  yaxis->SetLabelFont(63);
  yaxis->SetTitleFont(63);
  yaxis->SetLabelSize(25);
  yaxis->SetLabelOffset(0.05);
  yaxis->SetTitleSize(35);
  yaxis->SetTitleOffset(4.5);
  yaxis->CenterTitle();
  yaxis->Draw();

  TLine *l1 = new TLine(0.8,s1ixbj_kumericki_without_hallA[0],1.2,s1ixbj_kumericki_without_hallA[0]);
  l1->SetLineColor(4);
  l1->SetLineStyle(1);
  l1->SetLineWidth(1); 
  l1->Draw("l"); 

  TLine *ll1 = new TLine(0.8,s1ixbj_kumericki_with_hallA[0],1.2,s1ixbj_kumericki_with_hallA[0]);
  ll1->SetLineColor(6);
  ll1->SetLineStyle(2);
  ll1->SetLineWidth(1); 
  ll1->Draw("l"); 


  Double_t xoverall[5]={1.0, -99.0, -99.0, -99.0, -99.0};
  Double_t xoverall_2[5]={1.2, -99.0, -99.0, -99.0, -99.0};

  Double_t corr_xoverall[4] = {0.95, -99.0, -99.0, -99.0};

  Double_t corr_s1overall[4] = { (1/(1-fsidis_q2[0]))*(s1itc[0]-fsidis_q2[0]*s1itc_pi0[0]), -99, -99, -99};
  Double_t overall_corr_s1;
  overall_corr_s1 = s1itc[0] + sqrt((-fsidis_q2[0]/(1-fsidis_q2[0]))*(-fsidis_q2[0]/(1-fsidis_q2[0]))*(s1itc_pi0[0]*s1itc_pi0[0]));
  Double_t corr_ds1overall[4] = { overall_corr_s1, -99, -99, -99};


  TGraphErrors *gr = new TGraphErrors(1,xoverall,s1itc,NULL,ds1itc);
  //TGraphErrors *gr25 = new TGraphErrors(1,xoverall_2,checks1itc,NULL,checkds1itc);

  gr->SetMarkerStyle(21);
  //gr25->SetMarkerStyle(26);

  gr->SetMarkerSize(MARKERSIZE);
  //gr25->SetMarkerSize(MARKERSIZE);

  gr->SetMarkerColor(2);
  gr->SetLineColor(2);
  //gr25->SetMarkerColor(2);

  //gr5->Draw("P");
  //gr25->Draw("PSAME");

  //printf("s1 mc %lf pi %lf mass %lf\n",  abs(diffs1itc[0]), abs(s1itc[0]-corr_s1overall[0]), 0.25*abs(s1itc[0]-checks1itc[0]));


  diffs1itc[0] = abs((abs(diffs1itc[0])*(abs(diffs1itc[0]))) + ((0.5*abs(s1itc[0]-corr_s1overall[0]))*(0.5*abs(s1itc[0]-corr_s1overall[0]))) + ((0.25*abs(s1itc[0]-checks1itc[0]))*(0.25*abs(s1itc[0]-checks1itc[0]))));
  diffs1itc[0] = sqrt(diffs1itc[0]);

  printf("amplitude %lf stat %lf overall syst %lf\n", s1itc[0], ds1itc[0],diffs1itc[0]);


  float s1i_overall_xstart = 0.5;
  float s1i_overall_xend = 1.5;
  float s1i_overall_ystart = -0.6;
  float s1i_overall_yend = diffs1itc[0];

  Double_t s1i_overall_x[] = {s1i_overall_xstart, s1i_overall_xstart, s1i_overall_xend, s1i_overall_xend, s1i_overall_xstart};
  Double_t s1i_overall_y[] = {s1i_overall_ystart, s1i_overall_ystart + s1i_overall_yend, s1i_overall_ystart + s1i_overall_yend, \
                              s1i_overall_ystart};

  TPolyLine *s1i_overall_syst = new TPolyLine(4, s1i_overall_x, s1i_overall_y, "");
  s1i_overall_syst->SetFillStyle(1001);
  s1i_overall_syst->SetFillColor(5);
  s1i_overall_syst->Draw("f");
  TPolyLine *s1i_overall_syst_line1 = new TPolyLine(4, s1i_overall_x, s1i_overall_y, "");
  s1i_overall_syst_line1->SetFillStyle(0);
  s1i_overall_syst_line1->SetFillColor(1);
  s1i_overall_syst_line1->Draw("fsame");


  TPolyLine *vgg_regge_overalls1iband = new TPolyLine(5, vgg_regge_overallxvalues,vggregge_overalls1i); 
  vgg_regge_overalls1iband->SetFillStyle(3644);
  vgg_regge_overalls1iband->SetFillColor(4);
  vgg_regge_overalls1iband->SetLineColor(4);
  vgg_regge_overalls1iband->SetLineWidth(5);
  //vgg_regge_overalls1iband->Draw("F");

  gr->Draw("PSAME");

  //TLatex text_line1;
  //text_line1.SetTextSize(0.12);
  //text_line1.SetTextColor(kBlack);
  //text_line1.DrawLatex(0.1976522,0.1375139,"HERMES");
  //TLatex text_line2;
  //text_line2.SetTextSize(0.12);
  //text_line2.SetTextColor(kBlack);
  //text_line2.DrawLatex(0.065,0.05,"PRELIMINARY");

  // 2nd canvas - vs Q2 all data

  Double_t xq2_shift = 0.15;
  // New bin values
  Double_t xq2[7] = {-99.0, 1.199648, 1.591432, 2.080343, 2.768593, 3.767008, 5.851009};
  Double_t xq2_2[7] = {-99.0, 1.199648 + xq2_shift, 1.591432 + xq2_shift, 2.080343 + xq2_shift, 2.768593 + xq2_shift, 3.767008 + xq2_shift, 5.851009 + xq2_shift};

  pad1->cd(4);

  TH1F *frame2 = gPad->DrawFrame(0,miny_s1i,11,maxy_s1i);

  gPad->SetFillStyle(0);
  gPad->SetBorderSize(0);
  gPad->SetBorderMode(0);
  gPad->SetLeftMargin(0);
  gPad->SetLogx();

  gPad->SetPad(0.75,0.70,1.00,1.00);

  TAxis *xaxis2;
  xaxis2 = frame2->GetXaxis();
  xaxis2->Set(10,0.95,11.5);
  //xaxis2->SetTickLength(0);
  xaxis2->SetTitle("Q^{2} (GeV^{2})");
  xaxis2->SetNdivisions(505,kTRUE);
  xaxis2->LabelsOption("h");
  xaxis2->SetLabelSize(0.1);
  xaxis2->SetTitleSize(0.1);
  xaxis2->SetTitleOffset(1.01);
  xaxis2->Draw();
  Double_t  MAX_X_2 = xaxis2->GetXmax();
  Double_t  MIN_X_2 = xaxis2->GetXmin();
  TLine *xaxiszero2 = new TLine(MIN_X_2,0,MAX_X_2,0);
  xaxiszero2->SetLineStyle(2);
  xaxiszero2->Draw();

  TAxis *yaxis2;
  yaxis2 = frame2->GetYaxis();
  yaxis2->SetNdivisions(205,kTRUE);

  Double_t corr_s1_ul_q2[7];
  Double_t corr_ds1_ul_q2[7];

  for (i=0;i<7;i++){
    corr_s1_ul_q2[i] = (1/(1-fsidis_q2[i]))*(s1iq2[i]-fsidis_q2[i]*s1iq2_pi0[i]);
    corr_ds1_ul_q2[i] = ds1iq2[i] + sqrt((-fsidis_q2[i]/(1-fsidis_q2[i]))*
                             (-fsidis_q2[i]/(1-fsidis_q2[i]))*(ds1iq2_pi0[i]*ds1iq2_pi0[i]));

    //printf("s1 mc %lf pi %lf mass %lf\n",  abs(diffs1iq2[i]), abs(s1iq2[i]-corr_s1overall[i]), 0.25*abs(s1iq2[i]-checks1iq2[i]));
    //printf("overall sidis s1 q2 asymmetry uncorr %lf corr %lf diff %lf\n", s1iq2[i], corr_s1_ul_q2[i], abs(s1iq2[i]-corr_s1_ul_q2[i]));
    //printf("overall mass s1 q2 asymmetry uncorr %lf corr %lf diff %lf\n", s1iq2[i], checks1iq2[i], abs(s1iq2[i]-checks1iq2[i]));

   
    diffs1iq2[i] = abs((abs(diffs1iq2[i])*(abs(diffs1iq2[i]))) + ((0.5*abs(s1iq2[i]-corr_s1_ul_q2[i])*0.5*abs(s1iq2[i]-corr_s1_ul_q2[i]))) + ((0.25*abs(s1iq2[i]-checks1iq2[i]))*(0.25*abs(s1iq2[i]-checks1iq2[i]))));
    diffs1iq2[i] = sqrt(diffs1iq2[i]);
    printf("q2 s1sin phiamplitude %lf stat %lf overall syst %lf\n", s1iq2[i], ds1iq2[i],  diffs1iq2[i]);
  }

  TGraphErrors *gr2 = new TGraphErrors(7,xq2,s1iq2,NULL,ds1iq2);
  //TGraphErrors *gr22 = new TGraphErrors(7,xq2_2,checks1iq2,NULL,checkds1iq2);

  gr2->SetMarkerStyle(21);
  //gr22->SetMarkerStyle(26);

  gr2->SetMarkerSize(0.85);
  //gr26->SetMarkerSize(0.525);

  gr2->SetMarkerColor(2);
  gr2->SetLineColor(2);
  //gr26->SetMarkerColor(2);

  //gr6->Draw("P");
  //gr26->Draw("PSAME");

  TLine *lqc01 = new TLine(xq2[1],s1iq2_kumericki_without_hallA[1],xq2[2],s1iq2_kumericki_without_hallA[2]);
  lqc01->SetLineColor(4);
  lqc01->SetLineStyle(1);
  lqc01->SetLineWidth(1); 
  lqc01->Draw("l"); 
  TLine *lqc02 = new TLine(xq2[2],s1iq2_kumericki_without_hallA[2],xq2[3],s1iq2_kumericki_without_hallA[3]);
  lqc02->SetLineColor(4);
  lqc02->SetLineStyle(1);
  lqc02->SetLineWidth(1); 
  lqc02->Draw("lsame");
  TLine *lqc03 = new TLine(xq2[3],s1iq2_kumericki_without_hallA[3],xq2[4],s1iq2_kumericki_without_hallA[4]);
  lqc03->SetLineColor(4);
  lqc03->SetLineStyle(1);
  lqc03->SetLineWidth(1); 
  lqc03->Draw("lsame");
  TLine *lqc04 = new TLine(xq2[4],s1iq2_kumericki_without_hallA[4],xq2[5],s1iq2_kumericki_without_hallA[5]);
  lqc04->SetLineColor(4);
  lqc04->SetLineStyle(1);
  lqc04->SetLineWidth(1); 
  lqc04->Draw("lsame");
  TLine *lqc05 = new TLine(xq2[5],s1iq2_kumericki_without_hallA[5],xq2[6],s1iq2_kumericki_without_hallA[6]);
  lqc05->SetLineColor(4);
  lqc05->SetLineStyle(1);
  lqc05->SetLineWidth(1); 
  lqc05->Draw("lsame");

  TLine *llqc01 = new TLine(xq2[1],s1iq2_kumericki_with_hallA[1],xq2[2],s1iq2_kumericki_with_hallA[2]);
  llqc01->SetLineColor(6);
  llqc01->SetLineStyle(2);
  llqc01->SetLineWidth(1); 
  llqc01->Draw("l"); 
  TLine *llqc02 = new TLine(xq2[2],s1iq2_kumericki_with_hallA[2],xq2[3],s1iq2_kumericki_with_hallA[3]);
  llqc02->SetLineColor(6);
  llqc02->SetLineStyle(2);
  llqc02->SetLineWidth(1); 
  llqc02->Draw("lsame");
  TLine *llqc03 = new TLine(xq2[3],s1iq2_kumericki_with_hallA[3],xq2[4],s1iq2_kumericki_with_hallA[4]);
  llqc03->SetLineColor(6);
  llqc03->SetLineStyle(2);
  llqc03->SetLineWidth(1); 
  llqc03->Draw("lsame");
  TLine *llqc04 = new TLine(xq2[4],s1iq2_kumericki_with_hallA[4],xq2[5],s1iq2_kumericki_with_hallA[5]);
  llqc04->SetLineColor(6);
  llqc04->SetLineStyle(2);
  llqc04->SetLineWidth(1); 
  llqc04->Draw("lsame");
  TLine *llqc05 = new TLine(xq2[5],s1iq2_kumericki_with_hallA[5],xq2[6],s1iq2_kumericki_with_hallA[6]);
  llqc05->SetLineColor(6);
  llqc05->SetLineStyle(2);
  llqc05->SetLineWidth(1); 
  llqc05->Draw("lsame");

  float s1i_q2_xstart = 1.0;
  float s1i_q2_ystart = -0.6;

  Double_t s1i_q2x[] = {s1i_q2_xstart, s1i_q2_xstart, s1i_q2_xstart + 1.4 - 1.0, s1i_q2_xstart + 1.4 - 1.0, \
                        s1i_q2_xstart + 1.85 - 1.0, s1i_q2_xstart + 1.85 - 1.0, s1i_q2_xstart + 2.45 - 1.0, s1i_q2_xstart + 2.45 - 1.0, \
                        s1i_q2_xstart + 3.3 - 1.0, s1i_q2_xstart + 3.3 - 1.0, s1i_q2_xstart + 4.8 - 1.0, s1i_q2_xstart + 4.8 - 1.0,  \
                        s1i_q2_xstart + 10.0 - 1.0, s1i_q2_xstart + 10.0 - 1.0};

  Double_t s1i_q2y[] = {s1i_q2_ystart, s1i_q2_ystart + diffs1iq2[1], s1i_q2_ystart + diffs1iq2[1], s1i_q2_ystart + diffs1iq2[2], \
                        s1i_q2_ystart + diffs1iq2[2], s1i_q2_ystart + diffs1iq2[3], s1i_q2_ystart + diffs1iq2[3], s1i_q2_ystart + diffs1iq2[4], \
                        s1i_q2_ystart + diffs1iq2[4], s1i_q2_ystart + diffs1iq2[5], s1i_q2_ystart + diffs1iq2[5], s1i_q2_ystart + diffs1iq2[6], \
			s1i_q2_ystart + diffs1iq2[6], s1i_q2_ystart};

  TPolyLine *s1i_q2_syst = new TPolyLine(14,s1i_q2x,s1i_q2y,"");
  s1i_q2_syst->SetFillStyle(1001);
  s1i_q2_syst->SetFillColor(5);
  s1i_q2_syst->Draw("f");
  TPolyLine *s1i_q2_syst_line1 = new TPolyLine(14,s1i_q2x,s1i_q2y,"");
  s1i_q2_syst_line1->SetFillStyle(0);
  s1i_q2_syst_line1->SetFillColor(1);
  s1i_q2_syst_line1->Draw("fsame");


  TPolyLine *vgg_regge_q2s1iband = new TPolyLine(13, vgg_regge_q2xvalues, vggregge_q2s1i); 
  vgg_regge_q2s1iband->SetFillStyle(3644);
  vgg_regge_q2s1iband->SetFillColor(kBlue);
  vgg_regge_q2s1iband->SetLineColor(kBlue);
  vgg_regge_q2s1iband->SetLineWidth(5);
  //vgg_regge_q2s1iband->Draw("F");

  gr2->Draw("PSAME");

  //TPolyLine *vgg = new TPolyLine(9, vgg_regge_q2xvalues,vggregge_q2c0i);
  //vgg->SetFillStyle(3644);
  //vgg->SetLineColor(kBlue);
  //vgg->SetLineWidth(2);

  //TLegend *regge_leg = new TLegend(0.05,0.69,0.70,0.95,"","b1NDC");
  //regge_leg->SetBorderSize(0);
  //regge_leg->SetLineColor(0);
  //regge_leg->SetFillStyle(0);
  //regge_leg->SetFillColor(0);
  //regge_leg->AddEntry(vgg,"VGG Regge","l");
  //regge_leg->Draw();

  //TLatex process;
  //process.SetTextSize(0.17);
  //process.DrawLatex(0.000,0.15,"e^{+/-} p #rightarrow e^{+/-} p #gamma");

  // 3rd canvas - vs xbj all data

  Double_t xxbj_shift = 0.005;
  // New x values
   Double_t xxbj[7] = {-99.0, 0.049070, 0.069647, 0.089392, 0.113598, 0.157213, 0.245365};
   Double_t xxbj_2[7] = {-99.0, 0.049070 + xxbj_shift, 0.069647 + xxbj_shift, 0.089392 + xxbj_shift, 0.113598 + xxbj_shift, 0.157213 + xxbj_shift, 0.245365 + xxbj_shift};

  pad1->cd(3);

  gPad->SetFillStyle(0);
  gPad->SetBorderSize(0);
  gPad->SetLogx();
    
  gPad->SetPad(0.50,0.70,0.75,1.00);

  TH1F *frame3 = gPad->DrawFrame(-0.1,miny_s1i,0.5,maxy_s1i);
  TAxis *xaxis3;
  xaxis3 = frame3->GetXaxis();
  xaxis3->Set(20, 0.04, 0.33);
  //xaxis3->SetTickLength(0);
  xaxis3->SetTitle("x_{Bj}");
  xaxis3->SetNdivisions(505,kTRUE);
  xaxis3->SetLabelSize(0.1);
  xaxis3->SetTitleSize(0.1);
  xaxis3->SetTitleOffset(1.01);
  xaxis3->Draw();
  Double_t  MAX_X_3 = xaxis3->GetXmax();
  TLine *xaxiszero3 = new TLine(-0.1,0,MAX_X_3,0);
  xaxiszero3->SetLineStyle(2);
  xaxiszero3->Draw();

  TAxis *yaxis3;
  yaxis3 = frame3->GetYaxis();
  yaxis3->SetNdivisions(205,kTRUE);


  Double_t corr_s1_ul_xbj[7];
  Double_t corr_ds1_ul_xbj[7];

  for (i=0;i<7;i++){
    corr_s1_ul_xbj[i] = (1/(1-fsidis_xbj[i]))*(s1ixbj[i]-fsidis_xbj[i]*s1ixbj_pi0[i]);
    corr_ds1_ul_xbj[i] = ds1ixbj[i] + sqrt((-fsidis_xbj[i]/(1-fsidis_xbj[i]))*
                             (-fsidis_xbj[i]/(1-fsidis_xbj[i]))*(ds1ixbj_pi0[i]*ds1ixbj_pi0[i]));
    //printf("overall s1 xbj asymmetry uncorr %lf corr %lf diff %lf\n", s1ixbj[i], corr_s1_ul_xbj[i], abs(s1ixbj[i]-corr_s1_ul_xbj[i]));
    //printf("overall mass s1 xbj asymmetry uncorr %lf corr %lf diff %lf\n", s1ixbj[i], checks1ixbj[i], abs(s1ixbj[i]-checks1ixbj[i]));

       diffs1ixbj[i] = abs((abs(diffs1ixbj[i])*(abs(diffs1ixbj[i]))) + (0.5*abs(s1ixbj[i]-corr_s1_ul_xbj[i])*0.5*abs(s1ixbj[i]-corr_s1_ul_xbj[i])) + (0.25*abs(s1ixbj[i]-checks1ixbj[i])*0.25*abs(s1ixbj[i]-checks1ixbj[i])));
       diffs1ixbj[i] = sqrt(diffs1ixbj[i]);
       printf("xbj s1i amplitude %lf statistical %lf overall syst %lf\n", s1ixbj[i], ds1ixbj[i], diffs1ixbj[i]);
  }

  TGraphErrors *gr3 = new TGraphErrors(7,xxbj,s1ixbj,NULL,ds1ixbj);
  //TGraphErrors *gr23 = new TGraphErrors(7,xxbj_2,checks1ixbj,NULL,checkds1ixbj);

  gr3->SetMarkerStyle(21);
  //gr23->SetMarkerStyle(26);

  gr3->SetMarkerSize(0.85);
  //gr23->SetMarkerSize(0.525);

  gr3->SetMarkerColor(2);
  gr3->SetLineColor(2);
  //gr23->SetMarkerColor(2);

  //gr3->Draw("P");
  //gr23->Draw("PSAME");

  TLine *lxbjc01 = new TLine(xxbj[1],s1ixbj_kumericki_without_hallA[1],xxbj[2],s1ixbj_kumericki_without_hallA[2]);
  lxbjc01->SetLineColor(4);
  lxbjc01->SetLineStyle(1);
  lxbjc01->SetLineWidth(1); 
  lxbjc01->Draw("l"); 
  TLine *lxbjc02 = new TLine(xxbj[2],s1ixbj_kumericki_without_hallA[2],xxbj[3],s1ixbj_kumericki_without_hallA[3]);
  lxbjc02->SetLineColor(4);
  lxbjc02->SetLineStyle(1);
  lxbjc02->SetLineWidth(1); 
  lxbjc02->Draw("lsame");
  TLine *lxbjc03 = new TLine(xxbj[3],s1ixbj_kumericki_without_hallA[3],xxbj[4],s1ixbj_kumericki_without_hallA[4]);
  lxbjc03->SetLineColor(4);
  lxbjc03->SetLineStyle(1);
  lxbjc03->SetLineWidth(1); 
  lxbjc03->Draw("lsame");
  TLine *lxbjc04 = new TLine(xxbj[4],s1ixbj_kumericki_without_hallA[4],xxbj[5],s1ixbj_kumericki_without_hallA[5]);
  lxbjc04->SetLineColor(4);
  lxbjc04->SetLineStyle(1);
  lxbjc04->SetLineWidth(1); 
  lxbjc04->Draw("lsame");
  TLine *lxbjc05 = new TLine(xxbj[5],s1ixbj_kumericki_without_hallA[5],xxbj[6],s1ixbj_kumericki_without_hallA[6]);
  lxbjc05->SetLineColor(4);
  lxbjc05->SetLineStyle(1);
  lxbjc05->SetLineWidth(1); 
  lxbjc05->Draw("lsame");

  TLine *llxbjc01 = new TLine(xxbj[1],s1ixbj_kumericki_with_hallA[1],xxbj[2],s1ixbj_kumericki_with_hallA[2]);
  llxbjc01->SetLineColor(6);
  llxbjc01->SetLineStyle(2);
  llxbjc01->SetLineWidth(1); 
  llxbjc01->Draw("l"); 
  TLine *llxbjc02 = new TLine(xxbj[2],s1ixbj_kumericki_with_hallA[2],xxbj[3],s1ixbj_kumericki_with_hallA[3]);
  llxbjc02->SetLineColor(6);
  llxbjc02->SetLineStyle(2);
  llxbjc02->SetLineWidth(1); 
  llxbjc02->Draw("lsame");
  TLine *llxbjc03 = new TLine(xxbj[3],s1ixbj_kumericki_with_hallA[3],xxbj[4],s1ixbj_kumericki_with_hallA[4]);
  llxbjc03->SetLineColor(6);
  llxbjc03->SetLineStyle(2);
  llxbjc03->SetLineWidth(1); 
  llxbjc03->Draw("lsame");
  TLine *llxbjc04 = new TLine(xxbj[4],s1ixbj_kumericki_with_hallA[4],xxbj[5],s1ixbj_kumericki_with_hallA[5]);
  llxbjc04->SetLineColor(6);
  llxbjc04->SetLineStyle(2);
  llxbjc04->SetLineWidth(1); 
  llxbjc04->Draw("lsame");
  TLine *llxbjc05 = new TLine(xxbj[5],s1ixbj_kumericki_with_hallA[5],xxbj[6],s1ixbj_kumericki_with_hallA[6]);
  llxbjc05->SetLineColor(6);
  llxbjc05->SetLineStyle(2);
  llxbjc05->SetLineWidth(1); 
  llxbjc05->Draw("lsame");

  float s1i_xbj_xstart = 0.045;
  float s1i_xbj_ystart = -0.6;

  Double_t s1i_xbjx[] = {s1i_xbj_xstart, s1i_xbj_xstart, 0.06, 0.06, \
                         0.08, 0.08, 0.10, 0.10, \
			 0.13, 0.13, 0.2, 0.2,\
			 0.3, 0.3 };

  Double_t s1i_xbjy[] = {s1i_xbj_ystart, s1i_xbj_ystart + diffs1ixbj[1], s1i_xbj_ystart + diffs1ixbj[1], s1i_xbj_ystart + diffs1ixbj[2], \
			 s1i_xbj_ystart + diffs1ixbj[2], s1i_xbj_ystart + diffs1ixbj[3], s1i_xbj_ystart + diffs1ixbj[3],  s1i_xbj_ystart + diffs1ixbj[4], \
			 s1i_xbj_ystart + diffs1ixbj[4], s1i_xbj_ystart + diffs1ixbj[5], s1i_xbj_ystart + diffs1ixbj[5], \
			 s1i_xbj_ystart + diffs1ixbj[6], s1i_xbj_ystart + diffs1ixbj[6], s1i_xbj_ystart, };

  TPolyLine *s1i_xbj_syst = new TPolyLine(14,s1i_xbjx,s1i_xbjy,"");
  s1i_xbj_syst->SetFillStyle(1001);
  s1i_xbj_syst->SetFillColor(5);
  s1i_xbj_syst->Draw("f");
  TPolyLine *s1i_xbj_syst_line1 = new TPolyLine(14,s1i_xbjx,s1i_xbjy,"");
  s1i_xbj_syst_line1->SetFillStyle(0);
  s1i_xbj_syst_line1->SetFillColor(1);
  s1i_xbj_syst_line1->Draw("fsame");

  TPolyLine *vgg_regge_xbs1iband = new TPolyLine(13, vgg_regge_xbxvalues,vggregge_xbs1i); 
  vgg_regge_xbs1iband->SetFillStyle(3644);
  vgg_regge_xbs1iband->SetFillColor(kBlue);
  vgg_regge_xbs1iband->SetLineColor(kBlue);
  vgg_regge_xbs1iband->SetLineWidth(5);
  //vgg_regge_xbs1iband->Draw("F");

  gr3->Draw("PSAME");

  TPolyLine *vgg = new TPolyLine(9, vgg_regge_q2xvalues,vggregge_q2c0i);
  vgg->SetFillStyle(3644);
  vgg->SetLineColor(kBlack);
  vgg->SetFillColor(kBlue);
  vgg->SetLineWidth(1);

  TLegend *regge_leg  = new TLegend(0.07425425,0.8374069,0.6418026,0.9595262,NULL,"b1NDC");
  regge_leg->SetBorderSize(0);
  regge_leg->SetLineColor(0);
  regge_leg->SetFillStyle(3644);
  regge_leg->SetFillColor(0);
  regge_leg->AddEntry(vgg,"VGG Regge","f");
  //regge_leg->Draw();

  //TLatex sprocess;
  //sprocess.SetTextSize(0.12);
  //sprocess.DrawLatex(0.045,0.04,"3.4% scale uncertainty"); 

  // 4th canvas - vs tc all data

  Double_t tc_shift = 0.015;
  // New x values
  Double_t xtc[7] = {-99.0, 0.018761, 0.043940, 0.078792, 0.142805, 0.260879, 0.466061};
  Double_t xtc_2[7] = {-99.0, 0.018761 + tc_shift, 0.043940 + tc_shift, 0.078792 + tc_shift, 0.142805 + tc_shift, 0.260879 + tc_shift, 0.466061 + tc_shift};

  pad1->cd(2);

  TH1F *frame4 = gPad->DrawFrame(-0.05,miny_s1i,0.8,maxy_s1i);

  gPad->SetFillStyle(0);
  gPad->SetBorderSize(0);
  gPad->SetLogx();

  gPad->SetPad(0.25,0.70,0.50,1.00);

  TAxis *xaxis4;
  xaxis4 = frame4->GetXaxis();
  xaxis4->Set(21, 0.009, 0.8);
  xaxis4->SetTitle("-t_{c} (GeV^{2})");
  xaxis4->SetNdivisions(505,kTRUE);
  xaxis4->LabelsOption("h");
  xaxis4->SetLabelSize(0.1);
  xaxis4->SetTitleSize(0.1);
  xaxis4->SetTitleOffset(1.01);
  xaxis4->Draw();
  Double_t  MAX_X_4 = xaxis4->GetXmax();
  TLine *xaxiszero4 = new TLine(0,0,MAX_X_4,0);
  xaxiszero4->SetLineStyle(2);
  xaxiszero4->Draw();

  TAxis *yaxis4;
  yaxis4 = frame4->GetYaxis();
  yaxis4->SetNdivisions(205,kTRUE);

  Double_t corr_s1_ul_tc[7];
  Double_t corr_ds1_ul_tc[7];

  for (i=0;i<7;i++){
    corr_s1_ul_tc[i] = (1/(1-fsidis_tc[i]))*(s1itc[i]-fsidis_tc[i]*s1itc_pi0[i]);
    corr_ds1_ul_tc[i] = ds1itc[i] + sqrt((-fsidis_tc[i]/(1-fsidis_tc[i]))*
                             (-fsidis_tc[i]/(1-fsidis_tc[i]))*(ds1itc_pi0[i]*ds1itc_pi0[i]));
    //printf("overall s1 tc asymmetry uncorr %lf corr %lf diff %lf\n", s1itc[i], corr_s1_ul_tc[i], abs(s1itc[i]-corr_s1_ul_tc[i]));
    //printf("overall mass s1 tc asymmetry uncorr %lf corr %lf diff %lf\n", s1itc[i], checks1itc[i], abs(s1itc[i]-checks1itc[i]));
  
    diffs1itc[i] = abs((abs(diffs1itc[i])*(abs(diffs1itc[i]))) + ((0.5*abs(s1itc[i]-corr_s1_ul_tc[i]))*(0.5*abs(s1itc[i]-corr_s1_ul_tc[i]))) + ((0.25*abs(s1itc[i]-checks1itc[i]))*(0.25*abs(s1itc[i]-checks1itc[i]))));
    diffs1itc[i] = sqrt(diffs1itc[i]);
    printf("s1tc amplitude %lf statistical %lf overall syst %lf\n", s1itc[i],ds1itc[i],  diffs1itc[i]);
  }


  TGraphErrors *gr4 = new TGraphErrors(7,xtc,s1itc,NULL,ds1itc);
  TGraphErrors *gr24 = new TGraphErrors(7,xtc_2,checks1itc,NULL,checkds1itc);

  gr4->SetMarkerStyle(21);
  //gr24->SetMarkerStyle(26);

  gr4->SetMarkerSize(0.85);
  //gr24->SetMarkerSize(0.525);

  gr4->SetMarkerColor(2);
  gr4->SetLineColor(2);
  //gr24->SetMarkerColor(2);

  //gr4->Draw("P");
  //gr24->Draw("PSAME");

  TLine *ltcc01 = new TLine(xtc[1],s1itc_kumericki_without_hallA[1],xtc[2],s1itc_kumericki_without_hallA[2]);
  ltcc01->SetLineColor(4);
  ltcc01->SetLineStyle(1);
  ltcc01->SetLineWidth(1); 
  ltcc01->Draw("l"); 
  TLine *ltcc02 = new TLine(xtc[2],s1itc_kumericki_without_hallA[2],xtc[3],s1itc_kumericki_without_hallA[3]);
  ltcc02->SetLineColor(4);
  ltcc02->SetLineStyle(1);
  ltcc02->SetLineWidth(1); 
  ltcc02->Draw("lsame");
  TLine *ltcc03 = new TLine(xtc[3],s1itc_kumericki_without_hallA[3],xtc[4],s1itc_kumericki_without_hallA[4]);
  ltcc03->SetLineColor(4);
  ltcc03->SetLineStyle(1);
  ltcc03->SetLineWidth(1); 
  ltcc03->Draw("lsame");
  TLine *ltcc04 = new TLine(xtc[4],s1itc_kumericki_without_hallA[4],xtc[5],s1itc_kumericki_without_hallA[5]);
  ltcc04->SetLineColor(4);
  ltcc04->SetLineStyle(1);
  ltcc04->SetLineWidth(1); 
  ltcc04->Draw("lsame");
  TLine *ltcc05 = new TLine(xtc[5],s1itc_kumericki_without_hallA[5],xtc[6],s1itc_kumericki_without_hallA[6]);
  ltcc05->SetLineColor(4);
  ltcc05->SetLineStyle(1);
  ltcc05->SetLineWidth(1); 
  ltcc05->Draw("lsame");

  TLine *lltcc01 = new TLine(xtc[1],s1itc_kumericki_with_hallA[1],xtc[2],s1itc_kumericki_with_hallA[2]);
  lltcc01->SetLineColor(6);
  lltcc01->SetLineStyle(2);
  lltcc01->SetLineWidth(1); 
  lltcc01->Draw("l"); 
  TLine *lltcc02 = new TLine(xtc[2],s1itc_kumericki_with_hallA[2],xtc[3],s1itc_kumericki_with_hallA[3]);
  lltcc02->SetLineColor(6);
  lltcc02->SetLineStyle(2);
  lltcc02->SetLineWidth(1); 
  lltcc02->Draw("lsame");
  TLine *lltcc03 = new TLine(xtc[3],s1itc_kumericki_with_hallA[3],xtc[4],s1itc_kumericki_with_hallA[4]);
  lltcc03->SetLineColor(6);
  lltcc03->SetLineStyle(2);
  lltcc03->SetLineWidth(1); 
  lltcc03->Draw("lsame");
  TLine *lltcc04 = new TLine(xtc[4],s1itc_kumericki_with_hallA[4],xtc[5],s1itc_kumericki_with_hallA[5]);
  lltcc04->SetLineColor(6);
  lltcc04->SetLineStyle(2);
  lltcc04->SetLineWidth(1); 
  lltcc04->Draw("lsame");
  TLine *lltcc05 = new TLine(xtc[5],s1itc_kumericki_with_hallA[5],xtc[6],s1itc_kumericki_with_hallA[6]);
  lltcc05->SetLineColor(6);
  lltcc05->SetLineStyle(2);
  lltcc05->SetLineWidth(1); 
  lltcc05->Draw("lsame");

  float s1i_tc_xstart = 0.011;
  float s1i_tc_ystart = -0.6;

  Double_t s1i_tcx[] = {s1i_tc_xstart, s1i_tc_xstart, 0.03, 0.03, \
			0.06, 0.06, 0.11, 0.11, \
			0.20, 0.20, 0.30, 0.30, \
                        0.7, 0.7};

  Double_t s1i_tcy[] = {s1i_tc_ystart, s1i_tc_ystart + diffs1itc[1], s1i_tc_ystart + diffs1itc[1], s1i_tc_ystart + diffs1itc[2], \
                        s1i_tc_ystart + diffs1itc[2], s1i_tc_ystart + diffs1itc[3], s1i_tc_ystart + diffs1itc[3],  s1i_tc_ystart + diffs1itc[4], \
                        s1i_tc_ystart + diffs1itc[4], s1i_tc_ystart + diffs1itc[5], s1i_tc_ystart + diffs1itc[5],  s1i_tc_ystart + diffs1itc[6], \
                        s1i_tc_ystart + diffs1itc[6], s1i_tc_ystart};

  TPolyLine *s1i_tc_syst = new TPolyLine(14,s1i_tcx,s1i_tcy,"");
  s1i_tc_syst->SetFillStyle(1001);
  s1i_tc_syst->SetFillColor(5);
  s1i_tc_syst->Draw("f");
  TPolyLine *s1i_tc_syst_line1 = new TPolyLine(14,s1i_tcx,s1i_tcy,"");
  s1i_tc_syst_line1->SetFillStyle(0);
  s1i_tc_syst_line1->SetFillColor(1);
  s1i_tc_syst_line1->Draw("fsame");


  TPolyLine *vgg_regge_ts1iband = new TPolyLine(13, vgg_regge_txvalues,vggregge_ts1i); 
  vgg_regge_ts1iband->SetFillStyle(3644);
  vgg_regge_ts1iband->SetFillColor(kBlue);
  vgg_regge_ts1iband->SetLineColor(kBlue);
  vgg_regge_ts1iband->SetLineWidth(5);
  //vgg_regge_ts1iband->Draw("F");

  gr4->Draw("PSAME");

  //TLegend *corr_leg = new TLegend(0.04726192,0.8592139,0.8681801,0.9726104,NULL,"b1NDC");
  //corr_leg->SetBorderSize(0);
  //corr_leg->SetLineColor(0);
  //corr_leg->SetFillStyle(0);
  //corr_leg->SetFillColor(0);
  //corr_leg->AddEntry(gr,"1996-2007","p");
  //corr_leg->AddEntry(gr20,"2006-2007 uncorr","p");
  //corr_leg->AddEntry(l1,"MC gen H","l");
  //corr_leg->AddEntry(l1,"MC gen H","l");                                                                                                                
  ///corr_leg->Draw();

  //TLatex sprocess;
  //sprocess.SetTextSize(0.125);
  //sprocess.SetTextColor(kBlue);
  //sprocess.DrawLatex(0.041,0.1,"2.8%"); 
  //sprocess.SetTextColor(kBlack);
  //sprocess.DrawLatex(0.0129475,0.06441357,"3.4%");
  //sprocess.SetTextColor(kBlack);
  //sprocess.DrawLatex(0.02935668,0.06441357,"Scale Uncertainty");; 

  TLegend *corr_leg = new TLegend(0.07,0.69,0.90,0.99,"","b1NDC");
  corr_leg->SetBorderSize(0);
  corr_leg->SetLineColor(0);
  corr_leg->SetFillStyle(0);
  corr_leg->SetFillColor(0);
  //corr_leg->AddEntry(gr,"2006-07 Preliminary","p");
  //corr_leg->AddEntry(gr20,"2006-2007 uncorr","p");
  corr_leg->AddEntry(l1,"KM09a NPB841 (2010)","l");
  corr_leg->AddEntry(ll1,"KM09b NPB841 (2010)","l");                                                                                                                
  corr_leg->Draw();

  // s1dvcs amplitude


  pad1->cd(5);
  gPad->SetFrameFillStyle(0);
  gPad->SetFillStyle(0);

  gPad->SetPad(0.00,0.475,0.25,0.70);

  Double_t maxy_s1dvcs = 0.3;
  Double_t miny_s1dvcs = -0.45;

  TH1F *frame5 = gPad->DrawFrame(0,miny_s1dvcs,5,maxy_s1dvcs);

  TAxis *xaxis5;
  xaxis5 = frame5->GetXaxis();
  xaxis5->Set(3,0.0,2.0);
  xaxis5->SetTickLength(0);
  xaxis5->SetBinLabel(2,"Integrated Over All Kinematics");
  xaxis5->SetLabelSize(0.01);
  xaxis5->SetLabelOffset(0.015);
  xaxis5->SetTitleSize(0.01);
  xaxis5->LabelsOption("h");
  xaxis5->Draw();
  Double_t  MAX_X5 = xaxis5->GetXmax();
  Double_t  MIN_X5 = xaxis5->GetXmin();
  TLine *xaxiszero5 = new TLine(MIN_X5,0,MAX_X5,0);
  xaxiszero5->SetLineStyle(2);
  xaxiszero5->Draw();

  TAxis *yaxis5;
  yaxis5 = frame5->GetYaxis();
  yaxis5->SetTitle("A_{LU,DVCS}^{sin #phi}");
  yaxis5->SetNdivisions(205,kTRUE);
  yaxis5->SetLabelFont(63);
  yaxis5->SetTitleFont(63);
  yaxis5->SetLabelSize(25);
  yaxis5->SetLabelOffset(0.05);
  yaxis5->SetTitleSize(35);
  yaxis5->SetTitleOffset(4.5);
  yaxis5->CenterTitle();
  yaxis5->Draw();

  TLine *ls1dvcs1 = new TLine(0.8,s1dvcsxbj_kumericki_without_hallA[0],1.2,s1dvcsxbj_kumericki_without_hallA[0]);
  ls1dvcs1->SetLineColor(4);
  ls1dvcs1->SetLineStyle(1);
  ls1dvcs1->SetLineWidth(1); 
  ///ls1dvcs1->Draw("l"); 

  TLine *lls1dvcs1 = new TLine(0.8,s1dvcsxbj_kumericki_with_hallA[0],1.2,s1dvcsxbj_kumericki_with_hallA[0]);
  lls1dvcs1->SetLineColor(6);
  lls1dvcs1->SetLineStyle(2);
  lls1dvcs1->SetLineWidth(1); 
  //lls1dvcs1->Draw("l"); 


  Double_t corr_s1overall_dvcs[4] = { (1/(1-fsidis_q2[0]))*(s1dvcstc[0]-fsidis_q2[0]*s1dvcstc_pi0[0]), -99, -99, -99};
  Double_t overall_dvcs_corr_s1;
  overall_dvcs_corr_s1 = s1dvcstc[0] + sqrt((-fsidis_q2[0]/(1-fsidis_q2[0]))*(-fsidis_q2[0]/(1-fsidis_q2[0]))*(s1dvcstc_pi0[0]*s1dvcstc_pi0[0]));
  Double_t corr_ds1overall_dvcs[4] = { overall_dvcs_corr_s1, -99, -99, -99};


  TGraphErrors *gr5 = new TGraphErrors(1,xoverall,s1dvcstc,NULL,ds1dvcstc);
  TGraphErrors *gr25 = new TGraphErrors(1,corr_xoverall,corr_s1overall_dvcs,NULL,corr_ds1overall_dvcs);

  gr5->SetMarkerStyle(21);
  gr25->SetMarkerStyle(26);

  gr5->SetMarkerSize(MARKERSIZE);
  gr25->SetMarkerSize(MARKERSIZE);

  gr5->SetMarkerColor(2);
  gr5->SetLineColor(2);
  gr25->SetMarkerColor(2);

  gr5->Draw("P");
  //gr25->Draw("PSAME");

  //printf("s1dvcs mc %lf pi %lf mass %lf\n", abs(diffs1dvcstc[0]), abs(s1dvcstc[0]-corr_s1overall_dvcs[0]), 0.25*abs(s1dvcstc[0]-checks1dvcstc[0]));

  diffs1dvcstc[0] = abs((abs(diffs1dvcstc[0])*(abs(diffs1dvcstc[0]))) + ((0.5*abs(s1dvcstc[0]-corr_s1overall_dvcs[0]))*(0.5*abs(s1dvcstc[0]-corr_s1overall_dvcs[0]))) + ((0.25*abs(s1dvcstc[0]-checks1dvcstc[0]))*(0.25*abs(s1dvcstc[0]-checks1dvcstc[0]))));
  diffs1dvcstc[0] = sqrt(diffs1dvcstc[0]);
  ///printf("overall syst %lf\n", diffs1dvcstc[0]);

  printf("s1dvcs overall asymm %lf stat %lf sys %lf\n", s1dvcstc[0], ds1dvcstc[0], diffs1dvcstc[0]);

  float s1dvcs_overall_xstart = 0.5;
  float s1dvcs_overall_xend = 1.5;
  float s1dvcs_overall_ystart = -0.4;
  float s1dvcs_overall_yend = diffs1dvcstc[0];

  Double_t s1dvcs_overall_x[] = {s1dvcs_overall_xstart, s1dvcs_overall_xstart, s1dvcs_overall_xend, s1dvcs_overall_xend, s1dvcs_overall_xstart};
  Double_t s1dvcs_overall_y[] = {s1dvcs_overall_ystart, s1dvcs_overall_ystart + s1dvcs_overall_yend, s1dvcs_overall_ystart + s1dvcs_overall_yend, \
                              s1dvcs_overall_ystart};

  TPolyLine *s1dvcs_overall_syst = new TPolyLine(4, s1dvcs_overall_x, s1dvcs_overall_y, "");
  s1dvcs_overall_syst->SetFillStyle(1001);
  s1dvcs_overall_syst->SetFillColor(5);
  s1dvcs_overall_syst->Draw("f");
  TPolyLine *s1dvcs_overall_syst_line1 = new TPolyLine(4, s1dvcs_overall_x, s1dvcs_overall_y, "");
  s1dvcs_overall_syst_line1->SetFillStyle(0);
  s1dvcs_overall_syst_line1->SetFillColor(1);
  s1dvcs_overall_syst_line1->Draw("fsame");


  TPolyLine *vgg_regge_overalls1dvcsband = new TPolyLine(5, vgg_regge_overallxvalues,vggregge_overalls1dvcs); 
  vgg_regge_overalls1dvcsband->SetFillStyle(3644);
  vgg_regge_overalls1dvcsband->SetFillColor(kBlue);
  vgg_regge_overalls1dvcsband->SetLineColor(kBlue);
  vgg_regge_overalls1dvcsband->SetLineWidth(5);
  //vgg_regge_overalls1dvcsband->Draw("F");

  gr5->Draw("PSAME");

  // 2nd canvas - vs Q2 all data

  pad1->cd(8);

  TH1F *frame6 = gPad->DrawFrame(0,miny_s1dvcs,11,maxy_s1dvcs);

  gPad->SetFillStyle(0);
  gPad->SetBorderSize(0);
  gPad->SetBorderMode(0);
  gPad->SetLeftMargin(0);
  gPad->SetLogx();

  gPad->SetPad(0.75,0.475,1.00,0.70);

  TAxis *xaxis6;
  xaxis6 = frame6->GetXaxis();
  xaxis6->Set(10,0.95,11.5);
  //xaxis6->SetTickLength(0);
  xaxis6->SetTitle("Q^{2} (GeV^{2})");
  xaxis6->SetNdivisions(505,kTRUE);
  xaxis6->LabelsOption("h");
  xaxis6->SetLabelSize(0.1);
  xaxis6->SetTitleSize(0.1);
  xaxis6->SetTitleOffset(1.01);
  xaxis6->Draw();
  Double_t  MAX_X_6 = xaxis6->GetXmax();
  Double_t  MIN_X_6 = xaxis6->GetXmin();
  TLine *xaxiszero6 = new TLine(MIN_X_6,0,MAX_X_6,0);
  xaxiszero6->SetLineStyle(2);
  xaxiszero6->Draw();

  TAxis *yaxis6;
  yaxis6 = frame6->GetYaxis();
  yaxis6->SetNdivisions(205,kTRUE);

  Double_t corr_dvcs_s1_ul_q2[7];
  Double_t corr_dvcs_ds1_ul_q2[7];

  for (i=0;i<7;i++){
    corr_dvcs_s1_ul_q2[i] = (1/(1-fsidis_q2[i]))*(s1dvcsq2[i]-fsidis_q2[i]*s1dvcsq2_pi0[i]);
    corr_dvcs_ds1_ul_q2[i] = ds1dvcsq2[i] + sqrt((-fsidis_q2[i]/(1-fsidis_q2[i]))*
                             (-fsidis_q2[i]/(1-fsidis_q2[i]))*(ds1dvcsq2_pi0[i]*ds1dvcsq2_pi0[i]));

    //printf("overall sidis s1 q2 asymmetry uncorr %lf corr %lf diff %lf\n", s1dvcsq2[i], corr_dvcs_s1_ul_q2[i], abs(s1dvcsq2[i]-corr_dvcs_s1_ul_q2[i]));
    //printf("overall mass s1 q2 asymmetry uncorr %lf corr %lf diff %lf\n", s1dvcsq2[i], checks1dvcsq2[i], abs(s1dvcsq2[i]-checks1dvcsq2[i]));

   
    diffs1dvcsq2[i] = abs((abs(diffs1dvcsq2[i])*(abs(diffs1dvcsq2[i]))) + (0.5*abs(s1dvcsq2[i]-corr_dvcs_s1_ul_q2[i])*0.5*abs(s1dvcsq2[i]-corr_dvcs_s1_ul_q2[i])) + (0.25*abs(s1dvcsq2[i]-checks1dvcsq2[i])*0.25*abs(s1dvcsq2[i]-checks1dvcsq2[i])));
    diffs1dvcsq2[i] = sqrt(diffs1dvcsq2[i]);
    //printf("overall syst %lf\n", diffs1dvcsq2[i]);
    printf("s1dvcs q2 asymm %lf stat %lf sys %lf\n", s1dvcsq2[i], ds1dvcsq2[i], diffs1dvcsq2[i]);
  }

  TGraphErrors *gr6 = new TGraphErrors(7,xq2,s1dvcsq2,NULL,ds1dvcsq2);
  TGraphErrors *gr26 = new TGraphErrors(7,xq2_2,corr_dvcs_s1_ul_q2,NULL,corr_dvcs_ds1_ul_q2);

  gr6->SetMarkerStyle(21);
  gr26->SetMarkerStyle(26);

  gr6->SetMarkerSize(0.85);
  gr26->SetMarkerSize(0.85);

  gr6->SetMarkerColor(2);
  gr6->SetLineColor(2);
  gr26->SetMarkerColor(2);

  gr6->Draw("P");
  //gr26->Draw("PSAME");
  /*
  TLine *lqs11 = new TLine(xq2[1],s1dvcsq2_kumericki_without_hallA[1],xq2[2],s1dvcsq2_kumericki_without_hallA[2]);
  lqs11->SetLineColor(4);
  lqs11->SetLineStyle(1);
  lqs11->SetLineWidth(1); 
  lqs11->Draw("l"); 
  TLine *lqs12 = new TLine(xq2[2],s1dvcsq2_kumericki_without_hallA[2],xq2[3],s1dvcsq2_kumericki_without_hallA[3]);
  lqs12->SetLineColor(4);
  lqs12->SetLineStyle(1);
  lqs12->SetLineWidth(1); 
  lqs12->Draw("lsame");
  TLine *lqs13 = new TLine(xq2[3],s1dvcsq2_kumericki_without_hallA[3],xq2[4],s1dvcsq2_kumericki_without_hallA[4]);
  lqs13->SetLineColor(4);
  lqs13->SetLineStyle(1);
  lqs13->SetLineWidth(1); 
  lqs13->Draw("lsame");
  TLine *lqs14 = new TLine(xq2[4],s1dvcsq2_kumericki_without_hallA[4],xq2[5],s1dvcsq2_kumericki_without_hallA[5]);
  lqs14->SetLineColor(4);
  lqs14->SetLineStyle(1);
  lqs14->SetLineWidth(1); 
  lqs14->Draw("lsame");
  TLine *lqs15 = new TLine(xq2[5],s1dvcsq2_kumericki_without_hallA[5],xq2[6],s1dvcsq2_kumericki_without_hallA[6]);
  lqs15->SetLineColor(4);
  lqs15->SetLineStyle(1);
  lqs15->SetLineWidth(1); 
  lqs15->Draw("lsame");

  TLine *llqs11 = new TLine(xq2[1],s1dvcsq2_kumericki_with_hallA[1],xq2[2],s1dvcsq2_kumericki_with_hallA[2]);
  llqs11->SetLineColor(6);
  llqs11->SetLineStyle(2);
  llqs11->SetLineWidth(1); 
  llqs11->Draw("l"); 
  TLine *llqs12 = new TLine(xq2[2],s1dvcsq2_kumericki_with_hallA[2],xq2[3],s1dvcsq2_kumericki_with_hallA[3]);
  llqs12->SetLineColor(6);
  llqs12->SetLineStyle(2);
  llqs12->SetLineWidth(1); 
  llqs12->Draw("lsame");
  TLine *llqs13 = new TLine(xq2[3],s1dvcsq2_kumericki_with_hallA[3],xq2[4],s1dvcsq2_kumericki_with_hallA[4]);
  llqs13->SetLineColor(6);
  llqs13->SetLineStyle(2);
  llqs13->SetLineWidth(1); 
  llqs13->Draw("lsame");
  TLine *llqs14 = new TLine(xq2[4],s1dvcsq2_kumericki_with_hallA[4],xq2[5],s1dvcsq2_kumericki_with_hallA[5]);
  llqs14->SetLineColor(6);
  llqs14->SetLineStyle(2);
  llqs14->SetLineWidth(1); 
  llqs14->Draw("lsame");
  TLine *llqs15 = new TLine(xq2[5],s1dvcsq2_kumericki_with_hallA[5],xq2[6],s1dvcsq2_kumericki_with_hallA[6]);
  llqs15->SetLineColor(6);
  llqs15->SetLineStyle(2);
  llqs15->SetLineWidth(1); 
  llqs15->Draw("lsame");
  */

  float s1dvcs_q2_xstart = 1.0;
  float s1dvcs_q2_ystart = -0.4;

  Double_t s1dvcs_q2x[] = {s1dvcs_q2_xstart, s1dvcs_q2_xstart, s1dvcs_q2_xstart + 1.4 - 1.0, s1dvcs_q2_xstart + 1.4 - 1.0, \
                        s1dvcs_q2_xstart + 1.85 - 1.0, s1dvcs_q2_xstart + 1.85 - 1.0, s1dvcs_q2_xstart + 2.45 - 1.0, s1dvcs_q2_xstart + 2.45 - 1.0, \
                        s1dvcs_q2_xstart + 3.3 - 1.0, s1dvcs_q2_xstart + 3.3 - 1.0, s1dvcs_q2_xstart + 4.8 - 1.0, s1dvcs_q2_xstart + 4.8 - 1.0,  \
                        s1dvcs_q2_xstart + 10.0 - 1.0, s1dvcs_q2_xstart + 10.0 - 1.0};

  Double_t s1dvcs_q2y[] = {s1dvcs_q2_ystart, s1dvcs_q2_ystart + diffs1dvcsq2[1], s1dvcs_q2_ystart + diffs1dvcsq2[1], s1dvcs_q2_ystart + diffs1dvcsq2[2], \
                        s1dvcs_q2_ystart + diffs1dvcsq2[2], s1dvcs_q2_ystart + diffs1dvcsq2[3], s1dvcs_q2_ystart + diffs1dvcsq2[3], s1dvcs_q2_ystart + diffs1dvcsq2[4], \
                        s1dvcs_q2_ystart + diffs1dvcsq2[4], s1dvcs_q2_ystart + diffs1dvcsq2[5], s1dvcs_q2_ystart + diffs1dvcsq2[5], s1dvcs_q2_ystart + diffs1dvcsq2[6], \
			s1dvcs_q2_ystart + diffs1dvcsq2[6], s1dvcs_q2_ystart};

  TPolyLine *s1dvcs_q2_syst = new TPolyLine(14,s1dvcs_q2x,s1dvcs_q2y,"");
  s1dvcs_q2_syst->SetFillStyle(1001);
  s1dvcs_q2_syst->SetFillColor(5);
  s1dvcs_q2_syst->Draw("f");
  TPolyLine *s1dvcs_q2_syst_line1 = new TPolyLine(14,s1dvcs_q2x,s1dvcs_q2y,"");
  s1dvcs_q2_syst_line1->SetFillStyle(0);
  s1dvcs_q2_syst_line1->SetFillColor(1);
  s1dvcs_q2_syst_line1->Draw("fsame");


  TPolyLine *vgg_regge_q2s1dvcsband = new TPolyLine(13, vgg_regge_q2xvalues,vggregge_q2s1dvcs); 
  vgg_regge_q2s1dvcsband->SetFillStyle(3644);
  vgg_regge_q2s1dvcsband->SetFillColor(kBlue);
  vgg_regge_q2s1dvcsband->SetLineColor(kBlue);
  vgg_regge_q2s1dvcsband->SetLineWidth(5);
  //vgg_regge_q2s1dvcsband->Draw("F");

  gr6->Draw("PSAME");

  // 3rd canvas - vs xbj all data

  pad1->cd(7);

  gPad->SetFillStyle(0);
  gPad->SetBorderSize(0);
  gPad->SetLogx();

  gPad->SetPad(0.50,0.475,0.75,0.70);

  TH1F *frame7 = gPad->DrawFrame(-0.1,miny_s1dvcs,0.5,maxy_s1dvcs);
  TAxis *xaxis7;
  xaxis7 = frame7->GetXaxis();
  xaxis7->Set(20, 0.04, 0.33);
  //xaxis7->SetTickLength(0);
  xaxis7->SetTitle("x_{Bj}");
  xaxis7->SetNdivisions(505,kTRUE);
  xaxis7->SetLabelSize(0.1);
  xaxis7->SetTitleSize(0.1);
  xaxis7->SetTitleOffset(1.01);
  xaxis7->Draw();
  Double_t  MAX_X_7 = xaxis7->GetXmax();
  TLine *xaxiszero7 = new TLine(-0.1,0,MAX_X_7,0);
  xaxiszero7->SetLineStyle(2);
  xaxiszero7->Draw();

  TAxis *yaxis7;
  yaxis7 = frame7->GetYaxis();
  yaxis7->SetNdivisions(205,kTRUE);


  Double_t corr_dvcs_s1_ul_xbj[7];
  Double_t corr_dvcs_ds1_ul_xbj[7];

  for (i=0;i<7;i++){
    corr_dvcs_s1_ul_xbj[i] = (1/(1-fsidis_xbj[i]))*(s1dvcsxbj[i]-fsidis_xbj[i]*s1dvcsxbj_pi0[i]);
    corr_dvcs_ds1_ul_xbj[i] = ds1dvcsxbj[i] + sqrt((-fsidis_xbj[i]/(1-fsidis_xbj[i]))*
                             (-fsidis_xbj[i]/(1-fsidis_xbj[i]))*(ds1dvcsxbj_pi0[i]*ds1dvcsxbj_pi0[i]));
    //printf("overall s1 xbj asymmetry uncorr %lf corr %lf diff %lf\n", s1dvcsxbj[i], corr_dvcs_s1_ul_xbj[i], abs(s1dvcsxbj[i]-corr_dvcs_s1_ul_xbj[i]));
    //printf("overall mass s1 xbj asymmetry uncorr %lf corr %lf diff %lf\n", s1dvcsxbj[i], checks1dvcsxbj[i], abs(s1dvcsxbj[i]-checks1dvcsxbj[i]));
 
       diffs1dvcsxbj[i] = abs((abs(diffs1dvcsxbj[i])*(abs(diffs1dvcsxbj[i]))) + (0.5*abs(s1dvcsxbj[i]-corr_dvcs_s1_ul_xbj[i])*0.5*abs(s1dvcsxbj[i]-corr_dvcs_s1_ul_xbj[i])) + (0.25*abs(s1dvcsxbj[i]-checks1dvcsxbj[i])*0.25*abs(s1dvcsxbj[i]-checks1dvcsxbj[i])));
       diffs1dvcsxbj[i] = sqrt(diffs1dvcsxbj[i]);
       //printf("overall syst %lf\n", diffs1dvcsxbj[i]);
       printf("s1dvcs xbj asymm %lf stat %lf sys %lf\n", s1dvcsxbj[i], ds1dvcsxbj[i], diffs1dvcsxbj[i]);
  }

  TGraphErrors *gr7 = new TGraphErrors(7,xxbj,s1dvcsxbj,NULL,ds1dvcsxbj);
  TGraphErrors *gr27 = new TGraphErrors(7,xxbj_2,corr_dvcs_s1_ul_xbj,NULL,corr_dvcs_ds1_ul_xbj);

  gr7->SetMarkerStyle(21);
  gr27->SetMarkerStyle(26);

  gr7->SetMarkerSize(0.85);
  gr27->SetMarkerSize(0.85);

  gr7->SetMarkerColor(2);
  gr7->SetLineColor(2);
  gr27->SetMarkerColor(2);

  gr7->Draw("P");
  //gr27->Draw("PSAME");
  /*
  TLine *lxs11 = new TLine(xxbj[1],s1dvcsxbj_kumericki_without_hallA[1],xxbj[2],s1dvcsxbj_kumericki_without_hallA[2]);
  lxs11->SetLineColor(4);
  lxs11->SetLineStyle(1);
  lxs11->SetLineWidth(1); 
  lxs11->Draw("l"); 
  TLine *lxs12 = new TLine(xxbj[2],s1dvcsxbj_kumericki_without_hallA[2],xxbj[3],s1dvcsxbj_kumericki_without_hallA[3]);
  lxs12->SetLineColor(4);
  lxs12->SetLineStyle(1);
  lxs12->SetLineWidth(1); 
  lxs12->Draw("lsame");
  TLine *lxs13 = new TLine(xxbj[3],s1dvcsxbj_kumericki_without_hallA[3],xxbj[4],s1dvcsxbj_kumericki_without_hallA[4]);
  lxs13->SetLineColor(4);
  lxs13->SetLineStyle(1);
  lxs13->SetLineWidth(1); 
  lxs13->Draw("lsame");
  TLine *lxs14 = new TLine(xxbj[4],s1dvcsxbj_kumericki_without_hallA[4],xxbj[5],s1dvcsxbj_kumericki_without_hallA[5]);
  lxs14->SetLineColor(4);
  lxs14->SetLineStyle(1);
  lxs14->SetLineWidth(1); 
  lxs14->Draw("lsame");
  TLine *lxs15 = new TLine(xxbj[5],s1dvcsxbj_kumericki_without_hallA[5],xxbj[6],s1dvcsxbj_kumericki_without_hallA[6]);
  lxs15->SetLineColor(4);
  lxs15->SetLineStyle(1);
  lxs15->SetLineWidth(1); 
  lxs15->Draw("lsame");

  TLine *llxs11 = new TLine(xxbj[1],s1dvcsxbj_kumericki_with_hallA[1],xxbj[2],s1dvcsxbj_kumericki_with_hallA[2]);
  llxs11->SetLineColor(6);
  llxs11->SetLineStyle(2);
  llxs11->SetLineWidth(1); 
  llxs11->Draw("l"); 
  TLine *llxs12 = new TLine(xxbj[2],s1dvcsxbj_kumericki_with_hallA[2],xxbj[3],s1dvcsxbj_kumericki_with_hallA[3]);
  llxs12->SetLineColor(6);
  llxs12->SetLineStyle(2);
  llxs12->SetLineWidth(1); 
  llxs12->Draw("lsame");
  TLine *llxs13 = new TLine(xxbj[3],s1dvcsxbj_kumericki_with_hallA[3],xxbj[4],s1dvcsxbj_kumericki_with_hallA[4]);
  llxs13->SetLineColor(6);
  llxs13->SetLineStyle(2);
  llxs13->SetLineWidth(1); 
  llxs13->Draw("lsame");
  TLine *llxs14 = new TLine(xxbj[4],s1dvcsxbj_kumericki_with_hallA[4],xxbj[5],s1dvcsxbj_kumericki_with_hallA[5]);
  llxs14->SetLineColor(6);
  llxs14->SetLineStyle(2);
  llxs14->SetLineWidth(1); 
  llxs14->Draw("lsame");
  TLine *llxs15 = new TLine(xxbj[5],s1dvcsxbj_kumericki_with_hallA[5],xxbj[6],s1dvcsxbj_kumericki_with_hallA[6]);
  llxs15->SetLineColor(6);
  llxs15->SetLineStyle(2);
  llxs15->SetLineWidth(1); 
  llxs15->Draw("lsame");
  */
  float s1dvcs_xbj_xstart = 0.045;
  float s1dvcs_xbj_ystart = -0.4;

  Double_t s1dvcs_xbjx[] = {s1dvcs_xbj_xstart, s1dvcs_xbj_xstart, 0.06, 0.06, \
                         0.08, 0.08, 0.10, 0.10, \
			 0.13, 0.13, 0.2, 0.2,\
			 0.3, 0.3 };

  Double_t s1dvcs_xbjy[] = {s1dvcs_xbj_ystart, s1dvcs_xbj_ystart + diffs1dvcsxbj[1], s1dvcs_xbj_ystart + diffs1dvcsxbj[1], s1dvcs_xbj_ystart + diffs1dvcsxbj[2], \
			 s1dvcs_xbj_ystart + diffs1dvcsxbj[2], s1dvcs_xbj_ystart + diffs1dvcsxbj[3], s1dvcs_xbj_ystart + diffs1dvcsxbj[3],  s1dvcs_xbj_ystart + diffs1dvcsxbj[4], \
			 s1dvcs_xbj_ystart + diffs1dvcsxbj[4], s1dvcs_xbj_ystart + diffs1dvcsxbj[5], s1dvcs_xbj_ystart + diffs1dvcsxbj[5], \
			 s1dvcs_xbj_ystart + diffs1dvcsxbj[6], s1dvcs_xbj_ystart + diffs1dvcsxbj[6], s1dvcs_xbj_ystart, };

  TPolyLine *s1dvcs_xbj_syst = new TPolyLine(14,s1dvcs_xbjx,s1dvcs_xbjy,"");
  s1dvcs_xbj_syst->SetFillStyle(1001);
  s1dvcs_xbj_syst->SetFillColor(5);
  s1dvcs_xbj_syst->Draw("f");
  TPolyLine *s1dvcs_xbj_syst_line1 = new TPolyLine(14,s1dvcs_xbjx,s1dvcs_xbjy,"");
  s1dvcs_xbj_syst_line1->SetFillStyle(0);
  s1dvcs_xbj_syst_line1->SetFillColor(1);
  s1dvcs_xbj_syst_line1->Draw("fsame");

  TPolyLine *vgg_regge_xbs1dvcsband = new TPolyLine(13, vgg_regge_xbxvalues,vggregge_xbs1dvcs); 
  vgg_regge_xbs1dvcsband->SetFillStyle(3644);
  vgg_regge_xbs1dvcsband->SetFillColor(kBlue);
  vgg_regge_xbs1dvcsband->SetLineColor(kBlue);
  vgg_regge_xbs1dvcsband->SetLineWidth(5);
  //vgg_regge_xbs1dvcsband->Draw("F");

  gr7->Draw("PSAME");

  // 4th canvas - vs tc all data

  pad1->cd(6);

  TH1F *frame8 = gPad->DrawFrame(-0.05,miny_s1dvcs,0.8,maxy_s1dvcs);

  gPad->SetFillStyle(0);
  gPad->SetBorderSize(0);
  gPad->SetLogx();

  gPad->SetPad(0.25,0.475,0.50,0.70);

  TAxis *xaxis8;
  xaxis8 = frame8->GetXaxis();
  xaxis8->Set(21, 0.009, 0.8);
  xaxis8->SetTitle("-t_{c} (GeV^{2})");
  xaxis8->SetNdivisions(505,kTRUE);
  xaxis8->LabelsOption("h");
  xaxis8->SetLabelSize(0.1);
  xaxis8->SetTitleSize(0.1);
  xaxis8->SetTitleOffset(1.01);
  xaxis8->Draw();
  Double_t  MAX_X_8 = xaxis8->GetXmax();
  TLine *xaxiszero8 = new TLine(0,0,MAX_X_8,0);
  xaxiszero8->SetLineStyle(2);
  xaxiszero8->Draw();

  TAxis *yaxis8;
  yaxis8 = frame8->GetYaxis();
  yaxis8->SetNdivisions(205,kTRUE);

  Double_t corr_dvcs_s1_ul_tc[7];
  Double_t corr_dvcs_ds1_ul_tc[7];

  for (i=0;i<7;i++){
    corr_dvcs_s1_ul_tc[i] = (1/(1-fsidis_tc[i]))*(s1dvcstc[i]-fsidis_tc[i]*s1dvcstc_pi0[i]);
    corr_dvcs_ds1_ul_tc[i] = ds1dvcstc[i] + sqrt((-fsidis_tc[i]/(1-fsidis_tc[i]))*
                             (-fsidis_tc[i]/(1-fsidis_tc[i]))*(ds1dvcstc_pi0[i]*ds1dvcstc_pi0[i]));
    //printf("overall s1 tc asymmetry uncorr %lf corr %lf diff %lf\n", s1dvcstc[i], corr_dvcs_s1_ul_tc[i], abs(s1dvcstc[i]-corr_dvcs_s1_ul_tc[i]));
    //printf("overall mass s1 tc asymmetry uncorr %lf corr %lf diff %lf\n", s1dvcstc[i], checks1dvcstc[i], abs(s1dvcstc[i]-checks1dvcstc[i]));

    diffs1dvcstc[i] = abs((abs(diffs1dvcstc[i])*(abs(diffs1dvcstc[i]))) + ((0.5*abs(s1dvcstc[i]-corr_dvcs_s1_ul_tc[i])*0.5*abs(s1dvcstc[i]-corr_dvcs_s1_ul_tc[i]))) + ((0.25*abs(s1dvcstc[i]-checks1dvcstc[i]))*(0.25*abs(s1dvcstc[i]-checks1dvcstc[i]))));
    diffs1dvcstc[i] = sqrt(diffs1dvcstc[i]);
    //printf("overall syst %lf\n", diffs1dvcstc[i]);
    printf("s1dvcs tc asymm %lf stat %lf sys %lf\n", s1dvcstc[i], ds1dvcstc[i], diffs1dvcstc[i]);
  }


  TGraphErrors *gr8 = new TGraphErrors(7,xtc,s1dvcstc,NULL,ds1dvcstc);
  TGraphErrors *gr28 = new TGraphErrors(7,xtc_2,corr_dvcs_s1_ul_tc,NULL,corr_dvcs_ds1_ul_tc);

  gr8->SetMarkerStyle(21);
  gr28->SetMarkerStyle(26);

  gr8->SetMarkerSize(0.85);
  gr28->SetMarkerSize(0.85);

  gr8->SetMarkerColor(2);
  gr8->SetLineColor(2);
  gr28->SetMarkerColor(2);

  gr8->Draw("P");
  //gr28->Draw("PSAME");

  /*
  TLine *lts11 = new TLine(xtc[1],s1dvcstc_kumericki_without_hallA[1],xtc[2],s1dvcstc_kumericki_without_hallA[2]);
  lts11->SetLineColor(4);
  lts11->SetLineStyle(1);
  lts11->SetLineWidth(1); 
  lts11->Draw("l"); 
  TLine *lts12 = new TLine(xtc[2],s1dvcstc_kumericki_without_hallA[2],xtc[3],s1dvcstc_kumericki_without_hallA[3]);
  lts12->SetLineColor(4);
  lts12->SetLineStyle(1);
  lts12->SetLineWidth(1); 
  lts12->Draw("lsame");
  TLine *lts13 = new TLine(xtc[3],s1dvcstc_kumericki_without_hallA[3],xtc[4],s1dvcstc_kumericki_without_hallA[4]);
  lts13->SetLineColor(4);
  lts13->SetLineStyle(1);
  lts13->SetLineWidth(1); 
  lts13->Draw("lsame");
  TLine *lts14 = new TLine(xtc[4],s1dvcstc_kumericki_without_hallA[4],xtc[5],s1dvcstc_kumericki_without_hallA[5]);
  lts14->SetLineColor(4);
  lts14->SetLineStyle(1);
  lts14->SetLineWidth(1); 
  lts14->Draw("lsame");
  TLine *lts15 = new TLine(xtc[5],s1dvcstc_kumericki_without_hallA[5],xtc[6],s1dvcstc_kumericki_without_hallA[6]);
  lts15->SetLineColor(4);
  lts15->SetLineStyle(1);
  lts15->SetLineWidth(1); 
  lts15->Draw("lsame");

  TLine *llts11 = new TLine(xtc[1],s1dvcstc_kumericki_with_hallA[1],xtc[2],s1dvcstc_kumericki_with_hallA[2]);
  llts11->SetLineColor(6);
  llts11->SetLineStyle(2);
  llts11->SetLineWidth(1); 
  llts11->Draw("l"); 
  TLine *llts12 = new TLine(xtc[2],s1dvcstc_kumericki_with_hallA[2],xtc[3],s1dvcstc_kumericki_with_hallA[3]);
  llts12->SetLineColor(6);
  llts12->SetLineStyle(2);
  llts12->SetLineWidth(1); 
  llts12->Draw("lsame");
  TLine *llts13 = new TLine(xtc[3],s1dvcstc_kumericki_with_hallA[3],xtc[4],s1dvcstc_kumericki_with_hallA[4]);
  llts13->SetLineColor(6);
  llts13->SetLineStyle(2);
  llts13->SetLineWidth(1); 
  llts13->Draw("lsame");
  TLine *llts14 = new TLine(xtc[4],s1dvcstc_kumericki_with_hallA[4],xtc[5],s1dvcstc_kumericki_with_hallA[5]);
  llts14->SetLineColor(6);
  llts14->SetLineStyle(2);
  llts14->SetLineWidth(1); 
  llts14->Draw("lsame");
  TLine *llts15 = new TLine(xtc[5],s1dvcstc_kumericki_with_hallA[5],xtc[6],s1dvcstc_kumericki_with_hallA[6]);
  llts15->SetLineColor(6);
  llts15->SetLineStyle(2);
  llts15->SetLineWidth(1); 
  llts15->Draw("lsame");
  */

  float s1dvcs_tc_xstart = 0.011;
  float s1dvcs_tc_ystart = -0.4;

  Double_t s1dvcs_tcx[] = {s1dvcs_tc_xstart, s1dvcs_tc_xstart, 0.03, 0.03, \
			0.06, 0.06, 0.11, 0.11, \
			0.20, 0.20, 0.30, 0.30, \
                        0.7, 0.7};

  Double_t s1dvcs_tcy[] = {s1dvcs_tc_ystart, s1dvcs_tc_ystart + diffs1dvcstc[1], s1dvcs_tc_ystart + diffs1dvcstc[1], s1dvcs_tc_ystart + diffs1dvcstc[2], \
                        s1dvcs_tc_ystart + diffs1dvcstc[2], s1dvcs_tc_ystart + diffs1dvcstc[3], s1dvcs_tc_ystart + diffs1dvcstc[3],  s1dvcs_tc_ystart + diffs1dvcstc[4], \
                        s1dvcs_tc_ystart + diffs1dvcstc[4], s1dvcs_tc_ystart + diffs1dvcstc[5], s1dvcs_tc_ystart + diffs1dvcstc[5],  s1dvcs_tc_ystart + diffs1dvcstc[6], \
                        s1dvcs_tc_ystart + diffs1dvcstc[6], s1dvcs_tc_ystart};

  TPolyLine *s1dvcs_tc_syst = new TPolyLine(14,s1dvcs_tcx,s1dvcs_tcy,"");
  s1dvcs_tc_syst->SetFillStyle(1001);
  s1dvcs_tc_syst->SetFillColor(5);
  s1dvcs_tc_syst->Draw("f");
  TPolyLine *s1dvcs_tc_syst_line1 = new TPolyLine(14,s1dvcs_tcx,s1dvcs_tcy,"");
  s1dvcs_tc_syst_line1->SetFillStyle(0);
  s1dvcs_tc_syst_line1->SetFillColor(1);
  s1dvcs_tc_syst_line1->Draw("fsame");


  TPolyLine *vgg_regge_ts1dvcsband = new TPolyLine(13, vgg_regge_txvalues,vggregge_ts1dvcs); 
  vgg_regge_ts1dvcsband->SetFillStyle(3644);
  vgg_regge_ts1dvcsband->SetFillColor(kBlue);
  vgg_regge_ts1dvcsband->SetLineColor(kBlue);
  vgg_regge_ts1dvcsband->SetLineWidth(5);
  //vgg_regge_ts1dvcsband->Draw("F");

  gr8->Draw("PSAME");


  // s2i amplitude

  pad1->cd(9);
  gPad->SetFrameFillStyle(0);
  gPad->SetFillStyle(0);

  gPad->SetPad(0.00,0.25,0.25,0.475);

  Double_t maxy_s2i = 0.25;
  Double_t miny_s2i = -0.45;

  TH1F *frame9 = gPad->DrawFrame(0,miny_s2i,5,maxy_s2i);

  TAxis *xaxis9;
  xaxis9 = frame9->GetXaxis();
  xaxis9->Set(3,0.0,2.0);
  xaxis9->SetTickLength(0);
  xaxis9->SetBinLabel(2,"Overall");
  xaxis9->SetLabelSize(0.01);
  xaxis9->SetLabelOffset(0.015);
  xaxis9->SetTitleSize(0.01);
  xaxis9->LabelsOption("h");
  xaxis9->Draw();
  Double_t  MAX_X9 = xaxis9->GetXmax();
  Double_t  MIN_X9 = xaxis9->GetXmin();
  TLine *xaxiszero9 = new TLine(MIN_X9,0,MAX_X9,0);
  xaxiszero9->SetLineStyle(2);
  xaxiszero9->Draw();

  TAxis *yaxis9;
  yaxis9 = frame9->GetYaxis();
  yaxis9->SetTitle("A_{LU,I}^{sin (2#phi)}");
  yaxis9->SetNdivisions(205,kTRUE);
  yaxis9->SetLabelFont(63);
  yaxis9->SetTitleFont(63);
  yaxis9->SetLabelSize(25);
  yaxis9->SetLabelOffset(0.05);
  yaxis9->SetTitleSize(35);
  yaxis9->SetTitleOffset(4.5);
  yaxis9->CenterTitle();
  yaxis9->Draw();

  Double_t corr_s2overall[4] = { (1/(1-fsidis_q2[0]))*(s2itc[0]-fsidis_q2[0]*s2itc_pi0[0]), -99, -99, -99};
  Double_t overall_corr_s2;
  overall_corr_s2 = s2itc[0] + sqrt((-fsidis_q2[0]/(1-fsidis_q2[0]))*(-fsidis_q2[0]/(1-fsidis_q2[0]))*(s2itc_pi0[0]*s2itc_pi0[0]));
  Double_t corr_ds2overall[4] = { overall_corr_s2, -99, -99, -99};


  TGraphErrors *gr9 = new TGraphErrors(1,xoverall,s2itc,NULL,ds2itc);
  TGraphErrors *gr29 = new TGraphErrors(1,xoverall_2,checks2itc,NULL,checkds2itc);

  gr9->SetMarkerStyle(21);
  //gr29->SetMarkerStyle(26);

  gr9->SetMarkerSize(MARKERSIZE);
  //gr29->SetMarkerSize(MARKERSIZE);

  gr9->SetMarkerColor(2);
  gr9->SetLineColor(2);
  //gr29->SetMarkerColor(2);

  gr9->Draw("P");
  //gr29->Draw("PSAME");

  TLine *ls2i1 = new TLine(0.8,s2ixbj_qplot[0],1.2,s2ixbj_qplot[0]);
  ls2i1->SetLineColor(2);
  ls2i1->SetLineStyle(1);
  ls2i1->SetLineWidth(1); 
  //ls2i1->Draw("l"); 

  //printf("s2 mc %lf pi %lf mass %lf\n",  abs(diffs2itc[0]), abs(s2itc[0]-corr_s2overall[0]), 0.25*abs(s2itc[0]-checks2itc[0]));

 
  diffs2itc[0] = abs((abs(diffs2itc[0])*(abs(diffs2itc[0]))) + ((0.5*abs(s2itc[0]-corr_s2overall[0]))*(0.5*abs(s2itc[0]-corr_s2overall[0]))) + ((0.25*abs(s2itc[0]-checks2itc[0]))*(0.25*abs(s2itc[0]-checks2itc[0]))));
  diffs2itc[0] = sqrt(diffs2itc[0]);
  //printf("overall syst %lf\n", diffs2itc[0]);

  printf("s2i tc asymm %lf stat %lf sys %lf\n", s2itc[0], ds2itc[0], diffs2itc[0]);

  float s2i_overall_xstart = 0.5;
  float s2i_overall_xend = 1.5;
  float s2i_overall_ystart = -0.40;
  float s2i_overall_yend = diffs2itc[0];

  Double_t s2i_overall_x[] = {s2i_overall_xstart, s2i_overall_xstart, s2i_overall_xend, s2i_overall_xend, s2i_overall_xstart};
  Double_t s2i_overall_y[] = {s2i_overall_ystart, s2i_overall_ystart + s2i_overall_yend, s2i_overall_ystart + s2i_overall_yend, \
                              s2i_overall_ystart};

  TPolyLine *s2i_overall_syst = new TPolyLine(4, s2i_overall_x, s2i_overall_y, "");
  s2i_overall_syst->SetFillStyle(1001);
  s2i_overall_syst->SetFillColor(5);
  s2i_overall_syst->Draw("f");
  TPolyLine *s2i_overall_syst_line1 = new TPolyLine(4, s2i_overall_x, s2i_overall_y, "");
  s2i_overall_syst_line1->SetFillStyle(0);
  s2i_overall_syst_line1->SetFillColor(1);
  s2i_overall_syst_line1->Draw("fsame");


  TPolyLine *vgg_regge_overalls2iband = new TPolyLine(5, vgg_regge_overallxvalues,vggregge_overalls2i); 
  vgg_regge_overalls2iband->SetFillStyle(3644);
  vgg_regge_overalls2iband->SetFillColor(kBlue);
  vgg_regge_overalls2iband->SetLineColor(kBlue);
  vgg_regge_overalls2iband->SetLineWidth(5);
  //vgg_regge_overalls2iband->Draw("F");


  gr9->Draw("PSAME");

  // 2nd canvas - vs Q2 all data

  pad1->cd(12);

  TH1F *frame10 = gPad->DrawFrame(0,miny_s2i,11,maxy_s2i);

  gPad->SetFillStyle(0);
  gPad->SetBorderSize(0);
  gPad->SetBorderMode(0);
  gPad->SetLeftMargin(0);
  gPad->SetLogx();

  gPad->SetPad(0.75,0.25,1.00,0.475);

  TAxis *xaxis10;
  xaxis10 = frame10->GetXaxis();
  xaxis10->Set(10,0.95,11.5);
  //xaxis10->SetTickLength(0);
  xaxis10->SetTitle("Q^{2} (GeV^{2})");
  xaxis10->SetNdivisions(505,kTRUE);
  xaxis10->LabelsOption("h");
  xaxis10->SetLabelSize(0.1);
  xaxis10->SetTitleSize(0.1);
  xaxis10->SetTitleOffset(1.01);
  xaxis10->Draw();
  Double_t  MAX_X_10 = xaxis10->GetXmax();
  Double_t  MIN_X_10 = xaxis10->GetXmin();
  TLine *xaxiszero10 = new TLine(MIN_X_10,0,MAX_X_10,0);
  xaxiszero10->SetLineStyle(2);
  xaxiszero10->Draw();

  TAxis *yaxis10;
  yaxis10 = frame10->GetYaxis();
  yaxis10->SetNdivisions(205,kTRUE);


  Double_t corr_s2_ul_q2[7];
  Double_t corr_ds2_ul_q2[7];

  for (i=0;i<7;i++){
    corr_s2_ul_q2[i] = (1/(1-fsidis_q2[i]))*(s2iq2[i]-fsidis_q2[i]*s2iq2_pi0[i]);
    corr_ds2_ul_q2[i] = ds2iq2[i] + sqrt((-fsidis_q2[i]/(1-fsidis_q2[i]))*
                             (-fsidis_q2[i]/(1-fsidis_q2[i]))*(ds2iq2_pi0[i]*ds2iq2_pi0[i]));
    //printf("overall s2 q2 asymmetry uncorr %lf corr %lf\n", s2iq2[i], corr_s2_ul_q2[i]);
       //diffs2iq2[i] = abs(diffs2iq2[i]) + abs(s2iq2[i]-corr_s2_ul_q2[i]) + 0.25*abs(s2iq2[i]-checks2iq2[i]);
    diffs2iq2[i] = abs((abs(diffs2iq2[i])*(abs(diffs2iq2[i]))) + (0.5*abs(s2iq2[i]-corr_s2_ul_q2[i])*0.5*abs(s2iq2[i]-corr_s2_ul_q2[i])) + (0.25*abs(s2iq2[i]-checks2iq2[i])*0.25*abs(s2iq2[i]-checks2iq2[i])));
    diffs2iq2[i] = sqrt(diffs2iq2[i]);
    //printf("overall syst %lf\n", diffs2iq2[i]);
    printf("s2i q2 asymm %lf stat %lf sys %lf\n", s2iq2[i], ds2iq2[i], diffs2iq2[i]);
  }


  TGraphErrors *gr10 = new TGraphErrors(7,xq2,s2iq2,NULL,ds2iq2);
  //TGraphErrors *gr30 = new TGraphErrors(7,xq2_2,checks2iq2,NULL,checkds2iq2);

  gr10->SetMarkerStyle(21);
  //gr30->SetMarkerStyle(26);

  gr10->SetMarkerSize(0.85);
  //gr30->SetMarkerSize(0.525);

  gr10->SetMarkerColor(2);
  gr10->SetLineColor(2);
  //gr30->SetMarkerColor(2);

  gr10->Draw("P");
  //gr30->Draw("PSAME");

  TLine *lqs21 = new TLine(xq2_2[1],s2iq2_qplot[1],xq2_2[2],s2iq2_qplot[2]);
  lqs21->SetLineColor(2);
  lqs21->SetLineStyle(1);
  lqs21->SetLineWidth(1); 
  //lqs21->Draw("l"); 
  TLine *lqs22 = new TLine(xq2_2[2],s2iq2_qplot[2],xq2_2[3],s2iq2_qplot[3]);
  lqs22->SetLineColor(2);
  lqs22->SetLineStyle(1);
  lqs22->SetLineWidth(1); 
  //lqs22->Draw("lsame");
  TLine *lqs23 = new TLine(xq2_2[3],s2iq2_qplot[3],xq2_2[4],s2iq2_qplot[4]);
  lqs23->SetLineColor(2);
  lqs23->SetLineStyle(1);
  lqs23->SetLineWidth(1); 
  //lqs23->Draw("lsame");
  TLine *lqs24 = new TLine(xq2_2[4],s2iq2_qplot[4],xq2_2[5],s2iq2_qplot[5]);
  lqs24->SetLineColor(2);
  lqs24->SetLineStyle(1);
  lqs24->SetLineWidth(1); 
  //lqs24->Draw("lsame");
  TLine *lqs25 = new TLine(xq2_2[5],s2iq2_qplot[5],xq2_2[6],s2iq2_qplot[6]);
  lqs25->SetLineColor(2);
  lqs25->SetLineStyle(1);
  lqs25->SetLineWidth(1); 
  //lqs25->Draw("lsame");

  float s2i_q2_xstart = 1.0;
  float s2i_q2_ystart = -0.40;

  Double_t s2i_q2x[] = {s2i_q2_xstart, s2i_q2_xstart, s2i_q2_xstart + 1.4 - 1.0, s2i_q2_xstart + 1.4 - 1.0, \
                        s2i_q2_xstart + 1.85 - 1.0, s2i_q2_xstart + 1.85 - 1.0, s2i_q2_xstart + 2.45 - 1.0, s2i_q2_xstart + 2.45 - 1.0, \
                        s2i_q2_xstart + 3.3 - 1.0, s2i_q2_xstart + 3.3 - 1.0, s2i_q2_xstart + 4.8 - 1.0, s2i_q2_xstart + 4.8 - 1.0,  \
                        s2i_q2_xstart + 10.0 - 1.0, s2i_q2_xstart + 10.0 - 1.0};

  Double_t s2i_q2y[] = {s2i_q2_ystart, s2i_q2_ystart + diffs2iq2[1], s2i_q2_ystart + diffs2iq2[1], s2i_q2_ystart + diffs2iq2[2], \
                        s2i_q2_ystart + diffs2iq2[2], s2i_q2_ystart + diffs2iq2[3], s2i_q2_ystart + diffs2iq2[3], s2i_q2_ystart + diffs2iq2[4], \
                        s2i_q2_ystart + diffs2iq2[4], s2i_q2_ystart + diffs2iq2[5], s2i_q2_ystart + diffs2iq2[5], s2i_q2_ystart + diffs2iq2[6], \
			s2i_q2_ystart + diffs2iq2[6], s2i_q2_ystart};

  TPolyLine *s2i_q2_syst = new TPolyLine(14,s2i_q2x,s2i_q2y,"");
  s2i_q2_syst->SetFillStyle(1001);
  s2i_q2_syst->SetFillColor(5);
  s2i_q2_syst->Draw("f");
  TPolyLine *s2i_q2_syst_line1 = new TPolyLine(14,s2i_q2x,s2i_q2y,"");
  s2i_q2_syst_line1->SetFillStyle(0);
  s2i_q2_syst_line1->SetFillColor(1);
  s2i_q2_syst_line1->Draw("fsame");


  TPolyLine *vgg_regge_q2s2iband = new TPolyLine(9, vgg_regge_q2xvalues,vggregge_q2s2i); 
  vgg_regge_q2s2iband->SetFillStyle(3644);
  vgg_regge_q2s2iband->SetFillColor(kBlue);
  vgg_regge_q2s2iband->SetLineColor(kBlue);
  vgg_regge_q2s2iband->SetLineWidth(5);
  //vgg_regge_q2s2iband->Draw("F");

  gr10->Draw("PSAME");

  // 3rd canvas - vs xbj all data

  pad1->cd(11);

  gPad->SetFillStyle(0);
  gPad->SetBorderSize(0);
  gPad->SetLogx();

  gPad->SetPad(0.50,0.25,0.75,0.475);

  TH1F *frame11 = gPad->DrawFrame(-0.1,miny_s2i,0.5,maxy_s2i);
  TAxis *xaxis11;
  xaxis11 = frame11->GetXaxis();
  xaxis11->Set(20, 0.04, 0.33);
  //xaxis11->SetTickLength(0);
  xaxis11->SetTitle("x_{Bj}");
  xaxis11->SetNdivisions(505,kTRUE);
  xaxis11->SetLabelSize(0.1);
  xaxis11->SetTitleSize(0.1);
  xaxis11->SetTitleOffset(1.01);
  xaxis11->Draw();
  Double_t  MAX_X_11 = xaxis11->GetXmax();
  TLine *xaxiszero11 = new TLine(-0.1,0,MAX_X_11,0);
  xaxiszero11->SetLineStyle(2);
  xaxiszero11->Draw();

  TAxis *yaxis11;
  yaxis11 = frame11->GetYaxis();
  yaxis11->SetNdivisions(205,kTRUE);


  Double_t corr_s2_ul_xbj[7];
  Double_t corr_ds2_ul_xbj[7];

  for (i=0;i<7;i++){
    corr_s2_ul_xbj[i] = (1/(1-fsidis_xbj[i]))*(s2ixbj[i]-fsidis_xbj[i]*s2ixbj_pi0[i]);
    corr_ds2_ul_xbj[i] = ds2ixbj[i] + sqrt((-fsidis_xbj[i]/(1-fsidis_xbj[i]))*
                             (-fsidis_xbj[i]/(1-fsidis_xbj[i]))*(ds2ixbj_pi0[i]*ds2ixbj_pi0[i]));
    //printf("overall xbj s2 asymmetry uncorr %lf corr %lf\n", s2ixbj[i], corr_s2_ul_xbj[i]);
 
    diffs2ixbj[i] = abs((abs(diffs2ixbj[i])*(abs(diffs2ixbj[i]))) + (0.5*abs(s2ixbj[i]-corr_s2_ul_xbj[i])*0.5*abs(s2ixbj[i]-corr_s2_ul_xbj[i])) + (0.25*abs(s2ixbj[i]-checks2ixbj[i])*0.25*abs(s2ixbj[i]-checks2ixbj[i])));
    diffs2ixbj[i] = sqrt(diffs2ixbj[i]);
    //printf("overall syst %lf\n", diffs2ixbj[i]);
    printf("s2i xbj asymm %lf stat %lf sys %lf\n", s2ixbj[i], ds2ixbj[i], diffs2ixbj[i]);
  }



  TGraphErrors *gr11 = new TGraphErrors(7,xxbj,s2ixbj,NULL,ds2ixbj);
  //TGraphErrors *gr31 = new TGraphErrors(7,xxbj_2,checks2ixbj,NULL,checkds2ixbj);

  gr11->SetMarkerStyle(21);
  //gr31->SetMarkerStyle(26);

  gr11->SetMarkerSize(0.85);
  //gr31->SetMarkerSize(0.525);

  gr11->SetMarkerColor(2);
  gr11->SetLineColor(2);
  //gr31->SetMarkerColor(2);

  gr11->Draw("P");
  //gr31->Draw("PSAME");

  TLine *lxs21 = new TLine(xxbj_2[1],s2ixbj_qplot[1],xxbj_2[2],s2ixbj_qplot[2]);
  lxs21->SetLineColor(2);
  lxs21->SetLineStyle(1);
  lxs21->SetLineWidth(1); 
  //lxs21->Draw("l"); 
  TLine *lxs22 = new TLine(xxbj_2[2],s2ixbj_qplot[2],xxbj_2[3],s2ixbj_qplot[3]);
  lxs22->SetLineColor(2);
  lxs22->SetLineStyle(1);
  lxs22->SetLineWidth(1); 
  //lxs22->Draw("lsame");
  TLine *lxs23 = new TLine(xxbj_2[3],s2ixbj_qplot[3],xxbj_2[4],s2ixbj_qplot[4]);
  lxs23->SetLineColor(2);
  lxs23->SetLineStyle(1);
  lxs23->SetLineWidth(1); 
  //lxs23->Draw("lsame");
  TLine *lxs24 = new TLine(xxbj_2[4],s2ixbj_qplot[4],xxbj_2[5],s2ixbj_qplot[5]);
  lxs24->SetLineColor(2);
  lxs24->SetLineStyle(1);
  lxs24->SetLineWidth(1); 
  //lxs24->Draw("lsame");
  TLine *lxs25 = new TLine(xxbj_2[5],s2ixbj_qplot[5],xxbj_2[6],s2ixbj_qplot[6]);
  lxs25->SetLineColor(2);
  lxs25->SetLineStyle(1);
  lxs25->SetLineWidth(1); 
  //lxs25->Draw("lsame");

  float s2i_xbj_xstart = 0.045;
  float s2i_xbj_ystart = -0.40;

  Double_t s2i_xbjx[] = {s2i_xbj_xstart, s2i_xbj_xstart, 0.06, 0.06, \
                         0.08, 0.08, 0.10, 0.10, \
			 0.13, 0.13, 0.2, 0.2,\
			 0.3, 0.3 };

  Double_t s2i_xbjy[] = {s2i_xbj_ystart, s2i_xbj_ystart + diffs2ixbj[1], s2i_xbj_ystart + diffs2ixbj[1], s2i_xbj_ystart + diffs2ixbj[2], \
			 s2i_xbj_ystart + diffs2ixbj[2], s2i_xbj_ystart + diffs2ixbj[3], s2i_xbj_ystart + diffs2ixbj[3],  s2i_xbj_ystart + diffs2ixbj[4], \
			 s2i_xbj_ystart + diffs2ixbj[4], s2i_xbj_ystart + diffs2ixbj[5], s2i_xbj_ystart + diffs2ixbj[5], \
			 s2i_xbj_ystart + diffs2ixbj[6], s2i_xbj_ystart + diffs2ixbj[6], s2i_xbj_ystart, };

  TPolyLine *s2i_xbj_syst = new TPolyLine(14,s2i_xbjx,s2i_xbjy,"");
  s2i_xbj_syst->SetFillStyle(1001);
  s2i_xbj_syst->SetFillColor(5);
  s2i_xbj_syst->Draw("f");
  TPolyLine *s2i_xbj_syst_line1 = new TPolyLine(14,s2i_xbjx,s2i_xbjy,"");
  s2i_xbj_syst_line1->SetFillStyle(0);
  s2i_xbj_syst_line1->SetFillColor(1);
  s2i_xbj_syst_line1->Draw("fsame");


  TPolyLine *vgg_regge_xbs2iband = new TPolyLine(9, vgg_regge_xbxvalues,vggregge_xbs2i); 
  vgg_regge_xbs2iband->SetFillStyle(3644);
  vgg_regge_xbs2iband->SetFillColor(kBlue);
  vgg_regge_xbs2iband->SetLineColor(kBlue);
  vgg_regge_xbs2iband->SetLineWidth(5);
  //vgg_regge_xbs2iband->Draw("F");

  gr11->Draw("PSAME");

  // 4th canvas - vs tc all data

  pad1->cd(10);

  TH1F *frame12 = gPad->DrawFrame(-0.05,miny_s2i,0.8,maxy_s2i);

  gPad->SetPad(0.25,0.25,0.50,0.475);

  gPad->SetFillStyle(0);
  gPad->SetBorderSize(0);
  gPad->SetLogx();

  TAxis *xaxis12;
  xaxis12 = frame12->GetXaxis();
  xaxis12->Set(21, 0.009, 0.8);
  xaxis12->SetTitle("-t_{c} (GeV^{2})");
  xaxis12->SetNdivisions(505,kTRUE);
  xaxis12->LabelsOption("h");
  xaxis12->SetLabelSize(0.1);
  xaxis12->SetTitleSize(0.1);
  xaxis12->SetTitleOffset(1.01);
  xaxis12->Draw();
  Double_t  MAX_X_12 = xaxis12->GetXmax();
  TLine *xaxiszero12 = new TLine(0,0,MAX_X_12,0);
  xaxiszero12->SetLineStyle(2);
  xaxiszero12->Draw();

  TAxis *yaxis12;
  yaxis12 = frame12->GetYaxis();
  yaxis12->SetNdivisions(205,kTRUE);


  Double_t corr_s2_ul_tc[7];
  Double_t corr_ds2_ul_tc[7];

  for (i=0;i<7;i++){
    corr_s2_ul_tc[i] = (1/(1-fsidis_tc[i]))*(s2itc[i]-fsidis_tc[i]*s2itc_pi0[i]);
    corr_ds2_ul_tc[i] = ds2itc[i] + sqrt((-fsidis_tc[i]/(1-fsidis_tc[i]))*
                             (-fsidis_tc[i]/(1-fsidis_tc[i]))*(ds2itc_pi0[i]*ds2itc_pi0[i]));
    //printf("overall tc s2 asymmetry uncorr %lf corr %lf\n", s2itc[i], corr_s2_ul_tc[i]);

    diffs2itc[i] = abs((abs(diffs2itc[i])*(abs(diffs2itc[i]))) + ((0.5*abs(s2itc[i]-corr_s2_ul_tc[i]))*(0.5*abs(s2itc[i]-corr_s2_ul_tc[i]))) + ((0.25*abs(s2itc[i]-checks2itc[i]))*(0.25*abs(s2itc[i]-checks2itc[i]))));
    diffs2itc[i] = sqrt(diffs2itc[i]); 
    //printf("overall syst %lf\n", diffs2itc[i]);
    printf("s2i tc asymm %lf stat %lf sys %lf\n", s2itc[i], ds2itc[i], diffs2itc[i]);
  }



  TGraphErrors *gr12 = new TGraphErrors(7,xtc,s2itc,NULL,ds2itc);
  //TGraphErrors *gr32 = new TGraphErrors(7,xtc_2,checks2itc,NULL,checkds2itc);
 
  gr12->SetMarkerStyle(21);
  //gr32->SetMarkerStyle(26);

  gr12->SetMarkerSize(0.85);
  //gr32->SetMarkerSize(0.525);

  gr12->SetMarkerColor(2);
  gr12->SetLineColor(2);
  //gr32->SetMarkerColor(2);
 
  gr12->Draw("P");
  //gr32->Draw("PSAME");

    TLine *lts21 = new TLine(xtc_2[1],s2itc_qplot[1],xtc_2[2],s2itc_qplot[2]);
  lts21->SetLineColor(2);
  lts21->SetLineStyle(1);
  lts21->SetLineWidth(1); 
  //lts21->Draw("l"); 
  TLine *lts22 = new TLine(xtc_2[2],s2itc_qplot[2],xtc_2[3],s2itc_qplot[3]);
  lts22->SetLineColor(2);
  lts22->SetLineStyle(1);
  lts22->SetLineWidth(1); 
  //lts22->Draw("lsame");
  TLine *lts23 = new TLine(xtc_2[3],s2itc_qplot[3],xtc_2[4],s2itc_qplot[4]);
  lts23->SetLineColor(2);
  lts23->SetLineStyle(1);
  lts23->SetLineWidth(1); 
  //lts23->Draw("lsame");
  TLine *lts24 = new TLine(xtc_2[4],s2itc_qplot[4],xtc_2[5],s2itc_qplot[5]);
  lts24->SetLineColor(2);
  lts24->SetLineStyle(1);
  lts24->SetLineWidth(1); 
  //lts24->Draw("lsame");
  TLine *lts25 = new TLine(xtc_2[5],s2itc_qplot[5],xtc_2[6],s2itc_qplot[6]);
  lts25->SetLineColor(2);
  lts25->SetLineStyle(1);
  lts25->SetLineWidth(1); 
  //lts25->Draw("lsame");

  float s2i_tc_xstart = 0.011;
  float s2i_tc_ystart = -0.40;

  Double_t s2i_tcx[] = {s2i_tc_xstart, s2i_tc_xstart, 0.03, 0.03, \
			0.06, 0.06, 0.11, 0.11, \
			0.20, 0.20, 0.30, 0.30, \
                        0.7, 0.7};

  Double_t s2i_tcy[] = {s2i_tc_ystart, s2i_tc_ystart + diffs2itc[1], s2i_tc_ystart + diffs2itc[1], s2i_tc_ystart + diffs2itc[2], \
                        s2i_tc_ystart + diffs2itc[2], s2i_tc_ystart + diffs2itc[3], s2i_tc_ystart + diffs2itc[3],  s2i_tc_ystart + diffs2itc[4], \
                        s2i_tc_ystart + diffs2itc[4], s2i_tc_ystart + diffs2itc[5], s2i_tc_ystart + diffs2itc[5],  s2i_tc_ystart + diffs2itc[6], \
                        s2i_tc_ystart + diffs2itc[6], s2i_tc_ystart};

  TPolyLine *s2i_tc_syst = new TPolyLine(14,s2i_tcx,s2i_tcy,"");
  s2i_tc_syst->SetFillStyle(1001);
  s2i_tc_syst->SetFillColor(5);
  s2i_tc_syst->Draw("f");
  TPolyLine *s2i_tc_syst_line1 = new TPolyLine(14,s2i_tcx,s2i_tcy,"");
  s2i_tc_syst_line1->SetFillStyle(0);
  s2i_tc_syst_line1->SetFillColor(1);
  s2i_tc_syst_line1->Draw("fsame");


  TPolyLine *vgg_regge_ts2iband = new TPolyLine(9, vgg_regge_txvalues,vggregge_ts2i); 
  vgg_regge_ts2iband->SetFillStyle(3644);
  vgg_regge_ts2iband->SetFillColor(kBlue);
  vgg_regge_ts2iband->SetLineColor(kBlue);
  vgg_regge_ts2iband->SetLineWidth(5);
  //vgg_regge_ts2iband->Draw("F");

  gr12->Draw("PSAME");

  // assocBH amplitude

  pad1->cd(13);
  gPad->SetFrameFillStyle(0);
  gPad->SetFillStyle(0);

  gPad->SetPad(0.00,0.00,0.25,0.25);

  Double_t maxy_assocBH = 0.55;
  Double_t miny_assocBH = 0.0;

  TH1F *frame13 = gPad->DrawFrame(0,miny_assocBH,5,maxy_assocBH);

  TAxis *xaxis13;
  xaxis13 = frame13->GetXaxis();
  //xaxis13->Set(3,0.0,2.0);
  //xaxis13->SetTickLength(0);
  //xaxis13->SetBinLabel(2,"Overall");
  //xaxis13->SetLabelSize(0.14);
  //xaxis13->SetLabelOffset(0.01);
  //xaxis13->SetTitleSize(0.1);
  //xaxis13->LabelsOption("h");
  xaxis13->SetTitle("overall");
  xaxis13->SetLabelFont(63);
  xaxis13->SetTitleFont(63);
  xaxis13->SetLabelSize(25);
  xaxis13->SetLabelOffset(0.02);
  xaxis13->SetTitleSize(30);
  xaxis13->SetTitleOffset(5.5);
  xaxis13->CenterTitle();
  xaxis13->SetNdivisions(0,kTRUE);
  xaxis13->Set(3,0.0,2.0);
  xaxis13->Draw();
  Double_t  MAX_X13 = xaxis13->GetXmax();
  Double_t  MIN_X13 = xaxis13->GetXmin();
  TLine *xaxiszero13 = new TLine(MIN_X13,0,MAX_X13,0);
  xaxiszero13->SetLineStyle(2);
  xaxiszero13->Draw();

  TAxis *yaxis13;
  yaxis13 = frame13->GetYaxis();
  yaxis13->SetTitle("#splitline{Assoc.}{fraction}");
  yaxis13->SetLabelFont(63);
  yaxis13->SetTitleFont(63);
  yaxis13->SetLabelSize(25);
  yaxis13->SetLabelOffset(0.05);
  yaxis13->SetTitleSize(25);
  yaxis13->SetTitleOffset(6.1);
  yaxis13->SetNdivisions(205,kTRUE);
  yaxis13->CenterTitle();
  yaxis13->CenterLabels(kFALSE);
  
  TGraph *gr13 = new TGraph(1,xoverall,total_assocBH);

  gr13->SetMarkerStyle(20);

  gr13->SetMarkerSize(1.0);

  gr13->SetMarkerColor(1);

  gr13->Draw("P");
  

  // 2nd canvas - vs Q2 all data

  pad1->cd(16);

  Double_t maxy_c1i = 0.45;
  Double_t miny_c1i = 0.0;

  TH1F *frame14 = gPad->DrawFrame(0,miny_c1i,11,maxy_c1i);

  gPad->SetFillStyle(0);
  gPad->SetBorderSize(0);
  gPad->SetBorderMode(0);
  gPad->SetLeftMargin(0);
  gPad->SetLogx();

  gPad->SetPad(0.75,0.00,1.00,0.25);

  TAxis *xaxis14;
  xaxis14 = frame14->GetXaxis();
  xaxis14->Set(10,0.95,11.5);
  //xaxis14->SetTickLength(0);
  xaxis14->SetTitle("Q^{2} [GeV^{2}]");
  xaxis14->SetLabelFont(63);
  xaxis14->SetTitleFont(63);
  xaxis14->SetLabelSize(25);
  xaxis14->SetLabelOffset(0.02);
  xaxis14->SetTitleSize(30);
  xaxis14->SetTitleOffset(5.5);
  xaxis14->SetNdivisions(205,kTRUE);
  xaxis14->CenterTitle();
  xaxis14->Draw();

  TAxis *yaxis14;
  yaxis14 = frame14->GetYaxis();
  yaxis14->SetNdivisions(205,kTRUE);

  TGraph *gr14 = new TGraph(7,xq2,assoc_q2);

  gr14->SetMarkerStyle(20);

  gr14->SetMarkerSize(1.0);

  gr14->SetMarkerColor(1);

  gr14->Draw("P");


  // 3rd canvas - vs xbj all data

  pad1->cd(15);

  gPad->SetFillStyle(0);
  gPad->SetBorderSize(0);
  gPad->SetLogx();

  gPad->SetPad(0.50,0.00,0.75,0.25);

  TH1F *frame15 = gPad->DrawFrame(-0.1,miny_c1i,0.5,maxy_c1i);
  TAxis *xaxis15;
  xaxis15 = frame15->GetXaxis();
  xaxis15->Set(20, 0.04, 0.33);
  //xaxis15->SetTickLength(0);
  xaxis15->SetTitle("x_{B}");
  xaxis15->SetLabelFont(63);
  xaxis15->SetTitleFont(63);
  xaxis15->SetLabelSize(25);
  xaxis15->SetLabelOffset(0.02);
  xaxis15->SetTitleSize(30);
  xaxis15->SetTitleOffset(6.25);
  xaxis15->SetNdivisions(205,kTRUE);
  xaxis15->CenterTitle();

  TAxis *yaxis15;
  yaxis15 = frame15->GetYaxis();
  yaxis15->SetNdivisions(205,kTRUE);

  TGraph *gr15 = new TGraph(7,xxbj,assoc_xbj);

  gr15->SetMarkerStyle(20);

  gr15->SetMarkerSize(1.0);

  gr15->SetMarkerColor(1);

  gr15->Draw("P");

  // 4th canvas - vs tc all data

  pad1->cd(14);

  TH1F *frame16 = gPad->DrawFrame(-0.05,miny_c1i,0.8,maxy_c1i);

  gPad->SetFillStyle(0);
  gPad->SetBorderSize(0);
  gPad->SetLogx();

  gPad->SetPad(0.25,0.00,0.50,0.25);

   TAxis *xaxis16;
  xaxis16 = frame16->GetXaxis();
  xaxis16->Set(21, 0.007, 0.8);
  xaxis16->SetTitle("-t [GeV^{2}]");
  xaxis16->SetLabelFont(63);
  xaxis16->SetTitleFont(63);
  xaxis16->SetLabelSize(25);
  xaxis16->SetLabelOffset(0.02);
  xaxis16->SetTitleSize(30);
  xaxis16->SetTitleOffset(5.5);
  xaxis16->SetNdivisions(205,kTRUE);
  xaxis16->CenterTitle();
 
  xaxis16->Draw();
  Double_t  MAX_X_16 = xaxis16->GetXmax();
  TLine *xaxiszero16 = new TLine(0,0,MAX_X_12,0);
  xaxiszero16->SetLineStyle(2);
  xaxiszero16->Draw();

  TAxis *yaxis16;
  yaxis16 = frame16->GetYaxis();
  yaxis16->SetNdivisions(205,kTRUE);

  TGraph *gr60 = new TGraph(7,xtc,assoc_tc);
 
  gr60->SetMarkerStyle(20);

  gr60->SetMarkerSize(1.0);

  gr60->SetMarkerColor(1);
 
  gr60->Draw("P");


  combined->Print("bsadvcsplots_eml_par13_bin6_release_all_pic_update.eps");
  combined->Print("bsadvcsplots_eml_par13_bin6_release_all_pic_update.pdf");
  combined->Print("bsadvcsplots_eml_par13_bin6_release_all_pic_update.C");


  return 0;

}


