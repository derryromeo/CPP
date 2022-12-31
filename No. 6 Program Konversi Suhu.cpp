/*Program KonversiSuhu*/
#include <iostream>
using namespace std;
int main(){
/*Deklarasi*/
    float C,F,K,R;
/*Algoritma*/
    cout<<"\Konversi Suhu Celcius\n";
    cout<<endl;
    cout<<"Celcius = "; cin>>C;
    F=C*1.8 + 32;
    K=C+273.15;
    R=C*0.8;
    cout<<endl;
    cout<<"Nilai Suhu Hasil Konversi\n";
    cout<<"Fahrenheit = "<<F<<endl;
	cout<<"Kelvin     = "<<K<<endl;
	cout<<"Reamur     = "<<R<<endl;
    cin.get();
    cin.get();
}
