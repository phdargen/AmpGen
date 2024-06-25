void leg3()
{
//=========Macro generated from canvas: c1/c1
//=========  (Tue Jun 25 17:17:42 2024) by ROOT version 6.18/00
   TCanvas *c1 = new TCanvas("c1", "c1",1,1,504,504);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c1->SetHighLightColor(2);
   c1->Range(-1.345679,-0.01652146,1.123457,0.08739633);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetTickx(1);
   c1->SetTicky(1);
   c1->SetLeftMargin(0.14);
   c1->SetRightMargin(0.05);
   c1->SetTopMargin(0.05);
   c1->SetBottomMargin(0.16);
   c1->SetFrameLineWidth(2);
   c1->SetFrameBorderMode(0);
   
   TLegend *leg = new TLegend(0,0,1,1,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(132);
   leg->SetTextSize(0.05);
   leg->SetLineColor(0);
   leg->SetLineStyle(0);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("m_Kpipiweight_4","#it{B}#rightarrow#it{#psi(2S)}#it{[K_{2}^{*}(1430)/K_{2}(1770)]}","f");
   entry->SetFillStyle(1001);
   entry->SetLineColor(1);
   entry->SetLineStyle(4);
   entry->SetLineWidth(4);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("m_Kpipiweight_5","#it{B}#rightarrow#it{[#psi(4360)/#psi(4415)/#psi(4660)]}#it{K}","f");
   entry->SetFillStyle(1001);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#00cccc");
   entry->SetLineColor(ci);
   entry->SetLineStyle(5);
   entry->SetLineWidth(4);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   entry=leg->AddEntry("m_Kpipiweight_6","Others","f");
   entry->SetFillStyle(1001);

   ci = TColor::GetColor("#996633");
   entry->SetLineColor(ci);
   entry->SetLineStyle(6);
   entry->SetLineWidth(4);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(132);
   leg->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
