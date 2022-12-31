//Program AlamatLengkap
#include <iostream>
using namespace std;
int main(){
//Deklarasi
	string jalan, kota, kodepos;
//Algoritma
	cout<<"Program Alamat Lengkap"<<endl;
	cout<<endl;
	cout<<"Jalan : "; getline (cin, jalan); 
	cout<<"Kota : "; getline (cin, kota); 
	cout<<"Kode Pos : "; getline (cin, kodepos); 
	cout<<endl;
	cout<<"Alamat Lengkap: "<< jalan << ", " << kota << ", " << kodepos <<endl;
	cin.get();
}
