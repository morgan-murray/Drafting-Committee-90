{
//=========Macro generated from canvas: combined/
//=========  (Thu Oct  6 14:43:44 2011) by ROOT version5.28/00b
   TCanvas *combined = new TCanvas("combined", "",14,32,1200,756);
   gStyle->SetOptStat(0);
   combined->SetHighLightColor(2);
   combined->Range(0,0,1,1);
   combined->SetFillColor(0);
   combined->SetBorderMode(0);
   combined->SetBorderSize(2);
   combined->SetLeftMargin(0.35);
   combined->SetRightMargin(0.05);
   combined->SetBottomMargin(0.45);
   combined->SetFrameFillStyle(0);
   combined->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1
   TPad *pad1 = new TPad("pad1", "pad1",0,0,0.99,0.99);
   pad1->Draw();
   pad1->cd();
   pad1->Range(0,0,1,1);
   pad1->SetFillColor(0);
   pad1->SetBorderMode(0);
   pad1->SetBorderSize(2);
   pad1->SetLeftMargin(0.125);
   pad1->SetRightMargin(0.0135135);
   pad1->SetTopMargin(0.0281369);
   pad1->SetBottomMargin(0.126616);
   pad1->SetFrameFillStyle(0);
   pad1->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1_1
   pad1_1 = new TPad("pad1_1", "pad1_1",0,0.7,0.25,1);
   pad1_1->Draw();
   pad1_1->cd();
   pad1_1->Range(-2,-0.65,2,0.25);
   pad1_1->SetFillStyle(4000);
   pad1_1->SetBorderMode(0);
   pad1_1->SetBorderSize(2);
   pad1_1->SetLeftMargin(0.5);
   pad1_1->SetRightMargin(0);
   pad1_1->SetTopMargin(0);
   pad1_1->SetBottomMargin(0);
   pad1_1->SetFrameFillColor(0);
   pad1_1->SetFrameFillStyle(0);
   pad1_1->SetFrameBorderMode(0);
   pad1_1->SetFrameFillStyle(0);
   pad1_1->SetFrameBorderMode(0);
   
   TH1F *hframe__1__1 = new TH1F("hframe__1__1","",3,0,2);
   hframe__1__1->SetMinimum(-0.69);
   hframe__1__1->SetMaximum(0.25);
   hframe__1__1->SetDirectory(0);
   hframe__1__1->SetStats(0);
   hframe__1__1->GetXaxis()->SetBinLabel(2,"Integrated Over All Kinematics");
   hframe__1__1->GetXaxis()->SetBit(TAxis::kLabelsHori);
   hframe__1__1->GetXaxis()->SetLabelOffset(0.015);
   hframe__1__1->GetXaxis()->SetLabelSize(0.01);
   hframe__1__1->GetXaxis()->SetTitleSize(0.01);
   hframe__1__1->GetXaxis()->SetTickLength(0);
   hframe__1__1->GetYaxis()->SetTitle("A_{LU,I}^{sin #phi}");
   hframe__1__1->GetYaxis()->CenterTitle(true);
   hframe__1__1->GetYaxis()->SetNdivisions(205);
   hframe__1__1->GetYaxis()->SetLabelFont(63);
   hframe__1__1->GetYaxis()->SetLabelOffset(0.05);
   hframe__1__1->GetYaxis()->SetLabelSize(25);
   hframe__1__1->GetYaxis()->SetTitleSize(35);
   hframe__1__1->GetYaxis()->SetTitleOffset(4.5);
   hframe__1__1->GetYaxis()->SetTitleFont(63);
   hframe__1__1->Draw(" ");
   TLine *line = new TLine(0,0,2,0);
   line->SetLineStyle(2);
   line->Draw();
   
   TGraphErrors *gre = new TGraphErrors(1);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(21);
   gre->SetPoint(0,1,-0.222422);
   gre->SetPointError(0,0,0.0234978);
   
   TH1F *Graph11 = new TH1F("Graph11","Graph",100,0.9,2.1);
   Graph11->SetMinimum(-0.2506194);
   Graph11->SetMaximum(-0.1942246);
   Graph11->SetDirectory(0);
   Graph11->SetStats(0);
   gre->SetHistogram(Graph11);
   
	float s1i_o_s =-0.6
	float s1i_o_e;
	s1i_o_e=-0.6+0.022;
	
	float s1i_o_s2=-0.67
	float s1i_o_e2;
	s1i_o_e2=-0.67+0.020;
	
	Double_t *dum = 0;
	TPolyLine *pline = new TPolyLine(4,dum,dum,"");
	pline->SetFillColor(2);
	pline->SetPoint(0,0.5,s1i_o_s);
	pline->SetPoint(1,0.5,s1i_o_e);
	pline->SetPoint(2,1.5,s1i_o_e);
	pline->SetPoint(3,1.5,s1i_o_s);
	pline->Draw("fsame");
	
	Double_t *dum = 0;
	TPolyLine *pline = new TPolyLine(4,dum,dum,"");
	pline->SetFillColor(4);
	pline->SetFillStyle(0);
	pline->SetPoint(0,0.5,s1i_o_s2);
	pline->SetPoint(1,0.5,s1i_o_e2);
	pline->SetPoint(2,1.5,s1i_o_e2);
	pline->SetPoint(3,1.5,s1i_o_s2);
	pline->Draw("fsame");
	
	
   gre->Draw("p");
   
   gre = new TGraphErrors(1);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,1.2,-0.224);
   gre->SetPointError(0,0,0.028);
   
   TH1F *Graph33 = new TH1F("Graph33","Graph",100,1.1,2.3);
   Graph33->SetMinimum(-0.2576);
   Graph33->SetMaximum(-0.1904);
   Graph33->SetDirectory(0);
   Graph33->SetStats(0);
   gre->SetHistogram(Graph33);
   
   gre->Draw("p");
   
pad1_1->Modified();
   pad1->cd();
  
// ------------>Primitives in pad: pad1_5
   pad1_5 = new TPad("pad1_5", "pad1_5",0,0.475,0.25,0.7);
   pad1_5->Draw();
   pad1_5->cd();
   pad1_5->Range(-2,-0.45,2,0.3);
   pad1_5->SetFillStyle(4000);
   pad1_5->SetBorderMode(0);
   pad1_5->SetBorderSize(2);
   pad1_5->SetLeftMargin(0.5);
   pad1_5->SetRightMargin(0);
   pad1_5->SetTopMargin(0);
   pad1_5->SetBottomMargin(0);
   pad1_5->SetFrameFillColor(0);
   pad1_5->SetFrameFillStyle(0);
   pad1_5->SetFrameBorderMode(0);
   pad1_5->SetFrameFillStyle(0);
   pad1_5->SetFrameBorderMode(0);
   
   TH1F *hframe__2__2 = new TH1F("hframe__2__2","",3,0,2);
   hframe__2__2->SetMinimum(-0.475);
   hframe__2__2->SetMaximum(0.3);
   hframe__2__2->SetDirectory(0);
   hframe__2__2->SetStats(0);
   hframe__2__2->GetXaxis()->SetBinLabel(2,"Integrated Over All Kinematics");
   hframe__2__2->GetXaxis()->SetBit(TAxis::kLabelsHori);
   hframe__2__2->GetXaxis()->SetLabelOffset(0.015);
   hframe__2__2->GetXaxis()->SetLabelSize(0.01);
   hframe__2__2->GetXaxis()->SetTitleSize(0.01);
   hframe__2__2->GetXaxis()->SetTickLength(0);
   hframe__2__2->GetYaxis()->SetTitle("A_{LU,DVCS}^{sin #phi}");
   hframe__2__2->GetYaxis()->CenterTitle(true);
   hframe__2__2->GetYaxis()->SetNdivisions(205);
   hframe__2__2->GetYaxis()->SetLabelFont(63);
   hframe__2__2->GetYaxis()->SetLabelOffset(0.05);
   hframe__2__2->GetYaxis()->SetLabelSize(25);
   hframe__2__2->GetYaxis()->SetTitleSize(35);
   hframe__2__2->GetYaxis()->SetTitleOffset(4.5);
   hframe__2__2->GetYaxis()->SetTitleFont(63);
   hframe__2__2->Draw(" ");
   line = new TLine(0,0,2,0);
   line->SetLineStyle(2);
   line->Draw();
   
   gre = new TGraphErrors(1);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(21);
   gre->SetPoint(0,1,0.00461972);
   gre->SetPointError(0,0,0.0234467);
   
   TH1F *Graph55 = new TH1F("Graph55","Graph",100,0.9,2.1);
   Graph55->SetMinimum(-0.02351632);
   Graph55->SetMaximum(0.03275576);
   Graph55->SetDirectory(0);
   Graph55->SetStats(0);
   gre->SetHistogram(Graph55);
   
   gre->Draw("p");
   
	float s1d_o_s =-0.4
	float s1d_o_e;
	s1d_o_e=-0.4+0.003;
	
	float s1d_o_s2=-0.45
	float s1d_o_e2;
	s1d_o_e2=-0.45+0.004;
	
	Double_t *dum = 0;
	TPolyLine *pline = new TPolyLine(4,dum,dum,"");
	pline->SetFillColor(2);
	pline->SetPoint(0,0.5,s1d_o_s);
	pline->SetPoint(1,0.5,s1d_o_e);
	pline->SetPoint(2,1.5,s1d_o_e);
	pline->SetPoint(3,1.5,s1d_o_s);
	pline->Draw("fsame");
	
	Double_t *dum = 0;
	TPolyLine *pline = new TPolyLine(4,dum,dum,"");
	pline->SetFillColor(4);
	pline->SetFillStyle(0);
	pline->SetPoint(0,0.5,s1d_o_s2);
	pline->SetPoint(1,0.5,s1d_o_e2);
	pline->SetPoint(2,1.5,s1d_o_e2);
	pline->SetPoint(3,1.5,s1d_o_s2);
	pline->Draw("fsame");
	
	
gre = new TGraphErrors(1);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,1.2,0.043);
   gre->SetPointError(0,0,0.028);
   
   TH1F *Graph77 = new TH1F("Graph77","Graph",100,1.1,2.3);
   Graph77->SetMinimum(0.0094);
   Graph77->SetMaximum(0.0766);
   Graph77->SetDirectory(0);
   Graph77->SetStats(0);
   gre->SetHistogram(Graph77);
   
	
   gre->Draw("p");
   pad1_5->Modified();
   pad1->cd();
  
// ------------>Primitives in pad: pad1_9
   pad1_9 = new TPad("pad1_9", "pad1_9",0,0.25,0.25,0.475);
   pad1_9->Draw();
   pad1_9->cd();
   pad1_9->Range(-2,-0.45,2,0.25);
   pad1_9->SetFillStyle(4000);
   pad1_9->SetBorderMode(0);
   pad1_9->SetBorderSize(2);
   pad1_9->SetLeftMargin(0.5);
   pad1_9->SetRightMargin(0);
   pad1_9->SetTopMargin(0);
   pad1_9->SetBottomMargin(0);
   pad1_9->SetFrameFillColor(0);
   pad1_9->SetFrameFillStyle(0);
   pad1_9->SetFrameBorderMode(0);
   pad1_9->SetFrameFillStyle(0);
   pad1_9->SetFrameBorderMode(0);
   
   TH1F *hframe__3__3 = new TH1F("hframe__3__3","",3,0,2);
   hframe__3__3->SetMinimum(-0.475);
   hframe__3__3->SetMaximum(0.25);
   hframe__3__3->SetDirectory(0);
   hframe__3__3->SetStats(0);
   hframe__3__3->GetXaxis()->SetBinLabel(2,"Overall");
   hframe__3__3->GetXaxis()->SetBit(TAxis::kLabelsHori);
   hframe__3__3->GetXaxis()->SetLabelOffset(0.015);
   hframe__3__3->GetXaxis()->SetLabelSize(0.01);
   hframe__3__3->GetXaxis()->SetTitleSize(0.01);
   hframe__3__3->GetXaxis()->SetTickLength(0);
   hframe__3__3->GetYaxis()->SetTitle("A_{LU,I}^{sin (2#phi)}");
   hframe__3__3->GetYaxis()->CenterTitle(true);
   hframe__3__3->GetYaxis()->SetNdivisions(205);
   hframe__3__3->GetYaxis()->SetLabelFont(63);
   hframe__3__3->GetYaxis()->SetLabelOffset(0.05);
   hframe__3__3->GetYaxis()->SetLabelSize(25);
   hframe__3__3->GetYaxis()->SetTitleSize(35);
   hframe__3__3->GetYaxis()->SetTitleOffset(4.5);
   hframe__3__3->GetYaxis()->SetTitleFont(63);
   hframe__3__3->Draw(" ");
   line = new TLine(0,0,2,0);
   line->SetLineStyle(2);
   line->Draw();
   
   gre = new TGraphErrors(1);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(21);
   gre->SetPoint(0,1,0.00518217);
   gre->SetPointError(0,0,0.0233162);
   
   TH1F *Graph99 = new TH1F("Graph99","Graph",100,0.9,2.1);
   Graph99->SetMinimum(-0.02279727);
   Graph99->SetMaximum(0.03316161);
   Graph99->SetDirectory(0);
   Graph99->SetStats(0);
   gre->SetHistogram(Graph99);
   
   gre->Draw("p");
	
	float s2_o_s =-0.4
	float s2_o_e;
	s2_o_e=-0.4+0.003;
	
	float s2_o_s2=-0.45
	float s2_o_e2;
	s2_o_e2=-0.45+0.002;
	
	Double_t *dum = 0;
	TPolyLine *pline = new TPolyLine(4,dum,dum,"");
	pline->SetFillColor(2);
	pline->SetPoint(0,0.5,s2_o_s);
	pline->SetPoint(1,0.5,s2_o_e);
	pline->SetPoint(2,1.5,s2_o_e);
	pline->SetPoint(3,1.5,s2_o_s);
	pline->Draw("fsame");
	
	Double_t *dum = 0;
	TPolyLine *pline = new TPolyLine(4,dum,dum,"");
	pline->SetFillColor(4);
	pline->SetFillStyle(0);
	pline->SetPoint(0,0.5,s2_o_s2);
	pline->SetPoint(1,0.5,s2_o_e2);
	pline->SetPoint(2,1.5,s2_o_e2);
	pline->SetPoint(3,1.5,s2_o_s2);
	pline->Draw("fsame");
	
	
      
   gre = new TGraphErrors(1);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,1.2,-0.035);
   gre->SetPointError(0,0,0.028);
   
   TH1F *Graph1111 = new TH1F("Graph1111","Graph",100,1.1,2.3);
   Graph1111->SetMinimum(-0.0686);
   Graph1111->SetMaximum(-0.0014);
   Graph1111->SetDirectory(0);
   Graph1111->SetStats(0);
   gre->SetHistogram(Graph1111);
   
      
   gre->Draw("p");
   pad1_9->Modified();
   pad1->cd();
  
// ------------>Primitives in pad: pad1_13
   pad1_13 = new TPad("pad1_13", "pad1_13",0,0,0.25,0.25);
   pad1_13->Draw();
   pad1_13->cd();
   pad1_13->Range(-2,-0.4617876,2,0.45);
   pad1_13->SetFillStyle(4000);
   pad1_13->SetBorderMode(0);
   pad1_13->SetBorderSize(2);
   pad1_13->SetLeftMargin(0.5);
   pad1_13->SetRightMargin(0);
   pad1_13->SetTopMargin(0);
   pad1_13->SetBottomMargin(0.506464);
   pad1_13->SetFrameFillColor(0);
   pad1_13->SetFrameFillStyle(0);
   pad1_13->SetFrameBorderMode(0);
   pad1_13->SetFrameFillStyle(0);
   pad1_13->SetFrameBorderMode(0);
   
   TH1F *hframe__4__4 = new TH1F("hframe__4__4","",3,0,2);
   hframe__4__4->SetMinimum(0);
   hframe__4__4->SetMaximum(0.45);
   hframe__4__4->SetDirectory(0);
   hframe__4__4->SetStats(0);
   hframe__4__4->GetXaxis()->SetTitle("overall");
   hframe__4__4->GetXaxis()->CenterTitle(true);
   hframe__4__4->GetXaxis()->SetNdivisions(0);
   hframe__4__4->GetXaxis()->SetLabelFont(63);
   hframe__4__4->GetXaxis()->SetLabelOffset(0.02);
   hframe__4__4->GetXaxis()->SetLabelSize(25);
   hframe__4__4->GetXaxis()->SetTitleSize(30);
   hframe__4__4->GetXaxis()->SetTitleOffset(5.5);
   hframe__4__4->GetXaxis()->SetTitleFont(63);
   hframe__4__4->GetYaxis()->SetTitle("#splitline{Assoc.}{fraction}");
   hframe__4__4->GetYaxis()->CenterTitle(true);
   hframe__4__4->GetYaxis()->SetNdivisions(205);
   hframe__4__4->GetYaxis()->SetLabelFont(63);
   hframe__4__4->GetYaxis()->SetLabelOffset(0.05);
   hframe__4__4->GetYaxis()->SetLabelSize(25);
   hframe__4__4->GetYaxis()->SetTitleSize(25);
   hframe__4__4->GetYaxis()->SetTitleOffset(6.1);
   hframe__4__4->GetYaxis()->SetTitleFont(63);
   hframe__4__4->Draw(" ");
   line = new TLine(0,0,2,0);
   line->SetLineStyle(2);
   line->Draw();
   
   TGraph *graph = new TGraph(1);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetMarkerStyle(20);
   graph->SetPoint(0,1,0.132095);
   
   TH1F *Graph_Graph_Graph11 = new TH1F("Graph_Graph_Graph11","Graph",100,0.9,2.1);
   Graph_Graph_Graph11->SetMinimum(0.032095);
   Graph_Graph_Graph11->SetMaximum(1.232095);
   Graph_Graph_Graph11->SetDirectory(0);
   Graph_Graph_Graph11->SetStats(0);
   graph->SetHistogram(Graph_Graph_Graph11);
   
   graph->Draw("p");
   pad1_13->Modified();
   pad1->cd();
  
// ------------>Primitives in pad: pad1_2
   pad1_2 = new TPad("pad1_2", "pad1_2",0.25,0.7,0.5,1);
   pad1_2->Draw();
   pad1_2->cd();
   pad1_2->Range(-2.045757,-0.65,-0.09691001,0.25);
   pad1_2->SetFillStyle(4000);
   pad1_2->SetBorderMode(0);
   pad1_2->SetBorderSize(0);
   pad1_2->SetLogx();
   pad1_2->SetLeftMargin(0);
   pad1_2->SetRightMargin(0);
   pad1_2->SetTopMargin(0);
   pad1_2->SetBottomMargin(0);
   pad1_2->SetFrameFillColor(0);
   pad1_2->SetFrameFillStyle(0);
   pad1_2->SetFrameBorderMode(0);
   pad1_2->SetFrameFillStyle(0);
   pad1_2->SetFrameBorderMode(0);
   
   TH1F *hframe__5__5 = new TH1F("hframe__5__5","",21,0.007,0.8);
   hframe__5__5->SetMinimum(-0.69);
   hframe__5__5->SetMaximum(0.25);
   hframe__5__5->SetDirectory(0);
   hframe__5__5->SetStats(0);
   hframe__5__5->GetXaxis()->SetTitle("-t_{c} (GeV^{2})");
   hframe__5__5->GetXaxis()->SetNdivisions(505);
   hframe__5__5->GetXaxis()->SetLabelSize(0.1);
   hframe__5__5->GetXaxis()->SetTitleSize(0.1);
   hframe__5__5->GetXaxis()->SetTitleOffset(1.01);
   hframe__5__5->GetYaxis()->SetNdivisions(205);
   hframe__5__5->Draw(" ");
   line = new TLine(0,0,0.8,0);
   line->SetLineStyle(2);
   line->Draw();
   
   gre = new TGraphErrors(6);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(21);
   gre->SetPoint(0,0.018761,-0.216888);
   gre->SetPointError(0,0,0.051125);
   gre->SetPoint(1,0.04394,-0.221564);
   gre->SetPointError(1,0,0.0524501);
   gre->SetPoint(2,0.078792,-0.16277);
   gre->SetPointError(2,0,0.0565657);
   gre->SetPoint(3,0.142805,-0.246042);
   gre->SetPointError(3,0,0.0492695);
   gre->SetPoint(4,0.260879,-0.296519);
   gre->SetPointError(4,0,0.066032);
   gre->SetPoint(5,0.466061,-0.18867);
   gre->SetPointError(5,0,0.0948939);
   
   TH1F *Graph1313 = new TH1F("Graph1313","Graph",100,0.0168849,0.510791);
   Graph1313->SetMinimum(-0.3894285);
   Graph1313->SetMaximum(-0.06689861);
   Graph1313->SetDirectory(0);
   Graph1313->SetStats(0);
   gre->SetHistogram(Graph1313);
   
   gre->Draw("p");
   
	
	Double_t s1i_t_x[] = {0.01,0.01, 0.03,0.03,0.06,0.06,
		0.1,0.1,0.2,0.2,0.35,0.35,0.7,0.7};
	
	Double_t ds1i_t[]={0.010,0.014,0.012,0.011,0.006,0.015};
	Double_t s1i_t_y[] = {s1i_o_s,s1i_o_s+ds1i_t[0],s1i_o_s+ds1i_t[0], 
		s1i_o_s+ds1i_t[1], s1i_o_s+ds1i_t[1],s1i_o_s+ds1i_t[2], s1i_o_s+ds1i_t[2],
		s1i_o_s+ds1i_t[3], s1i_o_s+ds1i_t[3],s1i_o_s+ds1i_t[4], s1i_o_s+ds1i_t[4],
		s1i_o_s+ds1i_t[5], s1i_o_s+ds1i_t[5],s1i_o_s};
	
	TPolyLine *s1iline = new TPolyLine(14,s1i_t_x,s1i_t_y,"");
	s1iline->SetFillColor(2);
	s1iline->Draw("fsame");
	
	Double_t ds1i_t2[]={0.010,0.016,0.009,0.013,0.013,0.013};
	Double_t s1i_t_y2[] = {s1i_o_s2,s1i_o_s2+ds1i_t2[0],s1i_o_s2+ds1i_t2[0], 
		s1i_o_s2+ds1i_t2[1], s1i_o_s2+ds1i_t2[1], s1i_o_s2+ds1i_t2[2], s1i_o_s2+ds1i_t2[2],
		s1i_o_s2+ds1i_t2[3], s1i_o_s2+ds1i_t2[3],s1i_o_s2+ds1i_t2[4],s1i_o_s2+ds1i_t2[4],
		s1i_o_s2+ds1i_t2[5], s1i_o_s2+ds1i_t2[5],s1i_o_s2};
	
	
	TPolyLine *s1iline2 = new TPolyLine(14,s1i_t_x,s1i_t_y2,"");
	s1iline2->SetFillColor(4);
	s1iline2->SetFillStyle(0);
	s1iline2->Draw("f");
	
	
	
   gre = new TGraphErrors(6);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,0.020761,-0.225);
   gre->SetPointError(0,0,0.062);
   gre->SetPoint(1,0.04794,-0.231);
   gre->SetPointError(1,0,0.063);
   gre->SetPoint(2,0.084792,-0.193);
   gre->SetPointError(2,0,0.069);
   gre->SetPoint(3,0.156805,-0.249);
   gre->SetPointError(3,0,0.059);
   gre->SetPoint(4,0.278879,-0.256);
   gre->SetPointError(4,0,0.08);
   gre->SetPoint(5,0.491061,-0.158);
   gre->SetPointError(5,0,0.115);
   
   TH1F *Graph1515 = new TH1F("Graph1515","Graph",100,0.0186849,0.538091);
   Graph1515->SetMinimum(-0.3653);
   Graph1515->SetMaximum(-0.0137);
   Graph1515->SetDirectory(0);
   Graph1515->SetStats(0);
   gre->SetHistogram(Graph1515);
   
   gre->Draw("p");
   
 
   
   TLegend *leg = new TLegend(0.07,0.79,0.83,0.99,NULL,"b1NDC");
   leg->SetBorderSize(0);
   leg->SetTextColor(4);
   leg->SetTextFont(13);
   leg->SetTextSize(18);
   leg->SetLineColor(0);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("NULL","2006-2007","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(2);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextAlign(12);
   entry->SetTextColor(1);
   entry=leg->AddEntry("NULL","JHEP11 (2009) 083","p");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(4);
   entry->SetMarkerStyle(26);
   entry->SetMarkerSize(0.85);
   entry->SetTextAlign(12);
   entry->SetTextColor(1);
   leg->Draw();
   pad1_2->Modified();
   pad1->cd();
  
// ------------>Primitives in pad: pad1_6
   pad1_6 = new TPad("pad1_6", "pad1_6",0.25,0.475,0.5,0.7);
   pad1_6->Draw();
   pad1_6->cd();
   pad1_6->Range(-2.045757,-0.45,-0.09691001,0.3);
   pad1_6->SetFillStyle(4000);
   pad1_6->SetBorderMode(0);
   pad1_6->SetBorderSize(0);
   pad1_6->SetLogx();
   pad1_6->SetLeftMargin(0);
   pad1_6->SetRightMargin(0);
   pad1_6->SetTopMargin(0);
   pad1_6->SetBottomMargin(0);
   pad1_6->SetFrameFillColor(0);
   pad1_6->SetFrameFillStyle(0);
   pad1_6->SetFrameBorderMode(0);
   pad1_6->SetFrameFillStyle(0);
   pad1_6->SetFrameBorderMode(0);
   
   TH1F *hframe__6__6 = new TH1F("hframe__6__6","",21,0.007,0.8);
   hframe__6__6->SetMinimum(-0.475);
   hframe__6__6->SetMaximum(0.3);
   hframe__6__6->SetDirectory(0);
   hframe__6__6->SetStats(0);
   hframe__6__6->GetXaxis()->SetTitle("-t_{c} (GeV^{2})");
   hframe__6__6->GetXaxis()->SetNdivisions(505);
   hframe__6__6->GetXaxis()->SetLabelSize(0.1);
   hframe__6__6->GetXaxis()->SetTitleSize(0.1);
   hframe__6__6->GetXaxis()->SetTitleOffset(1.01);
   hframe__6__6->GetYaxis()->SetNdivisions(205);
   hframe__6__6->Draw(" ");
   line = new TLine(0,0,0.8,0);
   line->SetLineStyle(2);
   line->Draw();
   
   gre = new TGraphErrors(6);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(21);
   gre->SetPoint(0,0.018761,0.0308845);
   gre->SetPointError(0,0,0.0508846);
   gre->SetPoint(1,0.04394,-0.024383);
   gre->SetPointError(1,0,0.0523552);
   gre->SetPoint(2,0.078792,-0.00975083);
   gre->SetPointError(2,0,0.0564055);
   gre->SetPoint(3,0.142805,0.00683326);
   gre->SetPointError(3,0,0.0491803);
   gre->SetPoint(4,0.260879,0.0857849);
   gre->SetPointError(4,0,0.0660323);
   gre->SetPoint(5,0.466061,-0.111135);
   gre->SetPointError(5,0,0.094872);
   
   TH1F *Graph1717 = new TH1F("Graph1717","Graph",100,0.0168849,0.510791);
   Graph1717->SetMinimum(-0.2417894);
   Graph1717->SetMaximum(0.1875996);
   Graph1717->SetDirectory(0);
   Graph1717->SetStats(0);
   gre->SetHistogram(Graph1717);
   
   gre->Draw("p");
   
	Double_t ds1d_t[]={0.003,0.006,0.005,0.003,0.003,0.024};
	Double_t s1d_t_y[] = {s1d_o_s,s1d_o_s+ds1d_t[0],s1d_o_s+ds1d_t[0], 
		s1d_o_s+ds1d_t[1], s1d_o_s+ds1d_t[1],s1d_o_s+ds1d_t[2], s1d_o_s+ds1d_t[2],
		s1d_o_s+ds1d_t[3], s1d_o_s+ds1d_t[3],s1d_o_s+ds1d_t[4], s1d_o_s+ds1d_t[4],
		s1d_o_s+ds1d_t[5], s1d_o_s+ds1d_t[5],s1d_o_s};
	
	TPolyLine *s1dline = new TPolyLine(14,s1i_t_x,s1d_t_y,"");
	s1dline->SetFillColor(2);
	s1dline->Draw("fsame");
	
	Double_t ds1d_t2[]={0.007,0.010,0.011,0.008,0.015,0.010};
	Double_t s1d_t_y2[] = {s1d_o_s2,s1d_o_s2+ds1d_t2[0],s1d_o_s2+ds1d_t2[0], 
		s1d_o_s2+ds1d_t2[1], s1d_o_s2+ds1d_t2[1], s1d_o_s2+ds1d_t2[2], s1d_o_s2+ds1d_t2[2],
		s1d_o_s2+ds1d_t2[3], s1d_o_s2+ds1d_t2[3],s1d_o_s2+ds1d_t2[4],s1d_o_s2+ds1d_t2[4],
		s1d_o_s2+ds1d_t2[5], s1d_o_s2+ds1d_t2[5],s1d_o_s2};
	
	
	TPolyLine *s1dline2 = new TPolyLine(14,s1i_t_x,s1d_t_y2,"");
	s1dline2->SetFillColor(4);
	s1dline2->SetFillStyle(0);
	s1dline2->Draw("f");
   
   gre = new TGraphErrors(6);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,0.020761,0.095);
   gre->SetPointError(0,0,0.062);
   gre->SetPoint(1,0.04794,0.091);
   gre->SetPointError(1,0,0.062);
   gre->SetPoint(2,0.084792,-0.051);
   gre->SetPointError(2,0,0.069);
   gre->SetPoint(3,0.156805,0.02);
   gre->SetPointError(3,0,0.058);
   gre->SetPoint(4,0.278879,0.126);
   gre->SetPointError(4,0,0.079);
   gre->SetPoint(5,0.491061,-0.101);
   gre->SetPointError(5,0,0.114);
   
   TH1F *Graph1919 = new TH1F("Graph1919","Graph",100,0.0186849,0.538091);
   Graph1919->SetMinimum(-0.257);
   Graph1919->SetMaximum(0.247);
   Graph1919->SetDirectory(0);
   Graph1919->SetStats(0);
   gre->SetHistogram(Graph1919);
   
      
   gre->Draw("p");
   pad1_6->Modified();
   pad1->cd();
  
// ------------>Primitives in pad: pad1_10
   pad1_10 = new TPad("pad1_10", "pad1_10",0.25,0.25,0.5,0.475);
   pad1_10->Draw();
   pad1_10->cd();
   pad1_10->Range(-2.045757,-0.45,-0.09691001,0.25);
   pad1_10->SetFillStyle(4000);
   pad1_10->SetBorderMode(0);
   pad1_10->SetBorderSize(0);
   pad1_10->SetLogx();
   pad1_10->SetLeftMargin(0);
   pad1_10->SetRightMargin(0);
   pad1_10->SetTopMargin(0);
   pad1_10->SetBottomMargin(0);
   pad1_10->SetFrameFillColor(0);
   pad1_10->SetFrameFillStyle(0);
   pad1_10->SetFrameBorderMode(0);
   pad1_10->SetFrameFillStyle(0);
   pad1_10->SetFrameBorderMode(0);
   
   TH1F *hframe__7__7 = new TH1F("hframe__7__7","",21,0.007,0.8);
   hframe__7__7->SetMinimum(-0.475);
   hframe__7__7->SetMaximum(0.25);
   hframe__7__7->SetDirectory(0);
   hframe__7__7->SetStats(0);
   hframe__7__7->GetXaxis()->SetTitle("-t_{c} (GeV^{2})");
   hframe__7__7->GetXaxis()->SetNdivisions(505);
   hframe__7__7->GetXaxis()->SetLabelSize(0.1);
   hframe__7__7->GetXaxis()->SetTitleSize(0.1);
   hframe__7__7->GetXaxis()->SetTitleOffset(1.01);
   hframe__7__7->GetYaxis()->SetNdivisions(205);
   hframe__7__7->Draw(" ");
   line = new TLine(0,0,0.8,0);
   line->SetLineStyle(2);
   line->Draw();
   
   gre = new TGraphErrors(6);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(21);
   gre->SetPoint(0,0.018761,-0.0319219);
   gre->SetPointError(0,0,0.0509085);
   gre->SetPoint(1,0.04394,0.062113);
   gre->SetPointError(1,0,0.0520705);
   gre->SetPoint(2,0.078792,0.0385765);
   gre->SetPointError(2,0,0.0557136);
   gre->SetPoint(3,0.142805,0.00712064);
   gre->SetPointError(3,0,0.048639);
   gre->SetPoint(4,0.260879,-0.0352889);
   gre->SetPointError(4,0,0.0659248);
   gre->SetPoint(5,0.466061,-0.0555367);
   gre->SetPointError(5,0,0.0957602);
   
   TH1F *Graph2121 = new TH1F("Graph2121","Graph",100,0.0168849,0.510791);
   Graph2121->SetMinimum(-0.1778449);
   Graph2121->SetMaximum(0.1407315);
   Graph2121->SetDirectory(0);
   Graph2121->SetStats(0);
   gre->SetHistogram(Graph2121);
   
   gre->Draw("p");
   
	Double_t ds2_t[]={0.003,0.002,0.006,0.008,0.008,0.026};
	Double_t s2_t_y[] = {s2_o_s,s2_o_s+ds2_t[0],s2_o_s+ds2_t[0], 
		s2_o_s+ds2_t[1], s2_o_s+ds2_t[1],s2_o_s+ds2_t[2], s2_o_s+ds2_t[2],
		s2_o_s+ds2_t[3], s2_o_s+ds2_t[3],s2_o_s+ds2_t[4], s2_o_s+ds2_t[4],
		s2_o_s+ds2_t[5], s2_o_s+ds2_t[5],s2_o_s};
	
	TPolyLine *s2line = new TPolyLine(14,s1i_t_x,s2_t_y,"");
	s2line->SetFillColor(2);
	s2line->Draw("fsame");
	
	Double_t ds2_t2[]={0.006,0.012,0.006,0.012,0.013,0.025};
	Double_t s2_t_y2[] = {s2_o_s2,s2_o_s2+ds2_t2[0],s2_o_s2+ds2_t2[0], 
		s2_o_s2+ds2_t2[1], s2_o_s2+ds2_t2[1], s2_o_s2+ds2_t2[2], s2_o_s2+ds2_t2[2],
		s2_o_s2+ds2_t2[3], s2_o_s2+ds2_t2[3],s2_o_s2+ds2_t2[4],s2_o_s2+ds2_t2[4],
		s2_o_s2+ds2_t2[5], s2_o_s2+ds2_t2[5],s2_o_s2};
	
	
	TPolyLine *s2line2 = new TPolyLine(14,s1i_t_x,s2_t_y2,"");
	s2line2->SetFillColor(4);
	s2line2->SetFillStyle(0);
	s2line2->Draw("f");
	
	
	
    gre = new TGraphErrors(6);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,0.020761,0.057);
   gre->SetPointError(0,0,0.061);
   gre->SetPoint(1,0.04794,-0.039);
   gre->SetPointError(1,0,0.061);
   gre->SetPoint(2,0.084792,-0.063);
   gre->SetPointError(2,0,0.068);
   gre->SetPoint(3,0.156805,-0.041);
   gre->SetPointError(3,0,0.058);
   gre->SetPoint(4,0.278879,-0.065);
   gre->SetPointError(4,0,0.08);
   gre->SetPoint(5,0.491061,-0.201);
   gre->SetPointError(5,0,0.116);
   
   TH1F *Graph2323 = new TH1F("Graph2323","Graph",100,0.0186849,0.538091);
   Graph2323->SetMinimum(-0.3605);
   Graph2323->SetMaximum(0.1615);
   Graph2323->SetDirectory(0);
   Graph2323->SetStats(0);
   gre->SetHistogram(Graph2323);
   
     
   gre->Draw("p");
   pad1_10->Modified();
   pad1->cd();
  
// ------------>Primitives in pad: pad1_14
   pad1_14 = new TPad("pad1_14", "pad1_14",0.25,0,0.5,0.25);
   pad1_14->Draw();
   pad1_14->cd();
   pad1_14->Range(-2.154902,-0.4617876,-0.09691001,0.45);
   pad1_14->SetFillStyle(4000);
   pad1_14->SetBorderMode(0);
   pad1_14->SetBorderSize(0);
   pad1_14->SetLogx();
   pad1_14->SetLeftMargin(0);
   pad1_14->SetRightMargin(0);
   pad1_14->SetTopMargin(0);
   pad1_14->SetBottomMargin(0.506464);
   pad1_14->SetFrameFillColor(0);
   pad1_14->SetFrameFillStyle(0);
   pad1_14->SetFrameBorderMode(0);
   pad1_14->SetFrameFillStyle(0);
   pad1_14->SetFrameBorderMode(0);
   
   TH1F *hframe__8__8 = new TH1F("hframe__8__8","",21,0.007,0.8);
   hframe__8__8->SetMinimum(0);
   hframe__8__8->SetMaximum(0.45);
   hframe__8__8->SetDirectory(0);
   hframe__8__8->SetStats(0);
   hframe__8__8->GetXaxis()->SetTitle("-t [GeV^{2}]");
   hframe__8__8->GetXaxis()->CenterTitle(true);
   hframe__8__8->GetXaxis()->SetNdivisions(205);
   hframe__8__8->GetXaxis()->SetLabelFont(63);
   hframe__8__8->GetXaxis()->SetLabelOffset(0.02);
   hframe__8__8->GetXaxis()->SetLabelSize(25);
   hframe__8__8->GetXaxis()->SetTitleSize(30);
   hframe__8__8->GetXaxis()->SetTitleOffset(5.5);
   hframe__8__8->GetXaxis()->SetTitleFont(63);
   hframe__8__8->GetYaxis()->SetNdivisions(205);
   hframe__8__8->Draw(" ");
   line = new TLine(0,0,0.8,0);
   line->SetLineStyle(2);
   line->Draw();
   
   graph = new TGraph(7);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetMarkerStyle(20);
   graph->SetPoint(0,-99,10);
   graph->SetPoint(1,0.018761,0.047498);
   graph->SetPoint(2,0.04394,0.074583);
   graph->SetPoint(3,0.078792,0.11115);
   graph->SetPoint(4,0.142805,0.158666);
   graph->SetPoint(5,0.260879,0.233569);
   graph->SetPoint(6,0.466061,0.338914);
   
   TH1F *Graph_Graph_Graph22 = new TH1F("Graph_Graph_Graph22","Graph",100,0.01041267,10.41267);
   Graph_Graph_Graph22->SetMinimum(0);
   Graph_Graph_Graph22->SetMaximum(10.99525);
   Graph_Graph_Graph22->SetDirectory(0);
   Graph_Graph_Graph22->SetStats(0);
   graph->SetHistogram(Graph_Graph_Graph22);
   
   graph->Draw("p");
   pad1_14->Modified();
   pad1->cd();
  
// ------------>Primitives in pad: pad1_3
   pad1_3 = new TPad("pad1_3", "pad1_3",0.5,0.7,0.75,1);
   pad1_3->Draw();
   pad1_3->cd();
   pad1_3->Range(-1.39794,-0.65,-0.4814861,0.25);
   pad1_3->SetFillStyle(4000);
   pad1_3->SetBorderMode(0);
   pad1_3->SetBorderSize(0);
   pad1_3->SetLogx();
   pad1_3->SetLeftMargin(0);
   pad1_3->SetRightMargin(0);
   pad1_3->SetTopMargin(0);
   pad1_3->SetBottomMargin(0);
   pad1_3->SetFrameFillColor(0);
   pad1_3->SetFrameFillStyle(0);
   pad1_3->SetFrameBorderMode(0);
   pad1_3->SetFrameFillStyle(0);
   pad1_3->SetFrameBorderMode(0);
   
   TH1F *hframe__9__9 = new TH1F("hframe__9__9","",20,0.04,0.33);
   hframe__9__9->SetMinimum(-0.69);
   hframe__9__9->SetMaximum(0.25);
   hframe__9__9->SetDirectory(0);
   hframe__9__9->SetStats(0);
   hframe__9__9->GetXaxis()->SetTitle("x_{Bj}");
   hframe__9__9->GetXaxis()->SetNdivisions(505);
   hframe__9__9->GetXaxis()->SetLabelSize(0.1);
   hframe__9__9->GetXaxis()->SetTitleSize(0.1);
   hframe__9__9->GetXaxis()->SetTitleOffset(1.01);
   hframe__9__9->GetYaxis()->SetNdivisions(205);
   hframe__9__9->Draw(" ");
   line = new TLine(-0.1,0,0.33,0);
   line->SetLineStyle(2);
   line->Draw();
   
   gre = new TGraphErrors(6);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(21);
   gre->SetPoint(0,0.04907,-0.237217);
   gre->SetPointError(0,0,0.0504378);
   gre->SetPoint(1,0.069647,-0.235237);
   gre->SetPointError(1,0,0.049526);
   gre->SetPoint(2,0.089392,-0.262885);
   gre->SetPointError(2,0,0.0565062);
   gre->SetPoint(3,0.113598,-0.222827);
   gre->SetPointError(3,0,0.0585154);
   gre->SetPoint(4,0.157213,-0.21552);
   gre->SetPointError(4,0,0.0630175);
   gre->SetPoint(5,0.245365,-0.113055);
   gre->SetPointError(5,0,0.110134);
   
   TH1F *Graph2525 = new TH1F("Graph2525","Graph",100,0.0294405,0.2649945);
   Graph2525->SetMinimum(-0.3510382);
   Graph2525->SetMaximum(0.02872602);
   Graph2525->SetDirectory(0);
   Graph2525->SetStats(0);
   gre->SetHistogram(Graph2525);
   
   gre->Draw("p");
   
	
	Double_t s1i_x_x[] = {0.042,0.042,0.06,0.06,0.08,0.08,0.1,0.1,0.13,0.13,0.2,0.2,0.3,0.3};
	
	Double_t ds1i_x[]={0.076,0.047,0.033,0.030,0.013,0.021};
	Double_t s1i_x_y[] = {s1i_o_s,s1i_o_s+ds1i_x[0],s1i_o_s+ds1i_x[0], 
		s1i_o_s+ds1i_x[1], s1i_o_s+ds1i_x[1],s1i_o_s+ds1i_x[2], s1i_o_s+ds1i_x[2],
		s1i_o_s+ds1i_x[3], s1i_o_s+ds1i_x[3],s1i_o_s+ds1i_x[4], s1i_o_s+ds1i_x[4],
		s1i_o_s+ds1i_x[5], s1i_o_s+ds1i_x[5],s1i_o_s};
	
	TPolyLine *s1iline2 = new TPolyLine(14,s1i_x_x,s1i_x_y,"");
	s1iline2->SetFillColor(2);
	s1iline2->Draw("fsame");
	
	Double_t ds1i_x2[]={0.067,0.034,0.018,0.032,0.023,0.005};
	Double_t s1i_x_y2[] = {s1i_o_s2,s1i_o_s2+ds1i_x2[0],s1i_o_s2+ds1i_x2[0], 
		s1i_o_s2+ds1i_x2[1], s1i_o_s2+ds1i_x2[1], s1i_o_s2+ds1i_x2[2], s1i_o_s2+ds1i_x2[2],
		s1i_o_s2+ds1i_x2[3], s1i_o_s2+ds1i_x2[3],s1i_o_s2+ds1i_x2[4],s1i_o_s2+ds1i_x2[4],
		s1i_o_s2+ds1i_x2[5], s1i_o_s2+ds1i_x2[5],s1i_o_s2};
	
	
	TPolyLine *s1iline2x = new TPolyLine(14,s1i_x_x,s1i_x_y2,"");
	s1iline2x->SetFillColor(4);
	s1iline2x->SetFillStyle(0);
	s1iline2x->Draw("f");
	
   gre = new TGraphErrors(6);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,0.05107,-0.248);
   gre->SetPointError(0,0,0.06);
   gre->SetPoint(1,0.073647,-0.191);
   gre->SetPointError(1,0,0.059);
   gre->SetPoint(2,0.095392,-0.215);
   gre->SetPointError(2,0,0.069);
   gre->SetPoint(3,0.121598,-0.248);
   gre->SetPointError(3,0,0.071);
   gre->SetPoint(4,0.167213,-0.244);
   gre->SetPointError(4,0,0.077);
   gre->SetPoint(5,0.257365,-0.04);
   gre->SetPointError(5,0,0.139);
   
   TH1F *Graph2727 = new TH1F("Graph2727","Graph",100,0.0304405,0.2779945);
   Graph2727->SetMinimum(-0.363);
   Graph2727->SetMaximum(0.141);
   Graph2727->SetDirectory(0);
   Graph2727->SetStats(0);
   gre->SetHistogram(Graph2727);
   
   gre->Draw("p");
  
   pad1_3->Modified();
   pad1->cd();
  
// ------------>Primitives in pad: pad1_7
   pad1_7 = new TPad("pad1_7", "pad1_7",0.5,0.475,0.75,0.7);
   pad1_7->Draw();
   pad1_7->cd();
   pad1_7->Range(-1.39794,-0.45,-0.4814861,0.3);
   pad1_7->SetFillStyle(4000);
   pad1_7->SetBorderMode(0);
   pad1_7->SetBorderSize(0);
   pad1_7->SetLogx();
   pad1_7->SetLeftMargin(0);
   pad1_7->SetRightMargin(0);
   pad1_7->SetTopMargin(0);
   pad1_7->SetBottomMargin(0);
   pad1_7->SetFrameFillColor(0);
   pad1_7->SetFrameFillStyle(0);
   pad1_7->SetFrameBorderMode(0);
   pad1_7->SetFrameFillStyle(0);
   pad1_7->SetFrameBorderMode(0);
   
   TH1F *hframe__10__10 = new TH1F("hframe__10__10","",20,0.04,0.33);
   hframe__10__10->SetMinimum(-0.475);
   hframe__10__10->SetMaximum(0.3);
   hframe__10__10->SetDirectory(0);
   hframe__10__10->SetStats(0);
   hframe__10__10->GetXaxis()->SetTitle("x_{Bj}");
   hframe__10__10->GetXaxis()->SetNdivisions(505);
   hframe__10__10->GetXaxis()->SetLabelSize(0.1);
   hframe__10__10->GetXaxis()->SetTitleSize(0.1);
   hframe__10__10->GetXaxis()->SetTitleOffset(1.01);
   hframe__10__10->GetYaxis()->SetNdivisions(205);
   hframe__10__10->Draw(" ");
   line = new TLine(-0.1,0,0.33,0);
   line->SetLineStyle(2);
   line->Draw();
   
   gre = new TGraphErrors(6);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(21);
   gre->SetPoint(0,0.04907,0.00152516);
   gre->SetPointError(0,0,0.05039);
   gre->SetPoint(1,0.069647,0.0104439);
   gre->SetPointError(1,0,0.049586);
   gre->SetPoint(2,0.089392,0.0693852);
   gre->SetPointError(2,0,0.0560484);
   gre->SetPoint(3,0.113598,-0.0151861);
   gre->SetPointError(3,0,0.0583353);
   gre->SetPoint(4,0.157213,0.014061);
   gre->SetPointError(4,0,0.0630538);
   gre->SetPoint(5,0.245365,-0.111221);
   gre->SetPointError(5,0,0.110097);
   
   TH1F *Graph2929 = new TH1F("Graph2929","Graph",100,0.0294405,0.2649945);
   Graph2929->SetMinimum(-0.2559932);
   Graph2929->SetMaximum(0.1601088);
   Graph2929->SetDirectory(0);
   Graph2929->SetStats(0);
   gre->SetHistogram(Graph2929);
   
   gre->Draw("p");
   
	Double_t ds1d_x[]={0.005,0.004,0.004,0.007,0.006,0.017};
	Double_t s1d_x_y[] = {s1d_o_s,s1d_o_s+ds1d_x[0],s1d_o_s+ds1d_x[0], 
		s1d_o_s+ds1d_x[1], s1d_o_s+ds1d_x[1],s1d_o_s+ds1d_x[2], s1d_o_s+ds1d_x[2],
		s1d_o_s+ds1d_x[3], s1d_o_s+ds1d_x[3],s1d_o_s+ds1d_x[4], s1d_o_s+ds1d_x[4],
		s1d_o_s+ds1d_x[5], s1d_o_s+ds1d_x[5],s1d_o_s};
	
	TPolyLine *s1dlinex = new TPolyLine(14,s1i_x_x,s1d_x_y,"");
	s1dlinex->SetFillColor(2);
	s1dlinex->Draw("fsame");
	
	Double_t ds1d_x2[]={0.011,0.007,0.014,0.016,0.016,0.048};
	Double_t s1d_x_y2[] = {s1d_o_s2,s1d_o_s2+ds1d_x2[0],s1d_o_s2+ds1d_x2[0], 
		s1d_o_s2+ds1d_x2[1], s1d_o_s2+ds1d_x2[1], s1d_o_s2+ds1d_x2[2], s1d_o_s2+ds1d_x2[2],
		s1d_o_s2+ds1d_x2[3], s1d_o_s2+ds1d_x2[3],s1d_o_s2+ds1d_x2[4],s1d_o_s2+ds1d_x2[4],
		s1d_o_s2+ds1d_x2[5], s1d_o_s2+ds1d_x2[5],s1d_o_s2};
	
	
	TPolyLine *s1dline2x = new TPolyLine(14,s1i_x_x,s1d_x_y2,"");
	s1dline2x->SetFillColor(4);
	s1dline2x->SetFillStyle(0);
	s1dline2x->Draw("f");
	
     
   gre = new TGraphErrors(6);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,0.05107,0.087);
   gre->SetPointError(0,0,0.059);
   gre->SetPoint(1,0.073647,0.023);
   gre->SetPointError(1,0,0.067);
   gre->SetPoint(2,0.095392,0.026);
   gre->SetPointError(2,0,0.064);
   gre->SetPoint(3,0.121598,0.033);
   gre->SetPointError(3,0,0.068);
   gre->SetPoint(4,0.167213,0.066);
   gre->SetPointError(4,0,0.075);
   gre->SetPoint(5,0.257365,-0.196);
   gre->SetPointError(5,0,0.093);
   
   TH1F *Graph3131 = new TH1F("Graph3131","Graph",100,0.0304405,0.2779945);
   Graph3131->SetMinimum(-0.3325);
   Graph3131->SetMaximum(0.1895);
   Graph3131->SetDirectory(0);
   Graph3131->SetStats(0);
   gre->SetHistogram(Graph3131);
   
     
   gre->Draw("p");
   pad1_7->Modified();
   pad1->cd();
  
// ------------>Primitives in pad: pad1_11
   pad1_11 = new TPad("pad1_11", "pad1_11",0.5,0.25,0.75,0.475);
   pad1_11->Draw();
   pad1_11->cd();
   pad1_11->Range(-1.39794,-0.45,-0.4814861,0.25);
   pad1_11->SetFillStyle(4000);
   pad1_11->SetBorderMode(0);
   pad1_11->SetBorderSize(0);
   pad1_11->SetLogx();
   pad1_11->SetLeftMargin(0);
   pad1_11->SetRightMargin(0);
   pad1_11->SetTopMargin(0);
   pad1_11->SetBottomMargin(0);
   pad1_11->SetFrameFillColor(0);
   pad1_11->SetFrameFillStyle(0);
   pad1_11->SetFrameBorderMode(0);
   pad1_11->SetFrameFillStyle(0);
   pad1_11->SetFrameBorderMode(0);
   
   TH1F *hframe__11__11 = new TH1F("hframe__11__11","",20,0.04,0.33);
   hframe__11__11->SetMinimum(-0.475);
   hframe__11__11->SetMaximum(0.25);
   hframe__11__11->SetDirectory(0);
   hframe__11__11->SetStats(0);
   hframe__11__11->GetXaxis()->SetTitle("x_{Bj}");
   hframe__11__11->GetXaxis()->SetNdivisions(505);
   hframe__11__11->GetXaxis()->SetLabelSize(0.1);
   hframe__11__11->GetXaxis()->SetTitleSize(0.1);
   hframe__11__11->GetXaxis()->SetTitleOffset(1.01);
   hframe__11__11->GetYaxis()->SetNdivisions(205);
   hframe__11__11->Draw(" ");
   line = new TLine(-0.1,0,0.33,0);
   line->SetLineStyle(2);
   line->Draw();
   
   gre = new TGraphErrors(6);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(21);
   gre->SetPoint(0,0.04907,-0.0643547);
   gre->SetPointError(0,0,0.0509798);
   gre->SetPoint(1,0.069647,0.0242121);
   gre->SetPointError(1,0,0.0494592);
   gre->SetPoint(2,0.089392,0.0278678);
   gre->SetPointError(2,0,0.0558765);
   gre->SetPoint(3,0.113598,-0.0123599);
   gre->SetPointError(3,0,0.0591896);
   gre->SetPoint(4,0.157213,0.0461591);
   gre->SetPointError(4,0,0.0611341);
   gre->SetPoint(5,0.245365,0.0456434);
   gre->SetPointError(5,0,0.101895);
   
   TH1F *Graph3333 = new TH1F("Graph3333","Graph",100,0.0294405,0.2649945);
   Graph3333->SetMinimum(-0.1416218);
   Graph3333->SetMaximum(0.1738257);
   Graph3333->SetDirectory(0);
   Graph3333->SetStats(0);
   gre->SetHistogram(Graph3333);
   
   gre->Draw("p");
  
	Double_t ds2_x[]={0.010,0.012,0.007,0.010,0.010,0.015};
	Double_t s2_x_y[] = {s2_o_s,s2_o_s+ds2_x[0],s2_o_s+ds2_x[0], 
		s2_o_s+ds2_x[1], s2_o_s+ds2_x[1],s2_o_s+ds2_x[2], s2_o_s+ds2_x[2],
		s2_o_s+ds2_x[3], s2_o_s+ds2_x[3],s2_o_s+ds2_x[4], s2_o_s+ds2_x[4],
		s2_o_s+ds2_x[5], s2_o_s+ds2_x[5],s2_o_s};
	
	TPolyLine *s2linex = new TPolyLine(14,s1i_x_x,s2_x_y,"");
	s2linex->SetFillColor(2);
	s2linex->Draw("fsame");
	
	Double_t ds2_x2[]={0.008,0.003,0.018,0.010,0.012,0.022};
	Double_t s2_x_y2[] = {s2_o_s2,s2_o_s2+ds2_x2[0],s2_o_s2+ds2_x2[0], 
		s2_o_s2+ds2_x2[1], s2_o_s2+ds2_x2[1],s2_o_s2+ds2_x2[2],s2_o_s2+ds2_x2[2],
		s2_o_s2+ds2_x2[3], s2_o_s2+ds2_x2[3],s2_o_s2+ds2_x2[4],s2_o_s2+ds2_x2[4],
		s2_o_s2+ds2_x2[5], s2_o_s2+ds2_x2[5],s2_o_s2};
	
	
	TPolyLine *s2line2x = new TPolyLine(14,s1i_x_x,s2_x_y2,"");
	s2line2x->SetFillColor(4);
	s2line2x->SetFillStyle(0);
	s2line2x->Draw("f");
	
	
	
     
   gre = new TGraphErrors(6);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,0.05107,-0.028);
   gre->SetPointError(0,0,0.059);
   gre->SetPoint(1,0.073647,0.011);
   gre->SetPointError(1,0,0.057);
   gre->SetPoint(2,0.095392,0.046);
   gre->SetPointError(2,0,0.068);
   gre->SetPoint(3,0.121598,-0.039);
   gre->SetPointError(3,0,0.072);
   gre->SetPoint(4,0.167213,-0.229);
   gre->SetPointError(4,0,0.076);
   gre->SetPoint(5,0.257365,-0.138);
   gre->SetPointError(5,0,0.132);
   
   TH1F *Graph3535 = new TH1F("Graph3535","Graph",100,0.0304405,0.2779945);
   Graph3535->SetMinimum(-0.3469);
   Graph3535->SetMaximum(0.1559);
   Graph3535->SetDirectory(0);
   Graph3535->SetStats(0);
   gre->SetHistogram(Graph3535);
     
   gre->Draw("p");
   pad1_11->Modified();
   pad1->cd();
  
// ------------>Primitives in pad: pad1_15
   pad1_15 = new TPad("pad1_15", "pad1_15",0.5,0,0.75,0.25);
   pad1_15->Draw();
   pad1_15->cd();
   pad1_15->Range(-1.39794,-0.4617876,-0.4814861,0.45);
   pad1_15->SetFillStyle(4000);
   pad1_15->SetBorderMode(0);
   pad1_15->SetBorderSize(0);
   pad1_15->SetLogx();
   pad1_15->SetLeftMargin(0);
   pad1_15->SetRightMargin(0);
   pad1_15->SetTopMargin(0);
   pad1_15->SetBottomMargin(0.506464);
   pad1_15->SetFrameFillColor(0);
   pad1_15->SetFrameFillStyle(0);
   pad1_15->SetFrameBorderMode(0);
   pad1_15->SetFrameFillStyle(0);
   pad1_15->SetFrameBorderMode(0);
   
   TH1F *hframe__12__12 = new TH1F("hframe__12__12","",20,0.04,0.33);
   hframe__12__12->SetMinimum(0);
   hframe__12__12->SetMaximum(0.45);
   hframe__12__12->SetDirectory(0);
   hframe__12__12->SetStats(0);
   hframe__12__12->GetXaxis()->SetTitle("x_{B}");
   hframe__12__12->GetXaxis()->CenterTitle(true);
   hframe__12__12->GetXaxis()->SetNdivisions(205);
   hframe__12__12->GetXaxis()->SetLabelFont(63);
   hframe__12__12->GetXaxis()->SetLabelOffset(0.02);
   hframe__12__12->GetXaxis()->SetLabelSize(25);
   hframe__12__12->GetXaxis()->SetTitleSize(30);
   hframe__12__12->GetXaxis()->SetTitleOffset(6.25);
   hframe__12__12->GetXaxis()->SetTitleFont(63);
   hframe__12__12->GetYaxis()->SetNdivisions(205);
   hframe__12__12->Draw(" ");
   line = new TLine(-0.1,0,0.33,0);
   line->SetLineStyle(2);
   line->Draw();
   
   graph = new TGraph(7);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetMarkerStyle(20);
   graph->SetPoint(0,-99,10);
   graph->SetPoint(1,0.04907,0.129707);
   graph->SetPoint(2,0.069647,0.115589);
   graph->SetPoint(3,0.089392,0.125639);
   graph->SetPoint(4,0.113598,0.137194);
   graph->SetPoint(5,0.157213,0.152533);
   graph->SetPoint(6,0.245365,0.164045);
   
   TH1F *Graph_Graph_Graph33 = new TH1F("Graph_Graph_Graph33","Graph",100,0.0101699,10.1699);
   Graph_Graph_Graph33->SetMinimum(0);
   Graph_Graph_Graph33->SetMaximum(10.98844);
   Graph_Graph_Graph33->SetDirectory(0);
   Graph_Graph_Graph33->SetStats(0);
   graph->SetHistogram(Graph_Graph_Graph33);
   
   graph->Draw("p");
   pad1_15->Modified();
   pad1->cd();
  
// ------------>Primitives in pad: pad1_4
   pad1_4 = new TPad("pad1_4", "pad1_4",0.75,0.7,1,1);
   pad1_4->Draw();
   pad1_4->cd();
   pad1_4->Range(-0.02227639,-0.65,1.060698,0.25);
   pad1_4->SetFillStyle(4000);
   pad1_4->SetBorderMode(0);
   pad1_4->SetBorderSize(0);
   pad1_4->SetLogx();
   pad1_4->SetLeftMargin(0);
   pad1_4->SetRightMargin(0);
   pad1_4->SetTopMargin(0);
   pad1_4->SetBottomMargin(0);
   pad1_4->SetFrameFillColor(0);
   pad1_4->SetFrameFillStyle(0);
   pad1_4->SetFrameBorderMode(0);
   pad1_4->SetFrameFillStyle(0);
   pad1_4->SetFrameBorderMode(0);
   
   TH1F *hframe__13__13 = new TH1F("hframe__13__13","",10,0.95,11.5);
   hframe__13__13->SetMinimum(-0.69);
   hframe__13__13->SetMaximum(0.25);
   hframe__13__13->SetDirectory(0);
   hframe__13__13->SetStats(0);
   hframe__13__13->GetXaxis()->SetTitle("Q^{2} (GeV^{2})");
   hframe__13__13->GetXaxis()->SetNdivisions(505);
   hframe__13__13->GetXaxis()->SetLabelSize(0.1);
   hframe__13__13->GetXaxis()->SetTitleSize(0.1);
   hframe__13__13->GetXaxis()->SetTitleOffset(1.01);
   hframe__13__13->GetYaxis()->SetNdivisions(205);
   hframe__13__13->Draw(" ");
   line = new TLine(0.95,0,11.5,0);
   line->SetLineStyle(2);
   line->Draw();
   
   gre = new TGraphErrors(6);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(21);
   gre->SetPoint(0,1.19965,-0.192987);
   gre->SetPointError(0,0,0.0507047);
   gre->SetPoint(1,1.59143,-0.311304);
   gre->SetPointError(1,0,0.0551454);
   gre->SetPoint(2,2.08034,-0.223973);
   gre->SetPointError(2,0,0.0508683);
   gre->SetPoint(3,2.76859,-0.218778);
   gre->SetPointError(3,0,0.0536382);
   gre->SetPoint(4,3.76701,-0.179997);
   gre->SetPointError(4,0,0.0626662);
   gre->SetPoint(5,5.85101,-0.199861);
   gre->SetPointError(5,0,0.0739956);
   
   TH1F *Graph3737 = new TH1F("Graph3737","Graph",100,0.734514,6.316146);
   Graph3737->SetMinimum(-0.3913613);
   Graph3737->SetMaximum(-0.09241894);
   Graph3737->SetDirectory(0);
   Graph3737->SetStats(0);
   gre->SetHistogram(Graph3737);
   
   gre->Draw("p");
   
	Double_t s1i_q_x[] = {1.0,1.0,1.4,1.4,1.8,1.8,2.4,2.4,3.2,3.2,4.5,4.5,10.0,10.0};
	
	Double_t ds1i_q[]={0.061,0.062,0.042,0.044,0.031,0.004};
	Double_t s1i_q_y[] = {s1i_o_s,s1i_o_s+ds1i_q[0],s1i_o_s+ds1i_q[0], 
		s1i_o_s+ds1i_q[1], s1i_o_s+ds1i_q[1],s1i_o_s+ds1i_q[2], s1i_o_s+ds1i_q[2],
		s1i_o_s+ds1i_q[3], s1i_o_s+ds1i_q[3],s1i_o_s+ds1i_q[4], s1i_o_s+ds1i_q[4],
		s1i_o_s+ds1i_q[5], s1i_o_s+ds1i_q[5],s1i_o_s};
	
	TPolyLine *s1iline2q = new TPolyLine(14,s1i_q_x,s1i_q_y,"");
	s1iline2q->SetFillColor(2);
	s1iline2q->Draw("fsame");
	
	Double_t ds1i_q2[]={0.055,0.042,0.031,0.041,0.040,0.008};
	Double_t s1i_q_y2[] = {s1i_o_s2,s1i_o_s2+ds1i_q2[0],s1i_o_s2+ds1i_q2[0], 
		s1i_o_s2+ds1i_q2[1], s1i_o_s2+ds1i_q2[1],s1i_o_s2+ds1i_q2[2],s1i_o_s2+ds1i_q2[2],
		s1i_o_s2+ds1i_q2[3], s1i_o_s2+ds1i_q2[3],s1i_o_s2+ds1i_q2[4],s1i_o_s2+ds1i_q2[4],
		s1i_o_s2+ds1i_q2[5], s1i_o_s2+ds1i_q2[5],s1i_o_s2};
	
	
	TPolyLine *s1iline2q = new TPolyLine(14,s1i_q_x,s1i_q_y2,"");
	s1iline2q->SetFillColor(4);
	s1iline2q->SetFillStyle(0);
	s1iline2q->Draw("f");

	gre = new TGraphErrors(6);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,1.24965,-0.247);
   gre->SetPointError(0,0,0.059);
   gre->SetPoint(1,1.67143,-0.151);
   gre->SetPointError(1,0,0.067);
   gre->SetPoint(2,2.18034,-0.23);
   gre->SetPointError(2,0,0.064);
   gre->SetPoint(3,2.90859,-0.425);
   gre->SetPointError(3,0,0.068);
   gre->SetPoint(4,3.94701,-0.102);
   gre->SetPointError(4,0,0.076);
   gre->SetPoint(5,6.10101,-0.129);
   gre->SetPointError(5,0,0.094);
   
   TH1F *Graph3939 = new TH1F("Graph3939","Graph",100,0.764514,6.586146);
   Graph3939->SetMinimum(-0.5397);
   Graph3939->SetMaximum(0.0207);
   Graph3939->SetDirectory(0);
   Graph3939->SetStats(0);
   gre->SetHistogram(Graph3939);
   
     
   gre->Draw("p");
   pad1_4->Modified();
   pad1->cd();
  
// ------------>Primitives in pad: pad1_8
   pad1_8 = new TPad("pad1_8", "pad1_8",0.75,0.475,1,0.7);
   pad1_8->Draw();
   pad1_8->cd();
   pad1_8->Range(-0.02227639,-0.45,1.060698,0.3);
   pad1_8->SetFillStyle(4000);
   pad1_8->SetBorderMode(0);
   pad1_8->SetBorderSize(0);
   pad1_8->SetLogx();
   pad1_8->SetLeftMargin(0);
   pad1_8->SetRightMargin(0);
   pad1_8->SetTopMargin(0);
   pad1_8->SetBottomMargin(0);
   pad1_8->SetFrameFillColor(0);
   pad1_8->SetFrameFillStyle(0);
   pad1_8->SetFrameBorderMode(0);
   pad1_8->SetFrameFillStyle(0);
   pad1_8->SetFrameBorderMode(0);
   
   TH1F *hframe__14__14 = new TH1F("hframe__14__14","",10,0.95,11.5);
   hframe__14__14->SetMinimum(-0.475);
   hframe__14__14->SetMaximum(0.3);
   hframe__14__14->SetDirectory(0);
   hframe__14__14->SetStats(0);
   hframe__14__14->GetXaxis()->SetTitle("Q^{2} (GeV^{2})");
   hframe__14__14->GetXaxis()->SetNdivisions(505);
   hframe__14__14->GetXaxis()->SetLabelSize(0.1);
   hframe__14__14->GetXaxis()->SetTitleSize(0.1);
   hframe__14__14->GetXaxis()->SetTitleOffset(1.01);
   hframe__14__14->GetYaxis()->SetNdivisions(205);
   hframe__14__14->Draw(" ");
   line = new TLine(0.95,0,11.5,0);
   line->SetLineStyle(2);
   line->Draw();
   
   gre = new TGraphErrors(6);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(21);
   gre->SetPoint(0,1.19965,-0.00123263);
   gre->SetPointError(0,0,0.050547);
   gre->SetPoint(1,1.59143,0.0471263);
   gre->SetPointError(1,0,0.055238);
   gre->SetPoint(2,2.08034,0.0140374);
   gre->SetPointError(2,0,0.0507289);
   gre->SetPoint(3,2.76859,0.0103876);
   gre->SetPointError(3,0,0.0536855);
   gre->SetPoint(4,3.76701,-0.0247593);
   gre->SetPointError(4,0,0.0624819);
   gre->SetPoint(5,5.85101,-0.0361114);
   gre->SetPointError(5,0,0.0736173);
   
   TH1F *Graph4141 = new TH1F("Graph4141","Graph",100,0.734514,6.316146);
   Graph4141->SetMinimum(-0.130938);
   Graph4141->SetMaximum(0.1235736);
   Graph4141->SetDirectory(0);
   Graph4141->SetStats(0);
   gre->SetHistogram(Graph4141);
   
   gre->Draw("p");

	
	Double_t ds1d_q[]={0.002,0.011,0.005,0.007,0.006,0.007};
	Double_t s1d_q_y[] = {s1d_o_s,s1d_o_s+ds1d_q[0],s1d_o_s+ds1d_q[0], 
		s1d_o_s+ds1d_q[1], s1d_o_s+ds1d_q[1],s1d_o_s+ds1d_q[2], s1d_o_s+ds1d_q[2],
		s1d_o_s+ds1d_q[3], s1d_o_s+ds1d_q[3],s1d_o_s+ds1d_q[4], s1d_o_s+ds1d_q[4],
		s1d_o_s+ds1d_q[5], s1d_o_s+ds1d_q[5],s1d_o_s};
	
	TPolyLine *s1dlineq = new TPolyLine(14,s1i_q_x,s1d_q_y,"");
	s1dlineq->SetFillColor(2);
	s1dlineq->Draw("fsame");
	
	Double_t ds1d_q2[]={0.010,0.016,0.013,0.015,0.012,0.013};
	Double_t s1d_q_y2[] = {s1d_o_s2,s1d_o_s2+ds1d_q2[0],s1d_o_s2+ds1d_q2[0], 
		s1d_o_s2+ds1d_q2[1], s1d_o_s2+ds1d_q2[1],s1d_o_s2+ds1d_q2[2],s1d_o_s2+ds1d_q2[2],
		s1d_o_s2+ds1d_q2[3], s1d_o_s2+ds1d_q2[3],s1d_o_s2+ds1d_q2[4],s1d_o_s2+ds1d_q2[4],
		s1d_o_s2+ds1d_q2[5], s1d_o_s2+ds1d_q2[5],s1d_o_s2};
	
	
	TPolyLine *s1dline2q = new TPolyLine(14,s1i_q_x,s1d_q_y2,"");
	s1dline2q->SetFillColor(4);
	s1dline2q->SetFillStyle(0);
	s1dline2q->Draw("f");
	
      
   gre = new TGraphErrors(6);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,1.24965,0.078);
   gre->SetPointError(0,0,0.059);
   gre->SetPoint(1,1.67143,0.034);
   gre->SetPointError(1,0,0.067);
   gre->SetPoint(2,2.18034,0.052);
   gre->SetPointError(2,0,0.064);
   gre->SetPoint(3,2.90859,0.212);
   gre->SetPointError(3,0,0.068);
   gre->SetPoint(4,3.94701,-0.097);
   gre->SetPointError(4,0,0.075);
   gre->SetPoint(5,6.10101,-0.125);
   gre->SetPointError(5,0,0.093);
   
   TH1F *Graph4343 = new TH1F("Graph4343","Graph",100,0.764514,6.586146);
   Graph4343->SetMinimum(-0.2678);
   Graph4343->SetMaximum(0.3298);
   Graph4343->SetDirectory(0);
   Graph4343->SetStats(0);
   gre->SetHistogram(Graph4343);
     
   gre->Draw("p");
   pad1_8->Modified();
   pad1->cd();
  
// ------------>Primitives in pad: pad1_12
   pad1_12 = new TPad("pad1_12", "pad1_12",0.75,0.25,1,0.475);
   pad1_12->Draw();
   pad1_12->cd();
   pad1_12->Range(-0.02227639,-0.45,1.060698,0.25);
   pad1_12->SetFillStyle(4000);
   pad1_12->SetBorderMode(0);
   pad1_12->SetBorderSize(0);
   pad1_12->SetLogx();
   pad1_12->SetLeftMargin(0);
   pad1_12->SetRightMargin(0);
   pad1_12->SetTopMargin(0);
   pad1_12->SetBottomMargin(0);
   pad1_12->SetFrameFillColor(0);
   pad1_12->SetFrameFillStyle(0);
   pad1_12->SetFrameBorderMode(0);
   pad1_12->SetFrameFillStyle(0);
   pad1_12->SetFrameBorderMode(0);
   
   TH1F *hframe__15__15 = new TH1F("hframe__15__15","",10,0.95,11.5);
   hframe__15__15->SetMinimum(-0.475);
   hframe__15__15->SetMaximum(0.25);
   hframe__15__15->SetDirectory(0);
   hframe__15__15->SetStats(0);
   hframe__15__15->GetXaxis()->SetTitle("Q^{2} (GeV^{2})");
   hframe__15__15->GetXaxis()->SetNdivisions(505);
   hframe__15__15->GetXaxis()->SetLabelSize(0.1);
   hframe__15__15->GetXaxis()->SetTitleSize(0.1);
   hframe__15__15->GetXaxis()->SetTitleOffset(1.01);
   hframe__15__15->GetYaxis()->SetNdivisions(205);
   hframe__15__15->Draw(" ");
   line = new TLine(0.95,0,11.5,0);
   line->SetLineStyle(2);
   line->Draw();
   
   gre = new TGraphErrors(6);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(21);
   gre->SetPoint(0,1.19965,-0.0204741);
   gre->SetPointError(0,0,0.0507211);
   gre->SetPoint(1,1.59143,-0.0214012);
   gre->SetPointError(1,0,0.0544075);
   gre->SetPoint(2,2.08034,0.0154407);
   gre->SetPointError(2,0,0.0527967);
   gre->SetPoint(3,2.76859,0.0276075);
   gre->SetPointError(3,0,0.0485652);
   gre->SetPoint(4,3.76701,-0.015856);
   gre->SetPointError(4,0,0.0621564);
   gre->SetPoint(5,5.85101,0.0689734);
   gre->SetPointError(5,0,0.071021);
   
   TH1F *Graph4545 = new TH1F("Graph4545","Graph",100,0.734514,6.316146);
   Graph4545->SetMinimum(-0.09981308);
   Graph4545->SetMaximum(0.1617951);
   Graph4545->SetDirectory(0);
   Graph4545->SetStats(0);
   gre->SetHistogram(Graph4545);
   
   gre->Draw("p");
   
	
	Double_t ds2_q[]={0.010,0.005,0.008,0.006,0.008,0.013};
	Double_t s2_q_y[] = {s2_o_s,s2_o_s+ds2_q[0],s2_o_s+ds2_q[0], 
		s2_o_s+ds2_q[1], s2_o_s+ds2_q[1],s2_o_s+ds2_q[2], s2_o_s+ds2_q[2],
		s2_o_s+ds2_q[3], s2_o_s+ds2_q[3],s2_o_s+ds2_q[4], s2_o_s+ds2_q[4],
		s2_o_s+ds2_q[5], s2_o_s+ds2_q[5],s2_o_s};
	
	TPolyLine *s2lineq = new TPolyLine(14,s1i_q_x,s2_q_y,"");
	s2lineq->SetFillColor(2);
	s2lineq->Draw("fsame");
	
	Double_t ds2_q2[]={0.005,0.004,0.009,0.011,0.003,0.009};
	Double_t s2_q_y2[] = {s2_o_s2,s2_o_s2+ds2_q2[0],s2_o_s2+ds2_q2[0], 
		s2_o_s2+ds2_q2[1], s2_o_s2+ds2_q2[1],s2_o_s2+ds2_q2[2],s2_o_s2+ds2_q2[2],
		s2_o_s2+ds2_q2[3], s2_o_s2+ds2_q2[3],s2_o_s2+ds2_q2[4],s2_o_s2+ds2_q2[4],
		s2_o_s2+ds2_q2[5], s2_o_s2+ds2_q2[5],s2_o_s2};
	
	
	TPolyLine *s2line2q = new TPolyLine(14,s1i_q_x,s2_q_y2,"");
	s2line2q->SetFillColor(4);
	s2line2q->SetFillStyle(0);
	s2line2q->Draw("f");
	
   
   gre = new TGraphErrors(6);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,1.24965,-0.034);
   gre->SetPointError(0,0,0.058);
   gre->SetPoint(1,1.67143,0.042);
   gre->SetPointError(1,0,0.066);
   gre->SetPoint(2,2.18034,-0.047);
   gre->SetPointError(2,0,0.062);
   gre->SetPoint(3,2.90859,0.034);
   gre->SetPointError(3,0,0.07);
   gre->SetPoint(4,3.94701,-0.116);
   gre->SetPointError(4,0,0.076);
   gre->SetPoint(5,6.10101,-0.161);
   gre->SetPointError(5,0,0.092);
   
   TH1F *Graph4747 = new TH1F("Graph4747","Graph",100,0.764514,6.586146);
   Graph4747->SetMinimum(-0.2891);
   Graph4747->SetMaximum(0.1441);
   Graph4747->SetDirectory(0);
   Graph4747->SetStats(0);
   gre->SetHistogram(Graph4747);
   
     
   gre->Draw("p");
   pad1_12->Modified();
   pad1->cd();
  
// ------------>Primitives in pad: pad1_16
   pad1_16 = new TPad("pad1_16", "pad1_16",0.75,0,1,0.25);
   pad1_16->Draw();
   pad1_16->cd();
   pad1_16->Range(-0.02227639,-0.4617876,1.060698,0.45);
   pad1_16->SetFillStyle(4000);
   pad1_16->SetBorderMode(0);
   pad1_16->SetBorderSize(0);
   pad1_16->SetLogx();
   pad1_16->SetLeftMargin(0);
   pad1_16->SetRightMargin(0);
   pad1_16->SetTopMargin(0);
   pad1_16->SetBottomMargin(0.506464);
   pad1_16->SetFrameFillColor(0);
   pad1_16->SetFrameFillStyle(0);
   pad1_16->SetFrameBorderMode(0);
   pad1_16->SetFrameFillStyle(0);
   pad1_16->SetFrameBorderMode(0);
   
   TH1F *hframe__16__16 = new TH1F("hframe__16__16","",10,0.95,11.5);
   hframe__16__16->SetMinimum(0);
   hframe__16__16->SetMaximum(0.45);
   hframe__16__16->SetDirectory(0);
   hframe__16__16->SetStats(0);
   hframe__16__16->GetXaxis()->SetTitle("Q^{2} [GeV^{2}]");
   hframe__16__16->GetXaxis()->CenterTitle(true);
   hframe__16__16->GetXaxis()->SetNdivisions(205);
   hframe__16__16->GetXaxis()->SetLabelFont(63);
   hframe__16__16->GetXaxis()->SetLabelOffset(0.02);
   hframe__16__16->GetXaxis()->SetLabelSize(25);
   hframe__16__16->GetXaxis()->SetTitleSize(30);
   hframe__16__16->GetXaxis()->SetTitleOffset(5.5);
   hframe__16__16->GetXaxis()->SetTitleFont(63);
   hframe__16__16->GetYaxis()->SetNdivisions(205);
   hframe__16__16->Draw(" ");
   line = new TLine(0.95,0,11.5,0);
   line->SetLineStyle(2);
   line->Draw();
   
   graph = new TGraph(7);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetMarkerStyle(20);
   graph->SetPoint(0,-99,10);
   graph->SetPoint(1,1.19965,0.100706);
   graph->SetPoint(2,1.59143,0.115763);
   graph->SetPoint(3,2.08034,0.13094);
   graph->SetPoint(4,2.76859,0.143032);
   graph->SetPoint(5,3.76701,0.158857);
   graph->SetPoint(6,5.85101,0.181278);
   
   TH1F *Graph_Graph_Graph44 = new TH1F("Graph_Graph_Graph44","Graph",100,0.01633611,16.33611);
   Graph_Graph_Graph44->SetMinimum(0);
   Graph_Graph_Graph44->SetMaximum(10.98993);
   Graph_Graph_Graph44->SetDirectory(0);
   Graph_Graph_Graph44->SetStats(0);
   graph->SetHistogram(Graph_Graph_Graph44);
   
   graph->Draw("p");
   pad1_16->Modified();
   pad1->cd();
   pad1->Modified();
   combined->cd();
   combined->Modified();
   combined->cd();
   combined->SetSelected(combined);
}
