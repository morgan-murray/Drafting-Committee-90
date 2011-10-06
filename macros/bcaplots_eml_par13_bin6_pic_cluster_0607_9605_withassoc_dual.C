{
//=========Macro generated from canvas: combined/
//=========  (Thu Oct  6 15:04:47 2011) by ROOT version5.28/00b
   TCanvas *combined = new TCanvas("combined", "",0,22,1200,756);
   gStyle->SetOptStat(0);
   combined->SetHighLightColor(2);
   combined->Range(0,0,1,1);
   combined->SetFillColor(0);
   combined->SetFillStyle(4000);
   combined->SetBorderMode(0);
   combined->SetBorderSize(2);
   combined->SetLeftMargin(0.35);
   combined->SetRightMargin(0.05);
   combined->SetBottomMargin(0.425);
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
   pad1->SetTopMargin(0.0225095);
   pad1->SetFrameFillStyle(0);
   pad1->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: pad1_1
   pad1_1 = new TPad("pad1_1", "pad1_1",0,0.825,0.25,1);
   pad1_1->Draw();
   pad1_1->cd();
   pad1_1->Range(-2,-0.15,2,0.15);
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
   
   TH1F *hframe__1 = new TH1F("hframe__1","",3,0,2);
   hframe__1->SetMinimum(-0.15);
   hframe__1->SetMaximum(0.15);
   hframe__1->SetDirectory(0);
   hframe__1->SetStats(0);
   hframe__1->GetXaxis()->SetBinLabel(2,"Integrated Overall");
   hframe__1->GetXaxis()->SetBit(TAxis::kLabelsHori);
   hframe__1->GetXaxis()->SetLabelOffset(0.015);
   hframe__1->GetXaxis()->SetLabelSize(0.01);
   hframe__1->GetXaxis()->SetTickLength(0);
   hframe__1->GetYaxis()->SetTitle("A_{C}^{cos (0#phi)}");
   hframe__1->GetYaxis()->CenterTitle(true);
   hframe__1->GetYaxis()->SetNdivisions(205);
   hframe__1->GetYaxis()->SetLabelFont(63);
   hframe__1->GetYaxis()->SetLabelOffset(0.05);
   hframe__1->GetYaxis()->SetLabelSize(25);
   hframe__1->GetYaxis()->SetTitleSize(35);
   hframe__1->GetYaxis()->SetTitleOffset(5);
   hframe__1->GetYaxis()->SetTitleFont(63);
   hframe__1->Draw(" ");
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
   gre->SetPoint(0,1,-0.0242448);
   gre->SetPointError(0,0,0.00394803);
   
   TH1F *Graph1 = new TH1F("Graph1","Graph",100,0.9,2.1);
   Graph1->SetMinimum(-0.02898244);
   Graph1->SetMaximum(-0.01950716);
   Graph1->SetDirectory(0);
   Graph1->SetStats(0);
   gre->SetHistogram(Graph1);
   
   gre->Draw("p");
   
   gre = new TGraphErrors(1);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(21);
   gre->SetPoint(0,1,-0.0242448);
   gre->SetPointError(0,0,0.0112338);
   
   TH1F *Graph2 = new TH1F("Graph2","Graph",100,0.9,2.1);
   Graph2->SetMinimum(-0.03772536);
   Graph2->SetMaximum(-0.01076424);
   Graph2->SetDirectory(0);
   Graph2->SetStats(0);
   gre->SetHistogram(Graph2);
   
   gre->Draw("p");
   
   gre = new TGraphErrors(1);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,1.2,-0.02);
   gre->SetPointError(0,0,0.006);
   
   TH1F *Graph3 = new TH1F("Graph3","Graph",100,1.1,2.3);
   Graph3->SetMinimum(-0.0272);
   Graph3->SetMaximum(-0.0128);
   Graph3->SetDirectory(0);
   Graph3->SetStats(0);
   gre->SetHistogram(Graph3);
   
   gre->Draw("p");
   
   gre = new TGraphErrors(1);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,1.2,-0.02);
   gre->SetPointError(0,0,0.01);
   
   TH1F *Graph4 = new TH1F("Graph4","Graph",100,1.1,2.3);
   Graph4->SetMinimum(-0.032);
   Graph4->SetMaximum(-0.008);
   Graph4->SetDirectory(0);
   Graph4->SetStats(0);
   gre->SetHistogram(Graph4);
   
   gre->Draw("p");
   pad1_1->Modified();
   pad1->cd();
  
// ------------>Primitives in pad: pad1_5
   pad1_5 = new TPad("pad1_5", "pad1_5",0,0.5625,0.25,0.825);
   pad1_5->Draw();
   pad1_5->cd();
   pad1_5->Range(-2,-0.075,2,0.35);
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
   
   TH1F *hframe__2 = new TH1F("hframe__2","",3,0,2);
   hframe__2->SetMinimum(-0.075);
   hframe__2->SetMaximum(0.35);
   hframe__2->SetDirectory(0);
   hframe__2->SetStats(0);
   hframe__2->GetXaxis()->SetBinLabel(2,"Integrated Over All Kinematics");
   hframe__2->GetXaxis()->SetBit(TAxis::kLabelsHori);
   hframe__2->GetXaxis()->SetLabelOffset(0.015);
   hframe__2->GetXaxis()->SetLabelSize(0.01);
   hframe__2->GetXaxis()->SetTitleSize(0.01);
   hframe__2->GetXaxis()->SetTickLength(0);
   hframe__2->GetYaxis()->SetTitle("A_{C}^{cos #phi}");
   hframe__2->GetYaxis()->CenterTitle(true);
   hframe__2->GetYaxis()->SetNdivisions(205);
   hframe__2->GetYaxis()->SetLabelFont(63);
   hframe__2->GetYaxis()->SetLabelOffset(0.05);
   hframe__2->GetYaxis()->SetLabelSize(25);
   hframe__2->GetYaxis()->SetTitleSize(35);
   hframe__2->GetYaxis()->SetTitleOffset(5);
   hframe__2->GetYaxis()->SetTitleFont(63);
   hframe__2->Draw(" ");
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
   gre->SetPoint(0,1,0.0322863);
   gre->SetPointError(0,0,0.00554457);
   
   TH1F *Graph5 = new TH1F("Graph5","Graph",100,0.9,2.1);
   Graph5->SetMinimum(0.02563282);
   Graph5->SetMaximum(0.03893978);
   Graph5->SetDirectory(0);
   Graph5->SetStats(0);
   gre->SetHistogram(Graph5);
   
   gre->Draw("p");
   
   gre = new TGraphErrors(1);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(21);
   gre->SetPoint(0,1,0.0322863);
   gre->SetPointError(0,0,0.00604985);
   
   TH1F *Graph6 = new TH1F("Graph6","Graph",100,0.9,2.1);
   Graph6->SetMinimum(0.02502648);
   Graph6->SetMaximum(0.03954612);
   Graph6->SetDirectory(0);
   Graph6->SetStats(0);
   gre->SetHistogram(Graph6);
   
   gre->Draw("p");
   
   gre = new TGraphErrors(1);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,1.2,0.055);
   gre->SetPointError(0,0,0.009);
   
   TH1F *Graph7 = new TH1F("Graph7","Graph",100,1.1,2.3);
   Graph7->SetMinimum(0.0442);
   Graph7->SetMaximum(0.0658);
   Graph7->SetDirectory(0);
   Graph7->SetStats(0);
   gre->SetHistogram(Graph7);
   
   gre->Draw("p");
   
   gre = new TGraphErrors(1);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,1.2,0.055);
   gre->SetPointError(0,0,0.00984886);
   
   TH1F *Graph8 = new TH1F("Graph8","Graph",100,1.1,2.3);
   Graph8->SetMinimum(0.04318137);
   Graph8->SetMaximum(0.06681863);
   Graph8->SetDirectory(0);
   Graph8->SetStats(0);
   gre->SetHistogram(Graph8);
   
   gre->Draw("p");
   pad1_5->Modified();
   pad1->cd();
  
// ------------>Primitives in pad: pad1_9
   pad1_9 = new TPad("pad1_9", "pad1_9",0,0.3875,0.25,0.5625);
   pad1_9->Draw();
   pad1_9->cd();
   pad1_9->Range(-2,-0.15,2,0.15);
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
   
   TH1F *hframe__3 = new TH1F("hframe__3","",3,0,2);
   hframe__3->SetMinimum(-0.15);
   hframe__3->SetMaximum(0.15);
   hframe__3->SetDirectory(0);
   hframe__3->SetStats(0);
   hframe__3->GetXaxis()->SetBinLabel(2,"Overall");
   hframe__3->GetXaxis()->SetBit(TAxis::kLabelsHori);
   hframe__3->GetXaxis()->SetLabelOffset(0.015);
   hframe__3->GetXaxis()->SetLabelSize(0.01);
   hframe__3->GetXaxis()->SetTitleSize(0.01);
   hframe__3->GetXaxis()->SetTickLength(0);
   hframe__3->GetYaxis()->SetTitle("A_{C}^{cos (2#phi)}");
   hframe__3->GetYaxis()->CenterTitle(true);
   hframe__3->GetYaxis()->SetNdivisions(205);
   hframe__3->GetYaxis()->SetLabelFont(63);
   hframe__3->GetYaxis()->SetLabelOffset(0.05);
   hframe__3->GetYaxis()->SetLabelSize(25);
   hframe__3->GetYaxis()->SetTitleSize(35);
   hframe__3->GetYaxis()->SetTitleOffset(5);
   hframe__3->GetYaxis()->SetTitleFont(63);
   hframe__3->Draw(" ");
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
   gre->SetPoint(0,1,-0.00378943);
   gre->SetPointError(0,0,0.00521686);
   
   TH1F *Graph9 = new TH1F("Graph9","Graph",100,0.9,2.1);
   Graph9->SetMinimum(-0.01004966);
   Graph9->SetMaximum(0.002470802);
   Graph9->SetDirectory(0);
   Graph9->SetStats(0);
   gre->SetHistogram(Graph9);
   
   gre->Draw("p");
   
   gre = new TGraphErrors(1);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,1.2,-0.002);
   gre->SetPointError(0,0,0.009);
   
   TH1F *Graph10 = new TH1F("Graph10","Graph",100,1.1,2.3);
   Graph10->SetMinimum(-0.0128);
   Graph10->SetMaximum(0.0088);
   Graph10->SetDirectory(0);
   Graph10->SetStats(0);
   gre->SetHistogram(Graph10);
   
   gre->Draw("p");
   
   gre = new TGraphErrors(1);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(21);
   gre->SetPoint(0,1,-0.00378943);
   gre->SetPointError(0,0,0.0152016);
   
   TH1F *Graph11 = new TH1F("Graph11","Graph",100,0.9,2.1);
   Graph11->SetMinimum(-0.02203135);
   Graph11->SetMaximum(0.01445249);
   Graph11->SetDirectory(0);
   Graph11->SetStats(0);
   gre->SetHistogram(Graph11);
   
   gre->Draw("p");
   
   gre = new TGraphErrors(1);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,1.2,-0.002);
   gre->SetPointError(0,0,0.0158114);
   
   TH1F *Graph12 = new TH1F("Graph12","Graph",100,1.1,2.3);
   Graph12->SetMinimum(-0.02097368);
   Graph12->SetMaximum(0.01697368);
   Graph12->SetDirectory(0);
   Graph12->SetStats(0);
   gre->SetHistogram(Graph12);
   
   gre->Draw("p");
   pad1_9->Modified();
   pad1->cd();
  
// ------------>Primitives in pad: pad1_13
   pad1_13 = new TPad("pad1_13", "pad1_13",0,0.2125,0.25,0.3875);
   pad1_13->Draw();
   pad1_13->cd();
   pad1_13->Range(-2,-0.15,2,0.15);
   pad1_13->SetFillStyle(4000);
   pad1_13->SetBorderMode(0);
   pad1_13->SetBorderSize(2);
   pad1_13->SetLeftMargin(0.5);
   pad1_13->SetRightMargin(0);
   pad1_13->SetTopMargin(0);
   pad1_13->SetBottomMargin(0);
   pad1_13->SetFrameFillColor(0);
   pad1_13->SetFrameFillStyle(0);
   pad1_13->SetFrameBorderMode(0);
   pad1_13->SetFrameFillStyle(0);
   pad1_13->SetFrameBorderMode(0);
   
   TH1F *hframe__4 = new TH1F("hframe__4","",3,0,2);
   hframe__4->SetMinimum(-0.15);
   hframe__4->SetMaximum(0.15);
   hframe__4->SetDirectory(0);
   hframe__4->SetStats(0);
   hframe__4->GetXaxis()->SetBinLabel(2,"Overall");
   hframe__4->GetXaxis()->SetBit(TAxis::kLabelsHori);
   hframe__4->GetXaxis()->SetLabelOffset(0.015);
   hframe__4->GetXaxis()->SetLabelSize(0.15);
   hframe__4->GetXaxis()->SetTitleSize(0.5);
   hframe__4->GetXaxis()->SetTickLength(0);
   hframe__4->GetYaxis()->SetTitle("A_{C}^{cos (3#phi)}");
   hframe__4->GetYaxis()->CenterTitle(true);
   hframe__4->GetYaxis()->SetNdivisions(205);
   hframe__4->GetYaxis()->SetLabelFont(63);
   hframe__4->GetYaxis()->SetLabelOffset(0.05);
   hframe__4->GetYaxis()->SetLabelSize(25);
   hframe__4->GetYaxis()->SetTitleSize(35);
   hframe__4->GetYaxis()->SetTitleOffset(5);
   hframe__4->GetYaxis()->SetTitleFont(63);
   hframe__4->Draw(" ");
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
   gre->SetPoint(0,1,0.000147288);
   gre->SetPointError(0,0,0.00522285);
   
   TH1F *Graph13 = new TH1F("Graph13","Graph",100,0.9,2.1);
   Graph13->SetMinimum(-0.006120132);
   Graph13->SetMaximum(0.006414708);
   Graph13->SetDirectory(0);
   Graph13->SetStats(0);
   gre->SetHistogram(Graph13);
   
   gre->Draw("p");
   
   gre = new TGraphErrors(1);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(21);
   gre->SetPoint(0,1,0.000147288);
   gre->SetPointError(0,0,0.00631753);
   
   TH1F *Graph14 = new TH1F("Graph14","Graph",100,0.9,2.1);
   Graph14->SetMinimum(-0.007433748);
   Graph14->SetMaximum(0.007728324);
   Graph14->SetDirectory(0);
   Graph14->SetStats(0);
   gre->SetHistogram(Graph14);
   
   gre->Draw("p");
   
   gre = new TGraphErrors(1);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,1.2,-0.004);
   gre->SetPointError(0,0,0.009);
   
   TH1F *Graph15 = new TH1F("Graph15","Graph",100,1.1,2.3);
   Graph15->SetMinimum(-0.0148);
   Graph15->SetMaximum(0.0068);
   Graph15->SetDirectory(0);
   Graph15->SetStats(0);
   gre->SetHistogram(Graph15);
   
   gre->Draw("p");
   
   gre = new TGraphErrors(1);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,1.2,-0.004);
   gre->SetPointError(0,0,0.0108167);
   
   TH1F *Graph16 = new TH1F("Graph16","Graph",100,1.1,2.3);
   Graph16->SetMinimum(-0.01698004);
   Graph16->SetMaximum(0.00898004);
   Graph16->SetDirectory(0);
   Graph16->SetStats(0);
   gre->SetHistogram(Graph16);
   
   gre->Draw("p");
   pad1_13->Modified();
   pad1->cd();
  
// ------------>Primitives in pad: pad1_17
   pad1_17 = new TPad("pad1_17", "pad1_17",0,0,0.25,0.2125);
   pad1_17->Draw();
   pad1_17->cd();
   pad1_17->Range(-2,-0.4126094,2,0.45);
   pad1_17->SetFillStyle(4000);
   pad1_17->SetBorderMode(0);
   pad1_17->SetBorderSize(2);
   pad1_17->SetLeftMargin(0.5);
   pad1_17->SetRightMargin(0);
   pad1_17->SetTopMargin(0);
   pad1_17->SetBottomMargin(0.478327);
   pad1_17->SetFrameFillColor(0);
   pad1_17->SetFrameFillStyle(0);
   pad1_17->SetFrameBorderMode(0);
   pad1_17->SetFrameFillStyle(0);
   pad1_17->SetFrameBorderMode(0);
   
   TH1F *hframe__5 = new TH1F("hframe__5","",3,0,2);
   hframe__5->SetMinimum(0);
   hframe__5->SetMaximum(0.45);
   hframe__5->SetDirectory(0);
   hframe__5->SetStats(0);
   hframe__5->GetXaxis()->SetTitle("overall");
   hframe__5->GetXaxis()->CenterTitle(true);
   hframe__5->GetXaxis()->SetNdivisions(0);
   hframe__5->GetXaxis()->SetLabelFont(63);
   hframe__5->GetXaxis()->SetLabelOffset(0.02);
   hframe__5->GetXaxis()->SetLabelSize(25);
   hframe__5->GetXaxis()->SetTitleSize(30);
   hframe__5->GetXaxis()->SetTitleOffset(5.65);
   hframe__5->GetXaxis()->SetTitleFont(63);
   hframe__5->GetYaxis()->SetTitle("#splitline{Assoc.}{fraction}");
   hframe__5->GetYaxis()->CenterTitle(true);
   hframe__5->GetYaxis()->SetNdivisions(205);
   hframe__5->GetYaxis()->SetLabelFont(63);
   hframe__5->GetYaxis()->SetLabelOffset(0.05);
   hframe__5->GetYaxis()->SetLabelSize(25);
   hframe__5->GetYaxis()->SetTitleSize(28);
   hframe__5->GetYaxis()->SetTitleOffset(6.35);
   hframe__5->GetYaxis()->SetTitleFont(63);
   hframe__5->Draw(" ");
   line = new TLine(0,0,2,0);
   line->SetLineStyle(2);
   line->Draw();
   
   TGraph *graph = new TGraph(1);
   graph->SetName("Graph");
   graph->SetTitle("Graph");
   graph->SetFillColor(1);
   graph->SetMarkerStyle(20);
   graph->SetPoint(0,1,0.132095);
   
   TH1F *Graph_Graph1 = new TH1F("Graph_Graph1","Graph",100,0.9,2.1);
   Graph_Graph1->SetMinimum(0.032095);
   Graph_Graph1->SetMaximum(1.232095);
   Graph_Graph1->SetDirectory(0);
   Graph_Graph1->SetStats(0);
   graph->SetHistogram(Graph_Graph1);
   
   graph->Draw("p");
   pad1_17->Modified();
   pad1->cd();
  
// ------------>Primitives in pad: pad1_2
   pad1_2 = new TPad("pad1_2", "pad1_2",0.25,0.825,0.5,1);
   pad1_2->Draw();
   pad1_2->cd();
   pad1_2->Range(-2.154902,-0.15,-0.09691001,0.15);
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
   
   TH1F *hframe__6 = new TH1F("hframe__6","",21,0.007,0.8);
   hframe__6->SetMinimum(-0.15);
   hframe__6->SetMaximum(0.15);
   hframe__6->SetDirectory(0);
   hframe__6->SetStats(0);
   hframe__6->GetXaxis()->SetTitle("-t_{c} (GeV^{2})");
   hframe__6->GetXaxis()->SetNdivisions(505);
   hframe__6->GetXaxis()->SetLabelSize(0.1);
   hframe__6->GetXaxis()->SetTitleSize(0.1);
   hframe__6->GetXaxis()->SetTitleOffset(1.01);
   hframe__6->GetYaxis()->SetNdivisions(205);
   hframe__6->Draw(" ");
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
   gre->SetPoint(0,0.018761,-0.0136059);
   gre->SetPointError(0,0,0.00874382);
   gre->SetPoint(1,0.04394,-0.00781468);
   gre->SetPointError(1,0,0.00887679);
   gre->SetPoint(2,0.078792,-0.0245737);
   gre->SetPointError(2,0,0.00942597);
   gre->SetPoint(3,0.142805,-0.019126);
   gre->SetPointError(3,0,0.00821442);
   gre->SetPoint(4,0.260879,-0.0420363);
   gre->SetPointError(4,0,0.0111169);
   gre->SetPoint(5,0.466061,-0.0833238);
   gre->SetPointError(5,0,0.0164095);
   
   TH1F *Graph17 = new TH1F("Graph17","Graph",100,0.0168849,0.510791);
   Graph17->SetMinimum(-0.1098128);
   Graph17->SetMaximum(0.01114165);
   Graph17->SetDirectory(0);
   Graph17->SetStats(0);
   gre->SetHistogram(Graph17);
   
   gre->Draw("p");
   
   gre = new TGraphErrors(6);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(21);
   gre->SetPoint(0,0.018761,-0.0136059);
   gre->SetPointError(0,0,0.0111786);
   gre->SetPoint(1,0.04394,-0.00781468);
   gre->SetPointError(1,0,0.0108697);
   gre->SetPoint(2,0.078792,-0.0245737);
   gre->SetPointError(2,0,0.012017);
   gre->SetPoint(3,0.142805,-0.019126);
   gre->SetPointError(3,0,0.0126218);
   gre->SetPoint(4,0.260879,-0.0420363);
   gre->SetPointError(4,0,0.0119647);
   gre->SetPoint(5,0.466061,-0.0833238);
   gre->SetPointError(5,0,0.0170825);
   
   TH1F *Graph18 = new TH1F("Graph18","Graph",100,0.0168849,0.510791);
   Graph18->SetMinimum(-0.1107524);
   Graph18->SetMaximum(0.01340115);
   Graph18->SetDirectory(0);
   Graph18->SetStats(0);
   gre->SetHistogram(Graph18);
   
   gre->Draw("p");
   
   gre = new TGraphErrors(6);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,0.020761,-0.027);
   gre->SetPointError(0,0,0.014);
   gre->SetPoint(1,0.04794,0.001);
   gre->SetPointError(1,0,0.014);
   gre->SetPoint(2,0.084792,0.003);
   gre->SetPointError(2,0,0.015);
   gre->SetPoint(3,0.156805,-0.018);
   gre->SetPointError(3,0,0.013);
   gre->SetPoint(4,0.278879,-0.034);
   gre->SetPointError(4,0,0.018);
   gre->SetPoint(5,0.491061,-0.056);
   gre->SetPointError(5,0,0.029);
   
   TH1F *Graph19 = new TH1F("Graph19","Graph",100,0.0186849,0.538091);
   Graph19->SetMinimum(-0.0953);
   Graph19->SetMaximum(0.0283);
   Graph19->SetDirectory(0);
   Graph19->SetStats(0);
   gre->SetHistogram(Graph19);
   
   gre->Draw("p");
   
   gre = new TGraphErrors(6);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,0.020761,-0.027);
   gre->SetPointError(0,0,0.0166433);
   gre->SetPoint(1,0.04794,0.001);
   gre->SetPointError(1,0,0.0143178);
   gre->SetPoint(2,0.084792,0.003);
   gre->SetPointError(2,0,0.0186011);
   gre->SetPoint(3,0.156805,-0.018);
   gre->SetPointError(3,0,0.0183848);
   gre->SetPoint(4,0.278879,-0.034);
   gre->SetPointError(4,0,0.0189737);
   gre->SetPoint(5,0.491061,-0.056);
   gre->SetPointError(5,0,0.0303645);
   
   TH1F *Graph20 = new TH1F("Graph20","Graph",100,0.0186849,0.538091);
   Graph20->SetMinimum(-0.09716106);
   Graph20->SetMaximum(0.03239766);
   Graph20->SetDirectory(0);
   Graph20->SetStats(0);
   gre->SetHistogram(Graph20);
   
   gre->Draw("p");
   
   TLegend *leg = new TLegend(0.07,0.59,0.83,0.99,NULL,"b1NDC");
   leg->SetBorderSize(0);
   leg->SetTextColor(4);
   leg->SetTextFont(62);
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
   entry->SetMarkerSize(1);
   entry->SetTextAlign(12);
   entry->SetTextColor(1);
   leg->Draw();
   pad1_2->Modified();
   pad1->cd();
  
// ------------>Primitives in pad: pad1_6
   pad1_6 = new TPad("pad1_6", "pad1_6",0.25,0.5625,0.5,0.825);
   pad1_6->Draw();
   pad1_6->cd();
   pad1_6->Range(-2.154902,-0.075,-0.09691001,0.35);
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
   
   TH1F *hframe__7 = new TH1F("hframe__7","",21,0.007,0.8);
   hframe__7->SetMinimum(-0.075);
   hframe__7->SetMaximum(0.35);
   hframe__7->SetDirectory(0);
   hframe__7->SetStats(0);
   hframe__7->GetXaxis()->SetTitle("-t_{c} (GeV^{2})");
   hframe__7->GetXaxis()->SetNdivisions(505);
   hframe__7->GetXaxis()->SetLabelSize(0.1);
   hframe__7->GetXaxis()->SetTitleSize(0.1);
   hframe__7->GetXaxis()->SetTitleOffset(1.01);
   hframe__7->GetYaxis()->SetNdivisions(205);
   hframe__7->Draw(" ");
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
   gre->SetPoint(0,0.018761,0.00604551);
   gre->SetPointError(0,0,0.0121583);
   gre->SetPoint(1,0.04394,0.0164608);
   gre->SetPointError(1,0,0.0123553);
   gre->SetPoint(2,0.078792,0.0297399);
   gre->SetPointError(2,0,0.0132022);
   gre->SetPoint(3,0.142805,0.0358241);
   gre->SetPointError(3,0,0.0115484);
   gre->SetPoint(4,0.260879,0.0782356);
   gre->SetPointError(4,0,0.01569);
   gre->SetPoint(5,0.466061,0.0686442);
   gre->SetPointError(5,0,0.0248084);
   
   TH1F *Graph21 = new TH1F("Graph21","Graph",100,0.0168849,0.510791);
   Graph21->SetMinimum(-0.01611663);
   Graph21->SetMaximum(0.1039294);
   Graph21->SetDirectory(0);
   Graph21->SetStats(0);
   gre->SetHistogram(Graph21);
   
   gre->Draw("p");
   
   gre = new TGraphErrors(6);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(21);
   gre->SetPoint(0,0.018761,0.00604551);
   gre->SetPointError(0,0,0.0124174);
   gre->SetPoint(1,0.04394,0.0164608);
   gre->SetPointError(1,0,0.0187995);
   gre->SetPoint(2,0.078792,0.0297399);
   gre->SetPointError(2,0,0.0184121);
   gre->SetPoint(3,0.142805,0.0358241);
   gre->SetPointError(3,0,0.0181873);
   gre->SetPoint(4,0.260879,0.0782356);
   gre->SetPointError(4,0,0.0327361);
   gre->SetPoint(5,0.466061,0.0686442);
   gre->SetPointError(5,0,0.0658007);
   
   TH1F *Graph22 = new TH1F("Graph22","Graph",100,0.0168849,0.510791);
   Graph22->SetMinimum(-0.02045357);
   Graph22->SetMaximum(0.1485266);
   Graph22->SetDirectory(0);
   Graph22->SetStats(0);
   gre->SetHistogram(Graph22);
   
   gre->Draw("p");
   
   gre = new TGraphErrors(6);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,0.020761,0.018);
   gre->SetPointError(0,0,0.02);
   gre->SetPoint(1,0.04794,-0.007);
   gre->SetPointError(1,0,0.02);
   gre->SetPoint(2,0.084792,0.022);
   gre->SetPointError(2,0,0.022);
   gre->SetPoint(3,0.156805,0.067);
   gre->SetPointError(3,0,0.018);
   gre->SetPoint(4,0.278879,0.16);
   gre->SetPointError(4,0,0.025);
   gre->SetPoint(5,0.491061,0.235);
   gre->SetPointError(5,0,0.043);
   
   TH1F *Graph23 = new TH1F("Graph23","Graph",100,0.0186849,0.538091);
   Graph23->SetMinimum(-0.0575);
   Graph23->SetMaximum(0.3085);
   Graph23->SetDirectory(0);
   Graph23->SetStats(0);
   gre->SetHistogram(Graph23);
   
   gre->Draw("p");
   
   gre = new TGraphErrors(6);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,0.020761,0.018);
   gre->SetPointError(0,0,0.0203961);
   gre->SetPoint(1,0.04794,-0.007);
   gre->SetPointError(1,0,0.0203961);
   gre->SetPoint(2,0.084792,0.022);
   gre->SetPointError(2,0,0.0245967);
   gre->SetPoint(3,0.156805,0.067);
   gre->SetPointError(3,0,0.0216333);
   gre->SetPoint(4,0.278879,0.16);
   gre->SetPointError(4,0,0.0314006);
   gre->SetPoint(5,0.491061,0.235);
   gre->SetPointError(5,0,0.0667083);
   
   TH1F *Graph24 = new TH1F("Graph24","Graph",100,0.0186849,0.538091);
   Graph24->SetMinimum(-0.06030654);
   Graph24->SetMaximum(0.3346187);
   Graph24->SetDirectory(0);
   Graph24->SetStats(0);
   gre->SetHistogram(Graph24);
   
   gre->Draw("p");
   pad1_6->Modified();
   pad1->cd();
  
// ------------>Primitives in pad: pad1_10
   pad1_10 = new TPad("pad1_10", "pad1_10",0.25,0.3875,0.5,0.5625);
   pad1_10->Draw();
   pad1_10->cd();
   pad1_10->Range(-2.154902,-0.15,-0.09691001,0.15);
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
   
   TH1F *hframe__8 = new TH1F("hframe__8","",21,0.007,0.8);
   hframe__8->SetMinimum(-0.15);
   hframe__8->SetMaximum(0.15);
   hframe__8->SetDirectory(0);
   hframe__8->SetStats(0);
   hframe__8->GetXaxis()->SetTitle("-t_{c} (GeV^{2})");
   hframe__8->GetXaxis()->SetNdivisions(505);
   hframe__8->GetXaxis()->SetLabelSize(0.1);
   hframe__8->GetXaxis()->SetTitleSize(0.1);
   hframe__8->GetXaxis()->SetTitleOffset(1.01);
   hframe__8->GetYaxis()->SetNdivisions(205);
   hframe__8->Draw(" ");
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
   gre->SetPoint(0,0.018761,-0.038073);
   gre->SetPointError(0,0,0.0115479);
   gre->SetPoint(1,0.04394,-0.00432385);
   gre->SetPointError(1,0,0.0117493);
   gre->SetPoint(2,0.078792,0.0114987);
   gre->SetPointError(2,0,0.0124697);
   gre->SetPoint(3,0.142805,0.00651952);
   gre->SetPointError(3,0,0.0108424);
   gre->SetPoint(4,0.260879,-0.0160401);
   gre->SetPointError(4,0,0.014616);
   gre->SetPoint(5,0.466061,0.0524867);
   gre->SetPointError(5,0,0.0219359);
   
   TH1F *Graph25 = new TH1F("Graph25","Graph",100,0.0168849,0.510791);
   Graph25->SetMinimum(-0.06202525);
   Graph25->SetMaximum(0.08682695);
   Graph25->SetDirectory(0);
   Graph25->SetStats(0);
   gre->SetHistogram(Graph25);
   
   gre->Draw("p");
   
   gre = new TGraphErrors(6);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(21);
   gre->SetPoint(0,0.018761,-0.038073);
   gre->SetPointError(0,0,0.0115831);
   gre->SetPoint(1,0.04394,-0.00432385);
   gre->SetPointError(1,0,0.0135907);
   gre->SetPoint(2,0.078792,0.0114987);
   gre->SetPointError(2,0,0.0177792);
   gre->SetPoint(3,0.142805,0.00651952);
   gre->SetPointError(3,0,0.0270133);
   gre->SetPoint(4,0.260879,-0.0160401);
   gre->SetPointError(4,0,0.042661);
   gre->SetPoint(5,0.466061,0.0524867);
   gre->SetPointError(5,0,0.045753);
   
   TH1F *Graph26 = new TH1F("Graph26","Graph",100,0.0168849,0.510791);
   Graph26->SetMinimum(-0.07439518);
   Graph26->SetMaximum(0.1139338);
   Graph26->SetDirectory(0);
   Graph26->SetStats(0);
   gre->SetHistogram(Graph26);
   
   gre->Draw("p");
   
   gre = new TGraphErrors(6);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,0.020761,0.008);
   gre->SetPointError(0,0,0.02);
   gre->SetPoint(1,0.04794,-0.004);
   gre->SetPointError(1,0,0.02);
   gre->SetPoint(2,0.084792,0.022);
   gre->SetPointError(2,0,0.022);
   gre->SetPoint(3,0.156805,-0.038);
   gre->SetPointError(3,0,0.018);
   gre->SetPoint(4,0.278879,0.018);
   gre->SetPointError(4,0,0.025);
   gre->SetPoint(5,0.491061,0.041);
   gre->SetPointError(5,0,0.04);
   
   TH1F *Graph27 = new TH1F("Graph27","Graph",100,0.0186849,0.538091);
   Graph27->SetMinimum(-0.0697);
   Graph27->SetMaximum(0.0947);
   Graph27->SetDirectory(0);
   Graph27->SetStats(0);
   gre->SetHistogram(Graph27);
   
   gre->Draw("p");
   
   gre = new TGraphErrors(6);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,0.020761,0.008);
   gre->SetPointError(0,0,0.0215407);
   gre->SetPoint(1,0.04794,-0.004);
   gre->SetPointError(1,0,0.0238537);
   gre->SetPoint(2,0.084792,0.022);
   gre->SetPointError(2,0,0.0255539);
   gre->SetPoint(3,0.156805,-0.038);
   gre->SetPointError(3,0,0.0276586);
   gre->SetPoint(4,0.278879,0.018);
   gre->SetPointError(4,0,0.0488774);
   gre->SetPoint(5,0.491061,0.041);
   gre->SetPointError(5,0,0.0471699);
   
   TH1F *Graph28 = new TH1F("Graph28","Graph",100,0.0186849,0.538091);
   Graph28->SetMinimum(-0.08104145);
   Graph28->SetMaximum(0.1035527);
   Graph28->SetDirectory(0);
   Graph28->SetStats(0);
   gre->SetHistogram(Graph28);
   
   gre->Draw("p");
   pad1_10->Modified();
   pad1->cd();
  
// ------------>Primitives in pad: pad1_14
   pad1_14 = new TPad("pad1_14", "pad1_14",0.25,0.2125,0.5,0.3875);
   pad1_14->Draw();
   pad1_14->cd();
   pad1_14->Range(-2.154902,-0.15,-0.09691001,0.15);
   pad1_14->SetFillStyle(4000);
   pad1_14->SetBorderMode(0);
   pad1_14->SetBorderSize(0);
   pad1_14->SetLogx();
   pad1_14->SetLeftMargin(0);
   pad1_14->SetRightMargin(0);
   pad1_14->SetTopMargin(0);
   pad1_14->SetBottomMargin(0);
   pad1_14->SetFrameFillColor(0);
   pad1_14->SetFrameFillStyle(0);
   pad1_14->SetFrameBorderMode(0);
   pad1_14->SetFrameFillStyle(0);
   pad1_14->SetFrameBorderMode(0);
   
   TH1F *hframe__9 = new TH1F("hframe__9","",21,0.007,0.8);
   hframe__9->SetMinimum(-0.15);
   hframe__9->SetMaximum(0.15);
   hframe__9->SetDirectory(0);
   hframe__9->SetStats(0);
   hframe__9->GetXaxis()->SetTitle("-t_{c} (GeV^{2})");
   hframe__9->GetXaxis()->SetNdivisions(505);
   hframe__9->GetXaxis()->SetLabelSize(0.1);
   hframe__9->GetXaxis()->SetTitleSize(0.1);
   hframe__9->GetXaxis()->SetTitleOffset(1.01);
   hframe__9->GetYaxis()->SetNdivisions(205);
   hframe__9->Draw(" ");
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
   gre->SetPoint(0,0.018761,-0.0223781);
   gre->SetPointError(0,0,0.0115424);
   gre->SetPoint(1,0.04394,0.00344584);
   gre->SetPointError(1,0,0.0117568);
   gre->SetPoint(2,0.078792,-0.0281986);
   gre->SetPointError(2,0,0.0124548);
   gre->SetPoint(3,0.142805,0.0188069);
   gre->SetPointError(3,0,0.0108915);
   gre->SetPoint(4,0.260879,0.0227929);
   gre->SetPointError(4,0,0.0146792);
   gre->SetPoint(5,0.466061,0.0302145);
   gre->SetPointError(5,0,0.0210967);
   
   TH1F *Graph29 = new TH1F("Graph29","Graph",100,0.0168849,0.510791);
   Graph29->SetMinimum(-0.04984986);
   Graph29->SetMaximum(0.06050766);
   Graph29->SetDirectory(0);
   Graph29->SetStats(0);
   gre->SetHistogram(Graph29);
   
   gre->Draw("p");
   
   gre = new TGraphErrors(6);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(21);
   gre->SetPoint(0,0.018761,-0.0223781);
   gre->SetPointError(0,0,0.0121131);
   gre->SetPoint(1,0.04394,0.00344584);
   gre->SetPointError(1,0,0.0126251);
   gre->SetPoint(2,0.078792,-0.0281986);
   gre->SetPointError(2,0,0.0129587);
   gre->SetPoint(3,0.142805,0.0188069);
   gre->SetPointError(3,0,0.0109598);
   gre->SetPoint(4,0.260879,0.0227929);
   gre->SetPointError(4,0,0.0147334);
   gre->SetPoint(5,0.466061,0.0302145);
   gre->SetPointError(5,0,0.0268113);
   
   TH1F *Graph30 = new TH1F("Graph30","Graph",100,0.0168849,0.510791);
   Graph30->SetMinimum(-0.05097561);
   Graph30->SetMaximum(0.06684411);
   Graph30->SetDirectory(0);
   Graph30->SetStats(0);
   gre->SetHistogram(Graph30);
   
   gre->Draw("p");
   
   gre = new TGraphErrors(6);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,0.020761,0.01);
   gre->SetPointError(0,0,0.02);
   gre->SetPoint(1,0.04794,0.004);
   gre->SetPointError(1,0,0.02);
   gre->SetPoint(2,0.084792,-0.015);
   gre->SetPointError(2,0,0.022);
   gre->SetPoint(3,0.156805,-0.019);
   gre->SetPointError(3,0,0.018);
   gre->SetPoint(4,0.278879,-0.005);
   gre->SetPointError(4,0,0.025);
   gre->SetPoint(5,0.491061,0.037);
   gre->SetPointError(5,0,0.038);
   
   TH1F *Graph31 = new TH1F("Graph31","Graph",100,0.0186849,0.538091);
   Graph31->SetMinimum(-0.0482);
   Graph31->SetMaximum(0.0862);
   Graph31->SetDirectory(0);
   Graph31->SetStats(0);
   gre->SetHistogram(Graph31);
   
   gre->Draw("p");
   
   gre = new TGraphErrors(6);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,0.020761,0.01);
   gre->SetPointError(0,0,0.020025);
   gre->SetPoint(1,0.04794,0.004);
   gre->SetPointError(1,0,0.0206155);
   gre->SetPoint(2,0.084792,-0.015);
   gre->SetPointError(2,0,0.0237697);
   gre->SetPoint(3,0.156805,-0.019);
   gre->SetPointError(3,0,0.0184391);
   gre->SetPoint(4,0.278879,-0.005);
   gre->SetPointError(4,0,0.0291548);
   gre->SetPoint(5,0.491061,0.037);
   gre->SetPointError(5,0,0.0429418);
   
   TH1F *Graph32 = new TH1F("Graph32","Graph",100,0.0186849,0.538091);
   Graph32->SetMinimum(-0.05064085);
   Graph32->SetMaximum(0.09181295);
   Graph32->SetDirectory(0);
   Graph32->SetStats(0);
   gre->SetHistogram(Graph32);
   
   gre->Draw("p");
   pad1_14->Modified();
   pad1->cd();
  
// ------------>Primitives in pad: pad1_18
   pad1_18 = new TPad("pad1_18", "pad1_18",0.25,0,0.5,0.2125);
   pad1_18->Draw();
   pad1_18->cd();
   pad1_18->Range(-2.154902,-0.4126094,-0.09691001,0.45);
   pad1_18->SetFillStyle(4000);
   pad1_18->SetBorderMode(0);
   pad1_18->SetBorderSize(0);
   pad1_18->SetLogx();
   pad1_18->SetLeftMargin(0);
   pad1_18->SetRightMargin(0);
   pad1_18->SetTopMargin(0);
   pad1_18->SetBottomMargin(0.478327);
   pad1_18->SetFrameFillColor(0);
   pad1_18->SetFrameFillStyle(0);
   pad1_18->SetFrameBorderMode(0);
   pad1_18->SetFrameFillStyle(0);
   pad1_18->SetFrameBorderMode(0);
   
   TH1F *hframe__10 = new TH1F("hframe__10","",21,0.007,0.8);
   hframe__10->SetMinimum(0);
   hframe__10->SetMaximum(0.45);
   hframe__10->SetDirectory(0);
   hframe__10->SetStats(0);
   hframe__10->GetXaxis()->SetTitle("-t [GeV^{2}]");
   hframe__10->GetXaxis()->CenterTitle(true);
   hframe__10->GetXaxis()->SetNdivisions(205);
   hframe__10->GetXaxis()->SetLabelFont(63);
   hframe__10->GetXaxis()->SetLabelOffset(0.02);
   hframe__10->GetXaxis()->SetLabelSize(25);
   hframe__10->GetXaxis()->SetTitleSize(30);
   hframe__10->GetXaxis()->SetTitleOffset(5.65);
   hframe__10->GetXaxis()->SetTitleFont(63);
   hframe__10->GetYaxis()->SetNdivisions(205);
   hframe__10->Draw(" ");
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
   
   TH1F *Graph_Graph2 = new TH1F("Graph_Graph2","Graph",100,0.01041267,10.41267);
   Graph_Graph2->SetMinimum(0);
   Graph_Graph2->SetMaximum(10.99525);
   Graph_Graph2->SetDirectory(0);
   Graph_Graph2->SetStats(0);
   graph->SetHistogram(Graph_Graph2);
   
   graph->Draw("p");
   pad1_18->Modified();
   pad1->cd();
  
// ------------>Primitives in pad: pad1_3
   pad1_3 = new TPad("pad1_3", "pad1_3",0.5,0.825,0.75,1);
   pad1_3->Draw();
   pad1_3->cd();
   pad1_3->Range(-1.39794,-0.15,-0.4814861,0.15);
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
   
   TH1F *hframe__11 = new TH1F("hframe__11","",20,0.04,0.33);
   hframe__11->SetMinimum(-0.15);
   hframe__11->SetMaximum(0.15);
   hframe__11->SetDirectory(0);
   hframe__11->SetStats(0);
   hframe__11->GetXaxis()->SetTitle("x_{Bj}");
   hframe__11->GetXaxis()->SetNdivisions(505);
   hframe__11->GetXaxis()->SetLabelSize(0.1);
   hframe__11->GetXaxis()->SetTitleSize(0.1);
   hframe__11->GetXaxis()->SetTitleOffset(1.01);
   hframe__11->GetYaxis()->SetNdivisions(205);
   hframe__11->Draw(" ");
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
   gre->SetPoint(0,0.04907,-0.038218);
   gre->SetPointError(0,0,0.00899134);
   gre->SetPoint(1,0.069647,-0.0457888);
   gre->SetPointError(1,0,0.00820135);
   gre->SetPoint(2,0.089392,-0.00364638);
   gre->SetPointError(2,0,0.00980207);
   gre->SetPoint(3,0.113598,-0.0245389);
   gre->SetPointError(3,0,0.00994204);
   gre->SetPoint(4,0.157213,-0.0115871);
   gre->SetPointError(4,0,0.0107219);
   gre->SetPoint(5,0.245365,-0.00916561);
   gre->SetPointError(5,0,0.0182123);
   
   TH1F *Graph33 = new TH1F("Graph33","Graph",100,0.0294405,0.2649945);
   Graph33->SetMinimum(-0.06029383);
   Graph33->SetMaximum(0.01535037);
   Graph33->SetDirectory(0);
   Graph33->SetStats(0);
   gre->SetHistogram(Graph33);
   
   gre->Draw("p");
   
   gre = new TGraphErrors(6);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(21);
   gre->SetPoint(0,0.04907,-0.038218);
   gre->SetPointError(0,0,0.0155006);
   gre->SetPoint(1,0.069647,-0.0457888);
   gre->SetPointError(1,0,0.0147338);
   gre->SetPoint(2,0.089392,-0.00364638);
   gre->SetPointError(2,0,0.0190449);
   gre->SetPoint(3,0.113598,-0.0245389);
   gre->SetPointError(3,0,0.0177832);
   gre->SetPoint(4,0.157213,-0.0115871);
   gre->SetPointError(4,0,0.0128102);
   gre->SetPoint(5,0.245365,-0.00916561);
   gre->SetPointError(5,0,0.0319289);
   
   TH1F *Graph34 = new TH1F("Graph34","Graph",100,0.0294405,0.2649945);
   Graph34->SetMinimum(-0.06885119);
   Graph34->SetMaximum(0.03109188);
   Graph34->SetDirectory(0);
   Graph34->SetStats(0);
   gre->SetHistogram(Graph34);
   
   gre->Draw("p");
   
   gre = new TGraphErrors(6);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,0.05107,-0.043);
   gre->SetPointError(0,0,0.014);
   gre->SetPoint(1,0.073647,-0.014);
   gre->SetPointError(1,0,0.013);
   gre->SetPoint(2,0.095392,-0.048);
   gre->SetPointError(2,0,0.016);
   gre->SetPoint(3,0.121598,0.01);
   gre->SetPointError(3,0,0.017);
   gre->SetPoint(4,0.167213,-0.012);
   gre->SetPointError(4,0,0.018);
   gre->SetPoint(5,0.257365,0.04);
   gre->SetPointError(5,0,0.032);
   
   TH1F *Graph35 = new TH1F("Graph35","Graph",100,0.0304405,0.2779945);
   Graph35->SetMinimum(-0.0776);
   Graph35->SetMaximum(0.0856);
   Graph35->SetDirectory(0);
   Graph35->SetStats(0);
   gre->SetHistogram(Graph35);
   
   gre->Draw("p");
   
   gre = new TGraphErrors(6);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,0.05107,-0.043);
   gre->SetPointError(0,0,0.019799);
   gre->SetPoint(1,0.073647,-0.014);
   gre->SetPointError(1,0,0.0147648);
   gre->SetPoint(2,0.095392,-0.048);
   gre->SetPointError(2,0,0.0212603);
   gre->SetPoint(3,0.121598,0.01);
   gre->SetPointError(3,0,0.0192354);
   gre->SetPoint(4,0.167213,-0.012);
   gre->SetPointError(4,0,0.0216333);
   gre->SetPoint(5,0.257365,0.04);
   gre->SetPointError(5,0,0.0431856);
   
   TH1F *Graph36 = new TH1F("Graph36","Graph",100,0.0304405,0.2779945);
   Graph36->SetMinimum(-0.08450489);
   Graph36->SetMaximum(0.09843019);
   Graph36->SetDirectory(0);
   Graph36->SetStats(0);
   gre->SetHistogram(Graph36);
   
   gre->Draw("p");
   pad1_3->Modified();
   pad1->cd();
  
// ------------>Primitives in pad: pad1_7
   pad1_7 = new TPad("pad1_7", "pad1_7",0.5,0.5625,0.75,0.825);
   pad1_7->Draw();
   pad1_7->cd();
   pad1_7->Range(-1.39794,-0.075,-0.4814861,0.35);
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
   
   TH1F *hframe__12 = new TH1F("hframe__12","",20,0.04,0.33);
   hframe__12->SetMinimum(-0.075);
   hframe__12->SetMaximum(0.35);
   hframe__12->SetDirectory(0);
   hframe__12->SetStats(0);
   hframe__12->GetXaxis()->SetTitle("x_{Bj}");
   hframe__12->GetXaxis()->SetNdivisions(505);
   hframe__12->GetXaxis()->SetLabelSize(0.1);
   hframe__12->GetXaxis()->SetTitleSize(0.1);
   hframe__12->GetXaxis()->SetTitleOffset(1.01);
   hframe__12->GetYaxis()->SetNdivisions(205);
   hframe__12->Draw(" ");
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
   gre->SetPoint(0,0.04907,0.00681218);
   gre->SetPointError(0,0,0.0132675);
   gre->SetPoint(1,0.069647,0.0246253);
   gre->SetPointError(1,0,0.0116136);
   gre->SetPoint(2,0.089392,0.0329835);
   gre->SetPointError(2,0,0.0137858);
   gre->SetPoint(3,0.113598,0.0346602);
   gre->SetPointError(3,0,0.014037);
   gre->SetPoint(4,0.157213,0.0294049);
   gre->SetPointError(4,0,0.0151247);
   gre->SetPoint(5,0.245365,0.0604823);
   gre->SetPointError(5,0,0.0258919);
   
   TH1F *Graph37 = new TH1F("Graph37","Graph",100,0.0294405,0.2649945);
   Graph37->SetMinimum(-0.01573827);
   Graph37->SetMaximum(0.09565715);
   Graph37->SetDirectory(0);
   Graph37->SetStats(0);
   gre->SetHistogram(Graph37);
   
   gre->Draw("p");
   
   gre = new TGraphErrors(6);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(21);
   gre->SetPoint(0,0.04907,0.00681218);
   gre->SetPointError(0,0,0.0184973);
   gre->SetPoint(1,0.069647,0.0246253);
   gre->SetPointError(1,0,0.0177805);
   gre->SetPoint(2,0.089392,0.0329835);
   gre->SetPointError(2,0,0.023421);
   gre->SetPoint(3,0.113598,0.0346602);
   gre->SetPointError(3,0,0.0141811);
   gre->SetPoint(4,0.157213,0.0294049);
   gre->SetPointError(4,0,0.0343174);
   gre->SetPoint(5,0.245365,0.0604823);
   gre->SetPointError(5,0,0.0314627);
   
   TH1F *Graph38 = new TH1F("Graph38","Graph",100,0.0294405,0.2649945);
   Graph38->SetMinimum(-0.02204813);
   Graph38->SetMaximum(0.102308);
   Graph38->SetDirectory(0);
   Graph38->SetStats(0);
   gre->SetHistogram(Graph38);
   
   gre->Draw("p");
   
   gre = new TGraphErrors(6);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,0.05107,0.035);
   gre->SetPointError(0,0,0.021);
   gre->SetPoint(1,0.073647,0.043);
   gre->SetPointError(1,0,0.019);
   gre->SetPoint(2,0.095392,0.064);
   gre->SetPointError(2,0,0.022);
   gre->SetPoint(3,0.121598,0.018);
   gre->SetPointError(3,0,0.024);
   gre->SetPoint(4,0.167213,0.088);
   gre->SetPointError(4,0,0.025);
   gre->SetPoint(5,0.257365,0.041);
   gre->SetPointError(5,0,0.045);
   
   TH1F *Graph39 = new TH1F("Graph39","Graph",100,0.0304405,0.2779945);
   Graph39->SetMinimum(-0.0179);
   Graph39->SetMaximum(0.1249);
   Graph39->SetDirectory(0);
   Graph39->SetStats(0);
   gre->SetHistogram(Graph39);
   
   gre->Draw("p");
   
   gre = new TGraphErrors(6);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,0.05107,0.035);
   gre->SetPointError(0,0,0.0237065);
   gre->SetPoint(1,0.073647,0.043);
   gre->SetPointError(1,0,0.0224722);
   gre->SetPoint(2,0.095392,0.064);
   gre->SetPointError(2,0,0.0325576);
   gre->SetPoint(3,0.121598,0.018);
   gre->SetPointError(3,0,0.0240832);
   gre->SetPoint(4,0.167213,0.088);
   gre->SetPointError(4,0,0.0406079);
   gre->SetPoint(5,0.257365,0.041);
   gre->SetPointError(5,0,0.0471275);
   
   TH1F *Graph40 = new TH1F("Graph40","Graph",100,0.0304405,0.2779945);
   Graph40->SetMinimum(-0.01960104);
   Graph40->SetMaximum(0.1420814);
   Graph40->SetDirectory(0);
   Graph40->SetStats(0);
   gre->SetHistogram(Graph40);
   
   gre->Draw("p");
   pad1_7->Modified();
   pad1->cd();
  
// ------------>Primitives in pad: pad1_11
   pad1_11 = new TPad("pad1_11", "pad1_11",0.5,0.3875,0.75,0.5625);
   pad1_11->Draw();
   pad1_11->cd();
   pad1_11->Range(-1.39794,-0.15,-0.4814861,0.15);
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
   
   TH1F *hframe__13 = new TH1F("hframe__13","",20,0.04,0.33);
   hframe__13->SetMinimum(-0.15);
   hframe__13->SetMaximum(0.15);
   hframe__13->SetDirectory(0);
   hframe__13->SetStats(0);
   hframe__13->GetXaxis()->SetTitle("x_{Bj}");
   hframe__13->GetXaxis()->SetNdivisions(505);
   hframe__13->GetXaxis()->SetLabelSize(0.1);
   hframe__13->GetXaxis()->SetTitleSize(0.1);
   hframe__13->GetXaxis()->SetTitleOffset(1.01);
   hframe__13->GetYaxis()->SetNdivisions(205);
   hframe__13->Draw(" ");
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
   gre->SetPoint(0,0.04907,-0.0260895);
   gre->SetPointError(0,0,0.0118731);
   gre->SetPoint(1,0.069647,-0.0011031);
   gre->SetPointError(1,0,0.0108824);
   gre->SetPoint(2,0.089392,-0.0127091);
   gre->SetPointError(2,0,0.012869);
   gre->SetPoint(3,0.113598,-0.0147638);
   gre->SetPointError(3,0,0.0131746);
   gre->SetPoint(4,0.157213,-0.00296688);
   gre->SetPointError(4,0,0.0141422);
   gre->SetPoint(5,0.245365,0.0687869);
   gre->SetPointError(5,0,0.0241277);
   
   TH1F *Graph41 = new TH1F("Graph41","Graph",100,0.0294405,0.2649945);
   Graph41->SetMinimum(-0.05105032);
   Graph41->SetMaximum(0.1060023);
   Graph41->SetDirectory(0);
   Graph41->SetStats(0);
   gre->SetHistogram(Graph41);
   
   gre->Draw("p");
   
   gre = new TGraphErrors(6);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(21);
   gre->SetPoint(0,0.04907,-0.0260895);
   gre->SetPointError(0,0,0.0176482);
   gre->SetPoint(1,0.069647,-0.0011031);
   gre->SetPointError(1,0,0.0143098);
   gre->SetPoint(2,0.089392,-0.0127091);
   gre->SetPointError(2,0,0.0211428);
   gre->SetPoint(3,0.113598,-0.0147638);
   gre->SetPointError(3,0,0.0145287);
   gre->SetPoint(4,0.157213,-0.00296688);
   gre->SetPointError(4,0,0.0141718);
   gre->SetPoint(5,0.245365,0.0687869);
   gre->SetPointError(5,0,0.0360908);
   
   TH1F *Graph42 = new TH1F("Graph42","Graph",100,0.0294405,0.2649945);
   Graph42->SetMinimum(-0.05859924);
   Graph42->SetMaximum(0.1197392);
   Graph42->SetDirectory(0);
   Graph42->SetStats(0);
   gre->SetHistogram(Graph42);
   
   gre->Draw("p");
   
   gre = new TGraphErrors(6);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,0.05107,0.004);
   gre->SetPointError(0,0,0.019);
   gre->SetPoint(1,0.073647,-0.046);
   gre->SetPointError(1,0,0.019);
   gre->SetPoint(2,0.095392,0.033);
   gre->SetPointError(2,0,0.022);
   gre->SetPoint(3,0.121598,0.024);
   gre->SetPointError(3,0,0.023);
   gre->SetPoint(4,0.167213,0.007);
   gre->SetPointError(4,0,0.025);
   gre->SetPoint(5,0.257365,0.014);
   gre->SetPointError(5,0,0.045);
   
   TH1F *Graph43 = new TH1F("Graph43","Graph",100,0.0304405,0.2779945);
   Graph43->SetMinimum(-0.0774);
   Graph43->SetMaximum(0.0714);
   Graph43->SetDirectory(0);
   Graph43->SetStats(0);
   gre->SetHistogram(Graph43);
   
   gre->Draw("p");
   
   gre = new TGraphErrors(6);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,0.05107,0.004);
   gre->SetPointError(0,0,0.0202485);
   gre->SetPoint(1,0.073647,-0.046);
   gre->SetPointError(1,0,0.0224722);
   gre->SetPoint(2,0.095392,0.033);
   gre->SetPointError(2,0,0.0290689);
   gre->SetPoint(3,0.121598,0.024);
   gre->SetPointError(3,0,0.0233452);
   gre->SetPoint(4,0.167213,0.007);
   gre->SetPointError(4,0,0.02502);
   gre->SetPoint(5,0.257365,0.014);
   gre->SetPointError(5,0,0.0519711);
   
   TH1F *Graph44 = new TH1F("Graph44","Graph",100,0.0304405,0.2779945);
   Graph44->SetMinimum(-0.08191653);
   Graph44->SetMaximum(0.07941543);
   Graph44->SetDirectory(0);
   Graph44->SetStats(0);
   gre->SetHistogram(Graph44);
   
   gre->Draw("p");
   pad1_11->Modified();
   pad1->cd();
  
// ------------>Primitives in pad: pad1_15
   pad1_15 = new TPad("pad1_15", "pad1_15",0.5,0.2125,0.75,0.3875);
   pad1_15->Draw();
   pad1_15->cd();
   pad1_15->Range(-1.39794,-0.15,-0.4814861,0.15);
   pad1_15->SetFillStyle(4000);
   pad1_15->SetBorderMode(0);
   pad1_15->SetBorderSize(0);
   pad1_15->SetLogx();
   pad1_15->SetLeftMargin(0);
   pad1_15->SetRightMargin(0);
   pad1_15->SetTopMargin(0);
   pad1_15->SetBottomMargin(0);
   pad1_15->SetFrameFillColor(0);
   pad1_15->SetFrameFillStyle(0);
   pad1_15->SetFrameBorderMode(0);
   pad1_15->SetFrameFillStyle(0);
   pad1_15->SetFrameBorderMode(0);
   
   TH1F *hframe__14 = new TH1F("hframe__14","",20,0.04,0.33);
   hframe__14->SetMinimum(-0.15);
   hframe__14->SetMaximum(0.15);
   hframe__14->SetDirectory(0);
   hframe__14->SetStats(0);
   hframe__14->GetXaxis()->SetTitle("x_{Bj}");
   hframe__14->GetXaxis()->SetNdivisions(505);
   hframe__14->GetXaxis()->SetLabelSize(0.1);
   hframe__14->GetXaxis()->SetTitleSize(0.1);
   hframe__14->GetXaxis()->SetTitleOffset(1.01);
   hframe__14->GetYaxis()->SetNdivisions(205);
   hframe__14->Draw(" ");
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
   gre->SetPoint(0,0.04907,-0.0157717);
   gre->SetPointError(0,0,0.0111223);
   gre->SetPoint(1,0.069647,-0.00276575);
   gre->SetPointError(1,0,0.0109173);
   gre->SetPoint(2,0.089392,-0.0131132);
   gre->SetPointError(2,0,0.0128768);
   gre->SetPoint(3,0.113598,0.000496062);
   gre->SetPointError(3,0,0.0131296);
   gre->SetPoint(4,0.157213,0.0156766);
   gre->SetPointError(4,0,0.0138673);
   gre->SetPoint(5,0.245365,0.043296);
   gre->SetPointError(5,0,0.0239682);
   
   TH1F *Graph45 = new TH1F("Graph45","Graph",100,0.0294405,0.2649945);
   Graph45->SetMinimum(-0.03630982);
   Graph45->SetMaximum(0.07668002);
   Graph45->SetDirectory(0);
   Graph45->SetStats(0);
   gre->SetHistogram(Graph45);
   
   gre->Draw("p");
   
   gre = new TGraphErrors(6);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(21);
   gre->SetPoint(0,0.04907,-0.0157717);
   gre->SetPointError(0,0,0.011422);
   gre->SetPoint(1,0.069647,-0.00276575);
   gre->SetPointError(1,0,0.0118706);
   gre->SetPoint(2,0.089392,-0.0131132);
   gre->SetPointError(2,0,0.0131137);
   gre->SetPoint(3,0.113598,0.000496062);
   gre->SetPointError(3,0,0.015726);
   gre->SetPoint(4,0.157213,0.0156766);
   gre->SetPointError(4,0,0.0148735);
   gre->SetPoint(5,0.245365,0.043296);
   gre->SetPointError(5,0,0.0256866);
   
   TH1F *Graph46 = new TH1F("Graph46","Graph",100,0.0294405,0.2649945);
   Graph46->SetMinimum(-0.03681133);
   Graph46->SetMaximum(0.07860023);
   Graph46->SetDirectory(0);
   Graph46->SetStats(0);
   gre->SetHistogram(Graph46);
   
   gre->Draw("p");
   
   gre = new TGraphErrors(6);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,0.05107,0.04);
   gre->SetPointError(0,0,0.018);
   gre->SetPoint(1,0.073647,-0.026);
   gre->SetPointError(1,0,0.019);
   gre->SetPoint(2,0.095392,-0.005);
   gre->SetPointError(2,0,0.022);
   gre->SetPoint(3,0.121598,-0.035);
   gre->SetPointError(3,0,0.023);
   gre->SetPoint(4,0.167213,-0.006);
   gre->SetPointError(4,0,0.024);
   gre->SetPoint(5,0.257365,-0.076);
   gre->SetPointError(5,0,0.044);
   
   TH1F *Graph47 = new TH1F("Graph47","Graph",100,0.0304405,0.2779945);
   Graph47->SetMinimum(-0.1378);
   Graph47->SetMaximum(0.0758);
   Graph47->SetDirectory(0);
   Graph47->SetStats(0);
   gre->SetHistogram(Graph47);
   
   gre->Draw("p");
   
   gre = new TGraphErrors(6);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,0.05107,0.04);
   gre->SetPointError(0,0,0.0182483);
   gre->SetPoint(1,0.073647,-0.026);
   gre->SetPointError(1,0,0.0190263);
   gre->SetPoint(2,0.095392,-0.005);
   gre->SetPointError(2,0,0.0245967);
   gre->SetPoint(3,0.121598,-0.035);
   gre->SetPointError(3,0,0.0235372);
   gre->SetPoint(4,0.167213,-0.006);
   gre->SetPointError(4,0,0.025632);
   gre->SetPoint(5,0.257365,-0.076);
   gre->SetPointError(5,0,0.0461736);
   
   TH1F *Graph48 = new TH1F("Graph48","Graph",100,0.0304405,0.2779945);
   Graph48->SetMinimum(-0.1402158);
   Graph48->SetMaximum(0.07629049);
   Graph48->SetDirectory(0);
   Graph48->SetStats(0);
   gre->SetHistogram(Graph48);
   
   gre->Draw("p");
   pad1_15->Modified();
   pad1->cd();
  
// ------------>Primitives in pad: pad1_19
   pad1_19 = new TPad("pad1_19", "pad1_19",0.5,0,0.75,0.2125);
   pad1_19->Draw();
   pad1_19->cd();
   pad1_19->Range(-1.39794,-0.4126094,-0.4814861,0.45);
   pad1_19->SetFillStyle(4000);
   pad1_19->SetBorderMode(0);
   pad1_19->SetBorderSize(0);
   pad1_19->SetLogx();
   pad1_19->SetLeftMargin(0);
   pad1_19->SetRightMargin(0);
   pad1_19->SetTopMargin(0);
   pad1_19->SetBottomMargin(0.478327);
   pad1_19->SetFrameFillColor(0);
   pad1_19->SetFrameFillStyle(0);
   pad1_19->SetFrameBorderMode(0);
   pad1_19->SetFrameFillStyle(0);
   pad1_19->SetFrameBorderMode(0);
   
   TH1F *hframe__15 = new TH1F("hframe__15","",20,0.04,0.33);
   hframe__15->SetMinimum(0);
   hframe__15->SetMaximum(0.45);
   hframe__15->SetDirectory(0);
   hframe__15->SetStats(0);
   hframe__15->GetXaxis()->SetTitle("x_{B}");
   hframe__15->GetXaxis()->CenterTitle(true);
   hframe__15->GetXaxis()->SetNdivisions(205);
   hframe__15->GetXaxis()->SetLabelFont(63);
   hframe__15->GetXaxis()->SetLabelOffset(0.02);
   hframe__15->GetXaxis()->SetLabelSize(25);
   hframe__15->GetXaxis()->SetTitleSize(30);
   hframe__15->GetXaxis()->SetTitleOffset(5.65);
   hframe__15->GetXaxis()->SetTitleFont(63);
   hframe__15->GetYaxis()->SetNdivisions(205);
   hframe__15->Draw(" ");
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
   
   TH1F *Graph_Graph3 = new TH1F("Graph_Graph3","Graph",100,0.0101699,10.1699);
   Graph_Graph3->SetMinimum(0);
   Graph_Graph3->SetMaximum(10.98844);
   Graph_Graph3->SetDirectory(0);
   Graph_Graph3->SetStats(0);
   graph->SetHistogram(Graph_Graph3);
   
   graph->Draw("p");
   pad1_19->Modified();
   pad1->cd();
  
// ------------>Primitives in pad: pad1_4
   pad1_4 = new TPad("pad1_4", "pad1_4",0.75,0.825,1,1);
   pad1_4->Draw();
   pad1_4->cd();
   pad1_4->Range(-0.02227639,-0.15,1.060698,0.15);
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
   
   TH1F *hframe__16 = new TH1F("hframe__16","",10,0.95,11.5);
   hframe__16->SetMinimum(-0.15);
   hframe__16->SetMaximum(0.15);
   hframe__16->SetDirectory(0);
   hframe__16->SetStats(0);
   hframe__16->GetXaxis()->SetTitle("Q^{2} (GeV^{2})");
   hframe__16->GetXaxis()->SetNdivisions(505);
   hframe__16->GetXaxis()->SetLabelSize(0.1);
   hframe__16->GetXaxis()->SetTitleSize(0.1);
   hframe__16->GetXaxis()->SetTitleOffset(1.01);
   hframe__16->GetYaxis()->SetNdivisions(205);
   hframe__16->Draw(" ");
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
   gre->SetPoint(0,1.19965,-0.0459031);
   gre->SetPointError(0,0,0.00832666);
   gre->SetPoint(1,1.59143,-0.0176047);
   gre->SetPointError(1,0,0.00930419);
   gre->SetPoint(2,2.08034,-0.0391536);
   gre->SetPointError(2,0,0.00889346);
   gre->SetPoint(3,2.76859,-0.0162568);
   gre->SetPointError(3,0,0.00984765);
   gre->SetPoint(4,3.76701,0.00206319);
   gre->SetPointError(4,0,0.0108723);
   gre->SetPoint(5,5.85101,-0.0033819);
   gre->SetPointError(5,0,0.0126958);
   
   TH1F *Graph49 = new TH1F("Graph49","Graph",100,0.734514,6.316146);
   Graph49->SetMinimum(-0.06094629);
   Graph49->SetMaximum(0.01965201);
   Graph49->SetDirectory(0);
   Graph49->SetStats(0);
   gre->SetHistogram(Graph49);
   
   gre->Draw("p");
   
   gre = new TGraphErrors(6);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(21);
   gre->SetPoint(0,1.19965,-0.0459031);
   gre->SetPointError(0,0,0.0244694);
   gre->SetPoint(1,1.59143,-0.0176047);
   gre->SetPointError(1,0,0.0232118);
   gre->SetPoint(2,2.08034,-0.0391536);
   gre->SetPointError(2,0,0.0233603);
   gre->SetPoint(3,2.76859,-0.0162568);
   gre->SetPointError(3,0,0.0216069);
   gre->SetPoint(4,3.76701,0.00206319);
   gre->SetPointError(4,0,0.0174293);
   gre->SetPoint(5,5.85101,-0.0033819);
   gre->SetPointError(5,0,0.0188267);
   
   TH1F *Graph50 = new TH1F("Graph50","Graph",100,0.734514,6.316146);
   Graph50->SetMinimum(-0.079359);
   Graph50->SetMaximum(0.02847899);
   Graph50->SetDirectory(0);
   Graph50->SetStats(0);
   gre->SetHistogram(Graph50);
   
   gre->Draw("p");
   
   gre = new TGraphErrors(6);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,1.24965,-0.041);
   gre->SetPointError(0,0,0.013);
   gre->SetPoint(1,1.67143,-0.033);
   gre->SetPointError(1,0,0.015);
   gre->SetPoint(2,2.18034,-0.012);
   gre->SetPointError(2,0,0.015);
   gre->SetPoint(3,2.90859,-0.025);
   gre->SetPointError(3,0,0.016);
   gre->SetPoint(4,3.94701,0.021);
   gre->SetPointError(4,0,0.018);
   gre->SetPoint(5,6.10101,-0.001);
   gre->SetPointError(5,0,0.021);
   
   TH1F *Graph51 = new TH1F("Graph51","Graph",100,0.764514,6.586146);
   Graph51->SetMinimum(-0.0633);
   Graph51->SetMaximum(0.0483);
   Graph51->SetDirectory(0);
   Graph51->SetStats(0);
   gre->SetHistogram(Graph51);
   
   gre->Draw("p");
   
   gre = new TGraphErrors(6);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,1.24965,-0.041);
   gre->SetPointError(0,0,0.0246982);
   gre->SetPoint(1,1.67143,-0.033);
   gre->SetPointError(1,0,0.025);
   gre->SetPoint(2,2.18034,-0.012);
   gre->SetPointError(2,0,0.0205183);
   gre->SetPoint(3,2.90859,-0.025);
   gre->SetPointError(3,0,0.017088);
   gre->SetPoint(4,3.94701,0.021);
   gre->SetPointError(4,0,0.0201246);
   gre->SetPoint(5,6.10101,-0.001);
   gre->SetPointError(5,0,0.0252389);
   
   TH1F *Graph52 = new TH1F("Graph52","Graph",100,0.764514,6.586146);
   Graph52->SetMinimum(-0.07638048);
   Graph52->SetMaximum(0.05180688);
   Graph52->SetDirectory(0);
   Graph52->SetStats(0);
   gre->SetHistogram(Graph52);
   
   gre->Draw("p");
   pad1_4->Modified();
   pad1->cd();
  
// ------------>Primitives in pad: pad1_8
   pad1_8 = new TPad("pad1_8", "pad1_8",0.75,0.5625,1,0.825);
   pad1_8->Draw();
   pad1_8->cd();
   pad1_8->Range(-0.02227639,-0.075,1.060698,0.35);
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
   
   TH1F *hframe__17 = new TH1F("hframe__17","",10,0.95,11.5);
   hframe__17->SetMinimum(-0.075);
   hframe__17->SetMaximum(0.35);
   hframe__17->SetDirectory(0);
   hframe__17->SetStats(0);
   hframe__17->GetXaxis()->SetTitle("Q^{2} (GeV^{2})");
   hframe__17->GetXaxis()->SetNdivisions(505);
   hframe__17->GetXaxis()->SetLabelSize(0.1);
   hframe__17->GetXaxis()->SetTitleSize(0.1);
   hframe__17->GetXaxis()->SetTitleOffset(1.01);
   hframe__17->GetYaxis()->SetNdivisions(205);
   hframe__17->Draw(" ");
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
   gre->SetPoint(0,1.19965,0.0214928);
   gre->SetPointError(0,0,0.0116446);
   gre->SetPoint(1,1.59143,0.0320024);
   gre->SetPointError(1,0,0.0129684);
   gre->SetPoint(2,2.08034,0.0157776);
   gre->SetPointError(2,0,0.0115077);
   gre->SetPoint(3,2.76859,0.0681719);
   gre->SetPointError(3,0,0.0139805);
   gre->SetPoint(4,3.76701,0.00988978);
   gre->SetPointError(4,0,0.0153569);
   gre->SetPoint(5,5.85101,0.037409);
   gre->SetPointError(5,0,0.0181203);
   
   TH1F *Graph53 = new TH1F("Graph53","Graph",100,0.734514,6.316146);
   Graph53->SetMinimum(-0.01422907);
   Graph53->SetMaximum(0.09091435);
   Graph53->SetDirectory(0);
   Graph53->SetStats(0);
   gre->SetHistogram(Graph53);
   
   gre->Draw("p");
   
   gre = new TGraphErrors(6);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(21);
   gre->SetPoint(0,1.19965,0.0214928);
   gre->SetPointError(0,0,0.0306677);
   gre->SetPoint(1,1.59143,0.0320024);
   gre->SetPointError(1,0,0.0239441);
   gre->SetPoint(2,2.08034,0.0157776);
   gre->SetPointError(2,0,0.0208335);
   gre->SetPoint(3,2.76859,0.0681719);
   gre->SetPointError(3,0,0.0241609);
   gre->SetPoint(4,3.76701,0.00988978);
   gre->SetPointError(4,0,0.0155383);
   gre->SetPoint(5,5.85101,0.037409);
   gre->SetPointError(5,0,0.0418862);
   
   TH1F *Graph54 = new TH1F("Graph54","Graph",100,0.734514,6.316146);
   Graph54->SetMinimum(-0.01932567);
   Graph54->SetMaximum(0.1024836);
   Graph54->SetDirectory(0);
   Graph54->SetStats(0);
   gre->SetHistogram(Graph54);
   
   gre->Draw("p");
   
   gre = new TGraphErrors(6);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,1.24965,0.048);
   gre->SetPointError(0,0,0.0358469);
   gre->SetPoint(1,1.67143,0.063);
   gre->SetPointError(1,0,0.025807);
   gre->SetPoint(2,2.18034,0.049);
   gre->SetPointError(2,0,0.0238537);
   gre->SetPoint(3,2.90859,0.05);
   gre->SetPointError(3,0,0.0243516);
   gre->SetPoint(4,3.94701,0.05);
   gre->SetPointError(4,0,0.0250799);
   gre->SetPoint(5,6.10101,0.053);
   gre->SetPointError(5,0,0.0617738);
   
   TH1F *Graph55 = new TH1F("Graph55","Graph",100,0.764514,6.586146);
   Graph55->SetMinimum(-0.02112856);
   Graph55->SetMaximum(0.1271286);
   Graph55->SetDirectory(0);
   Graph55->SetStats(0);
   gre->SetHistogram(Graph55);
   
   gre->Draw("p");
   
   gre = new TGraphErrors(6);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(21);
   gre->SetPoint(0,1.19965,0.0214928);
   gre->SetPointError(0,0,0.0306677);
   gre->SetPoint(1,1.59143,0.0320024);
   gre->SetPointError(1,0,0.0239441);
   gre->SetPoint(2,2.08034,0.0157776);
   gre->SetPointError(2,0,0.0208335);
   gre->SetPoint(3,2.76859,0.0681719);
   gre->SetPointError(3,0,0.0241609);
   gre->SetPoint(4,3.76701,0.00988978);
   gre->SetPointError(4,0,0.0155383);
   gre->SetPoint(5,5.85101,0.037409);
   gre->SetPointError(5,0,0.0418862);
   
   TH1F *Graph56 = new TH1F("Graph56","Graph",100,0.734514,6.316146);
   Graph56->SetMinimum(-0.01932567);
   Graph56->SetMaximum(0.1024836);
   Graph56->SetDirectory(0);
   Graph56->SetStats(0);
   gre->SetHistogram(Graph56);
   
   gre->Draw("p");
   pad1_8->Modified();
   pad1->cd();
  
// ------------>Primitives in pad: pad1_12
   pad1_12 = new TPad("pad1_12", "pad1_12",0.75,0.3875,1,0.5625);
   pad1_12->Draw();
   pad1_12->cd();
   pad1_12->Range(-0.02227639,-0.15,1.060698,0.15);
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
   
   TH1F *hframe__18 = new TH1F("hframe__18","",10,0.95,11.5);
   hframe__18->SetMinimum(-0.15);
   hframe__18->SetMaximum(0.15);
   hframe__18->SetDirectory(0);
   hframe__18->SetStats(0);
   hframe__18->GetXaxis()->SetTitle("Q^{2} (GeV^{2})");
   hframe__18->GetXaxis()->SetNdivisions(505);
   hframe__18->GetXaxis()->SetLabelSize(0.1);
   hframe__18->GetXaxis()->SetTitleSize(0.1);
   hframe__18->GetXaxis()->SetTitleOffset(1.01);
   hframe__18->GetYaxis()->SetNdivisions(205);
   hframe__18->Draw(" ");
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
   gre->SetPoint(0,1.19965,-0.0202146);
   gre->SetPointError(0,0,0.0109875);
   gre->SetPoint(1,1.59143,-0.0113547);
   gre->SetPointError(1,0,0.0123114);
   gre->SetPoint(2,2.08034,-0.00810409);
   gre->SetPointError(2,0,0.0118157);
   gre->SetPoint(3,2.76859,0.00630235);
   gre->SetPointError(3,0,0.0129989);
   gre->SetPoint(4,3.76701,-0.00804102);
   gre->SetPointError(4,0,0.014341);
   gre->SetPoint(5,5.85101,0.0421759);
   gre->SetPointError(5,0,0.0167585);
   
   TH1F *Graph57 = new TH1F("Graph57","Graph",100,0.734514,6.316146);
   Graph57->SetMinimum(-0.04021575);
   Graph57->SetMaximum(0.06794805);
   Graph57->SetDirectory(0);
   Graph57->SetStats(0);
   gre->SetHistogram(Graph57);
   
   gre->Draw("p");
   
   gre = new TGraphErrors(6);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(21);
   gre->SetPoint(0,1.19965,-0.0202146);
   gre->SetPointError(0,0,0.0161157);
   gre->SetPoint(1,1.59143,-0.0113547);
   gre->SetPointError(1,0,0.0170916);
   gre->SetPoint(2,2.08034,-0.00810409);
   gre->SetPointError(2,0,0.017764);
   gre->SetPoint(3,2.76859,0.00630235);
   gre->SetPointError(3,0,0.0182343);
   gre->SetPoint(4,3.76701,-0.00804102);
   gre->SetPointError(4,0,0.0210279);
   gre->SetPoint(5,5.85101,0.0421759);
   gre->SetPointError(5,0,0.0169994);
   
   TH1F *Graph58 = new TH1F("Graph58","Graph",100,0.734514,6.316146);
   Graph58->SetMinimum(-0.04588086);
   Graph58->SetMaximum(0.06872586);
   Graph58->SetDirectory(0);
   Graph58->SetStats(0);
   gre->SetHistogram(Graph58);
   
   gre->Draw("p");
   
   gre = new TGraphErrors(6);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,1.24965,0.018);
   gre->SetPointError(0,0,0.018);
   gre->SetPoint(1,1.67143,-0.035);
   gre->SetPointError(1,0,0.021);
   gre->SetPoint(2,2.18034,-0.023);
   gre->SetPointError(2,0,0.021);
   gre->SetPoint(3,2.90859,0.021);
   gre->SetPointError(3,0,0.022);
   gre->SetPoint(4,3.94701,-0.009);
   gre->SetPointError(4,0,0.025);
   gre->SetPoint(5,6.10101,0.029);
   gre->SetPointError(5,0,0.03);
   
   TH1F *Graph59 = new TH1F("Graph59","Graph",100,0.764514,6.586146);
   Graph59->SetMinimum(-0.0675);
   Graph59->SetMaximum(0.0705);
   Graph59->SetDirectory(0);
   Graph59->SetStats(0);
   gre->SetHistogram(Graph59);
   
   gre->Draw("p");
   
   gre = new TGraphErrors(6);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,1.24965,0.018);
   gre->SetPointError(0,0,0.0205913);
   gre->SetPoint(1,1.67143,-0.035);
   gre->SetPointError(1,0,0.0264008);
   gre->SetPoint(2,2.18034,-0.023);
   gre->SetPointError(2,0,0.021587);
   gre->SetPoint(3,2.90859,0.021);
   gre->SetPointError(3,0,0.0290689);
   gre->SetPoint(4,3.94701,-0.009);
   gre->SetPointError(4,0,0.0291548);
   gre->SetPoint(5,6.10101,0.029);
   gre->SetPointError(5,0,0.0305941);
   
   TH1F *Graph60 = new TH1F("Graph60","Graph",100,0.764514,6.586146);
   Graph60->SetMinimum(-0.07350029);
   Graph60->SetMaximum(0.07169359);
   Graph60->SetDirectory(0);
   Graph60->SetStats(0);
   gre->SetHistogram(Graph60);
   
   gre->Draw("p");
   pad1_12->Modified();
   pad1->cd();
  
// ------------>Primitives in pad: pad1_16
   pad1_16 = new TPad("pad1_16", "pad1_16",0.75,0.2125,1,0.3875);
   pad1_16->Draw();
   pad1_16->cd();
   pad1_16->Range(-0.02227639,-0.15,1.060698,0.15);
   pad1_16->SetFillStyle(4000);
   pad1_16->SetBorderMode(0);
   pad1_16->SetBorderSize(0);
   pad1_16->SetLogx();
   pad1_16->SetLeftMargin(0);
   pad1_16->SetRightMargin(0);
   pad1_16->SetTopMargin(0);
   pad1_16->SetBottomMargin(0);
   pad1_16->SetFrameFillColor(0);
   pad1_16->SetFrameFillStyle(0);
   pad1_16->SetFrameBorderMode(0);
   pad1_16->SetFrameFillStyle(0);
   pad1_16->SetFrameBorderMode(0);
   
   TH1F *hframe__19 = new TH1F("hframe__19","",10,0.95,11.5);
   hframe__19->SetMinimum(-0.15);
   hframe__19->SetMaximum(0.15);
   hframe__19->SetDirectory(0);
   hframe__19->SetStats(0);
   hframe__19->GetXaxis()->SetTitle("Q^{2} (GeV^{2})");
   hframe__19->GetXaxis()->SetNdivisions(505);
   hframe__19->GetXaxis()->SetLabelSize(0.1);
   hframe__19->GetXaxis()->SetTitleSize(0.1);
   hframe__19->GetXaxis()->SetTitleOffset(1.01);
   hframe__19->GetYaxis()->SetNdivisions(205);
   hframe__19->Draw(" ");
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
   gre->SetPoint(0,1.19965,-0.0142719);
   gre->SetPointError(0,0,0.010947);
   gre->SetPoint(1,1.59143,0.000434911);
   gre->SetPointError(1,0,0.0123399);
   gre->SetPoint(2,2.08034,0.0175418);
   gre->SetPointError(2,0,0.0118531);
   gre->SetPoint(3,2.76859,-0.0218797);
   gre->SetPointError(3,0,0.013053);
   gre->SetPoint(4,3.76701,0.0137668);
   gre->SetPointError(4,0,0.0142943);
   gre->SetPoint(5,5.85101,0.00976699);
   gre->SetPointError(5,0,0.0168485);
   
   TH1F *Graph61 = new TH1F("Graph61","Graph",100,0.734514,6.316146);
   Graph61->SetMinimum(-0.04136546);
   Graph61->SetMaximum(0.03582766);
   Graph61->SetDirectory(0);
   Graph61->SetStats(0);
   gre->SetHistogram(Graph61);
   
   gre->Draw("p");
   
   gre = new TGraphErrors(6);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineColor(2);
   gre->SetMarkerColor(2);
   gre->SetMarkerStyle(21);
   gre->SetPoint(0,1.19965,-0.0142719);
   gre->SetPointError(0,0,0.0117712);
   gre->SetPoint(1,1.59143,0.000434911);
   gre->SetPointError(1,0,0.0125196);
   gre->SetPoint(2,2.08034,0.0175418);
   gre->SetPointError(2,0,0.0125277);
   gre->SetPoint(3,2.76859,-0.0218797);
   gre->SetPointError(3,0,0.0160604);
   gre->SetPoint(4,3.76701,0.0137668);
   gre->SetPointError(4,0,0.0143902);
   gre->SetPoint(5,5.85101,0.00976699);
   gre->SetPointError(5,0,0.0174459);
   
   TH1F *Graph62 = new TH1F("Graph62","Graph",100,0.734514,6.316146);
   Graph62->SetMinimum(-0.04474106);
   Graph62->SetMaximum(0.03687046);
   Graph62->SetDirectory(0);
   Graph62->SetStats(0);
   gre->SetHistogram(Graph62);
   
   gre->Draw("p");
   
   gre = new TGraphErrors(6);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,1.24965,0.046);
   gre->SetPointError(0,0,0.018);
   gre->SetPoint(1,1.67143,-0.027);
   gre->SetPointError(1,0,0.021);
   gre->SetPoint(2,2.18034,-0.023);
   gre->SetPointError(2,0,0.02);
   gre->SetPoint(3,2.90859,-0.001);
   gre->SetPointError(3,0,0.023);
   gre->SetPoint(4,3.94701,-0.051);
   gre->SetPointError(4,0,0.025);
   gre->SetPoint(5,6.10101,-0.002);
   gre->SetPointError(5,0,0.03);
   
   TH1F *Graph63 = new TH1F("Graph63","Graph",100,0.764514,6.586146);
   Graph63->SetMinimum(-0.09);
   Graph63->SetMaximum(0.078);
   Graph63->SetDirectory(0);
   Graph63->SetStats(0);
   gre->SetHistogram(Graph63);
   
   gre->Draw("p");
   
   gre = new TGraphErrors(6);
   gre->SetName("Graph");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineColor(4);
   gre->SetMarkerColor(4);
   gre->SetMarkerStyle(26);
   gre->SetPoint(0,1.24965,0.046);
   gre->SetPointError(0,0,0.0189737);
   gre->SetPoint(1,1.67143,-0.027);
   gre->SetPointError(1,0,0.0213776);
   gre->SetPoint(2,2.18034,-0.023);
   gre->SetPointError(2,0,0.0228254);
   gre->SetPoint(3,2.90859,-0.001);
   gre->SetPointError(3,0,0.0269258);
   gre->SetPoint(4,3.94701,-0.051);
   gre->SetPointError(4,0,0.02502);
   gre->SetPoint(5,6.10101,-0.002);
   gre->SetPointError(5,0,0.0319531);
   
   TH1F *Graph64 = new TH1F("Graph64","Graph",100,0.764514,6.586146);
   Graph64->SetMinimum(-0.09011937);
   Graph64->SetMaximum(0.07907307);
   Graph64->SetDirectory(0);
   Graph64->SetStats(0);
   gre->SetHistogram(Graph64);
   
   gre->Draw("p");
   pad1_16->Modified();
   pad1->cd();
  
// ------------>Primitives in pad: pad1_20
   pad1_20 = new TPad("pad1_20", "pad1_20",0.75,0,1,0.2125);
   pad1_20->Draw();
   pad1_20->cd();
   pad1_20->Range(-0.02227639,-0.4126094,1.060698,0.45);
   pad1_20->SetFillStyle(4000);
   pad1_20->SetBorderMode(0);
   pad1_20->SetBorderSize(0);
   pad1_20->SetLogx();
   pad1_20->SetLeftMargin(0);
   pad1_20->SetRightMargin(0);
   pad1_20->SetTopMargin(0);
   pad1_20->SetBottomMargin(0.478327);
   pad1_20->SetFrameFillColor(0);
   pad1_20->SetFrameFillStyle(0);
   pad1_20->SetFrameBorderMode(0);
   pad1_20->SetFrameFillStyle(0);
   pad1_20->SetFrameBorderMode(0);
   
   TH1F *hframe__20 = new TH1F("hframe__20","",10,0.95,11.5);
   hframe__20->SetMinimum(0);
   hframe__20->SetMaximum(0.45);
   hframe__20->SetDirectory(0);
   hframe__20->SetStats(0);
   hframe__20->GetXaxis()->SetTitle("Q^{2} [GeV^{2}]");
   hframe__20->GetXaxis()->CenterTitle(true);
   hframe__20->GetXaxis()->SetNdivisions(205);
   hframe__20->GetXaxis()->SetLabelFont(63);
   hframe__20->GetXaxis()->SetLabelOffset(0.02);
   hframe__20->GetXaxis()->SetLabelSize(25);
   hframe__20->GetXaxis()->SetTitleSize(30);
   hframe__20->GetXaxis()->SetTitleOffset(5.65);
   hframe__20->GetXaxis()->SetTitleFont(63);
   hframe__20->GetYaxis()->SetNdivisions(205);
   hframe__20->Draw(" ");
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
   
   TH1F *Graph_Graph4 = new TH1F("Graph_Graph4","Graph",100,0.01633611,16.33611);
   Graph_Graph4->SetMinimum(0);
   Graph_Graph4->SetMaximum(10.98993);
   Graph_Graph4->SetDirectory(0);
   Graph_Graph4->SetStats(0);
   graph->SetHistogram(Graph_Graph4);
   
   graph->Draw("p");
   pad1_20->Modified();
   pad1->cd();
   pad1->Modified();
   combined->cd();
   combined->Modified();
   combined->cd();
   combined->SetSelected(combined);
}
