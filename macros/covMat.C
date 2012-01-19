
c(){
 
  int i,j;
  TCanvas *c = new TCanvas("c","",5);
  c->SetWindowSize(1000,1000);
  
  // Fill hist from here
  Float_t aa[13][13];

  // Cludgy. Make arrays
  Float_t c0c[] = {1.000,  0.042, -0.009, -0.017, -0.005, -0.083, -0.041,  0.003, -0.003, -0.039,  0.004, -0.004,  0.006};

  Float_t c1c[] = {0.042,  1.000, -0.001,  0.026, -0.011,  0.003, -0.002, -0.086, -0.030 -0.004,  0.004, -0.034,  0.005};

  Float_t s1c[] = {-0.009, -0.001,  1.000,  0.015,  0.000, -0.040, -0.080, -0.001,  0.006,  0.004, -0.046,  0.003, -0.002};

  Float_t c2c[] = {-0.017,  0.026,  0.015,  1.000,  0.026, -0.004,  0.028,  0.003,  0.002,  0.007,  0.001, -0.001, -0.002};

  Float_t c3c[] = {-0.005, -0.011,  0.000,  0.026,  1.000, -0.001,  0.003, -0.002,  0.032, -0.000, -0.006,  0.007, -0.003};
  
  Float_t c0dvcs[] = {-0.083,  0.003, -0.040, -0.004, -0.001,  1.000,  0.033, -0.003,  0.013, -0.778, -0.034,  0.012, -0.014};

  Float_t s1dvcs[] = {-0.041, -0.002, -0.080,  0.028,  0.003,  0.033,  1.000,  0.009,  0.001, -0.034, -0.775, -0.009,  0.007};

  Float_t c1dvcs[] = {0.003, -0.086, -0.001,  0.003, -0.002, -0.003,  0.009,  1.000,  0.027,  0.013, -0.010, -0.780, -0.032};

  Float_t s2dvcs[] = {-0.003, -0.030,  0.006,  0.002,  0.032,  0.013,  0.001,  0.027,  1.000, -0.013,  0.007, -0.030, -0.785};

  Float_t c0i[] = {-0.039, -0.004,  0.004,  0.007, -0.000, -0.778, -0.034,  0.013, -0.013,  1.000,  0.026, -0.002,  0.013};

  Float_t s1i[] = {0.004,  0.004, -0.046,  0.001, -0.006, -0.034, -0.775, -0.010,  0.007,  0.026,  1.000,  0.009,  0.001};

  Float_t c1i[] = {-0.004, -0.034,  0.003, -0.001,  0.007,  0.012, -0.009, -0.780, -0.030, -0.002,  0.009,  1.000,  0.025};

  Float_t s2i[] = {0.006,  0.005, -0.002, -0.002, -0.003, -0.014,  0.007, -0.032, -0.785,  0.013,  0.001,  0.025,  1.000};


  // copy arrays to hist
  Int_t ii;
  for( ii = 0; ii < 13; ii++){

    aa[0][ii] = c0c[ii];
    aa[1][ii] = c1c[ii];
    aa[2][ii] = s1c[ii];
    aa[3][ii] = c2c[ii];
    aa[4][ii] = c3c[ii];
    aa[5][ii] = c0dvcs[ii];
    aa[6][ii] = s1dvcs[ii];
    aa[7][ii] = c1dvcs[ii];
    aa[8][ii] = s2dvcs[ii];
    aa[9][ii] = c0i[ii];
    aa[10][ii] = s1i[ii];
    aa[11][ii] = c1i[ii];
    aa[12][ii] = s2i[ii];
  }

  TH2F *hp = new TH2F("hp","",13,0,13,13,0,13);
  TH2F *hn = new TH2F("hn","",13,0,13,13,0,13);
 

  for(i=0;i<13;i++){
    for(j=0;j<13;j++){
      if(aa[i][j]>0.0){
	hp->SetFillColor(2);
	hp->SetBinContent(i+1,j+1,aa[i][j]);
      }
      else{
	hn->SetBinContent(i+1,j+1,-aa[i][j]);
	hn->SetFillColor(4);
	hn->SetLineColor(4);
	hn->SetFillStyle(0);
      }  
    }
  }

  gStyle->SetOptStat(0);
  Int_t ci;   // for color index setting
  ci = TColor::GetColor("#000099");
  hp->SetLineColor(ci);

  hp->GetXaxis()->SetBinLabel(1,"A^{cos(0#phi)}_{C}");
  hp->GetXaxis()->SetBinLabel(2,"A^{cos#phi}_{C}");
  hp->GetXaxis()->SetBinLabel(3,"A^{sin#phi}_{C}");
  hp->GetXaxis()->SetBinLabel(4,"A^{cos(2#phi)}_{C}");
  hp->GetXaxis()->SetBinLabel(5,"A^{cos(3#phi)}_{C}");
  hp->GetXaxis()->SetBinLabel(6,"A^{cos(0#phi)}_{DVCS}");
  hp->GetXaxis()->SetBinLabel(7,"A^{sin#phi}_{DVCS}");
  hp->GetXaxis()->SetBinLabel(8,"A^{cos#phi}_{DVCS}");
  hp->GetXaxis()->SetBinLabel(9,"A^{sin(2#phi)}_{DVCS}");
  hp->GetXaxis()->SetBinLabel(10,"A^{cos(0#phi)}_{I}");
  hp->GetXaxis()->SetBinLabel(11,"A^{sin#phi}_{I}");
  hp->GetXaxis()->SetBinLabel(12,"A^{cos#phi}_{I}");
  hp->GetXaxis()->SetBinLabel(13,"A^{sin(2#phi)}_{I}");
  hp->GetXaxis()->SetBit(TAxis::kLabelsVert);
  hp->GetXaxis()->RotateTitle(true);
  hp->GetXaxis()->SetNdivisions(13);
  hp->GetXaxis()->SetLabelFont(42);
  hp->GetXaxis()->SetLabelSize(0.035);
  hp->GetXaxis()->SetTitleSize(0.035);
  hp->GetXaxis()->SetTitleFont(42);
  hp->GetXaxis()->SetTickLength(0.01);

  hp->GetYaxis()->SetBinLabel(1,"A^{cos(0#phi)}_{C}");
  hp->GetYaxis()->SetBinLabel(2,"A^{cos#phi}_{C}");
  hp->GetYaxis()->SetBinLabel(3,"A^{sin#phi}_{C}");
  hp->GetYaxis()->SetBinLabel(4,"A^{cos(2#phi)}_{C}");
  hp->GetYaxis()->SetBinLabel(5,"A^{cos(3#phi)}_{C}");
  hp->GetYaxis()->SetBinLabel(6,"A^{cos(0#phi)}_{DVCS}");
  hp->GetYaxis()->SetBinLabel(7,"A^{sin#phi}_{DVCS}");
  hp->GetYaxis()->SetBinLabel(8,"A^{cos#phi}_{DVCS}");
  hp->GetYaxis()->SetBinLabel(9,"A^{sin(2#phi)}_{DVCS}");
  hp->GetYaxis()->SetBinLabel(10,"A^{cos(0#phi)}_{I}");
  hp->GetYaxis()->SetBinLabel(11,"A^{sin#phi}_{I}");
  hp->GetYaxis()->SetBinLabel(12,"A^{cos#phi}_{I}");
  hp->GetYaxis()->SetBinLabel(13,"A^{sin(2#phi)}_{I}");
  hp->GetYaxis()->SetNoExponent();
  hp->GetYaxis()->SetNdivisions(13);
  hp->GetYaxis()->SetLabelFont(42);
  hp->GetYaxis()->SetLabelSize(0.035);
  hp->GetYaxis()->SetTitleSize(0.035);
  hp->GetYaxis()->SetTickLength(0.05);
  hp->GetYaxis()->SetTitleFont(42);
  hp->GetYaxis()->SetTickLength(0.01);

  hp->GetZaxis()->SetLabelFont(42);
  hp->GetZaxis()->SetLabelSize(0.035);
  hp->GetZaxis()->SetTitleSize(0.035);
  hp->GetZaxis()->SetTitleFont(42);
  hp->Draw("BOX");

  hn->SetFillColor(4);
  hn->SetFillStyle(0);
  hn->SetLineColor(4);
  hn->GetZaxis()->SetLabelFont(42);
  hn->GetZaxis()->SetLabelSize(0.035);
  hn->GetZaxis()->SetTitleSize(0.035);
  hn->GetZaxis()->SetTitleFont(42);
  hn->Draw("SAME BOX");

  
  c->Print("CovMat.pdf");

  return 0;
}
