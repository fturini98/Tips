#include <iostream>
#include <vector>

using namespace std; //serve a non scrivere std


int main(){
    cout<<"Hello World"<<"\n";
    vector<double> a;   //definisce il vettore

    
    for(int i=0;i<5;i++){
        a.push_back(i);      //serve a fare append
        
    }
    
    for(double valore : a){  //si legge come  per ogni valore in a
        cout << valore <<"\n";
    }
    
    
    
    return 0;
    
}
