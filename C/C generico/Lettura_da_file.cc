#include <iostream>
#include <vector>
#include <fstream>
#include <string>

using namespace std; //serve a non scrivere std


  

  




int main(){
    vector<double> a;   //definisce il vettore
    vector<double> b;
    double asup,bsup;

    string line;
    ifstream myfile ("prova2.dat");
    if (myfile.is_open())
    {
        while ( getline (myfile,line) )
        {   
            string::size_type sz;
            asup=stod(line, &sz);
            //bsup=stod(line.substr(sz));
            bsup=stod(line.substr(3)); //prende l'elemento in posizione 3 conta pure gli spazi fatti con tab o semplici
            a.push_back(asup);
            b.push_back(bsup);
        }
        myfile.close();
    }

    else cout << "Unable to open file \n"; 

    
    
    cout<<"ci arriva \n";
    
    int i=0;   
    for(double x : a){
    cout<<a[i]<<" "<<b[i]<<"\n";
      i++;
    }
    
    int size= sizeof(a)/sizeof(a[0]);
    cout<<"size"<<size<<"\n";
    
    return 0;
    
}
