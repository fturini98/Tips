max_bin=T1->GetNbinsX();//riscala l'asse x 
    TAxis *T1_Xaxis= T1->GetXaxis();
    T1_Xaxis->SetLimits(min_vale,T1->GetBinCenter(max_bin_time)/Value_of_scaling);
    
