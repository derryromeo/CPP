//Program Kasir
#include <iostream>
using namespace std;
int main(){
/*Deklarasi*/
	int Rp50000, Rp20000, Rp10000, Rp5000, Rp2000, Rp1000, Rp500, Rp200, Rp100;
	int sisa50000, sisa20000, sisa10000, sisa5000, sisa2000, sisa1000, sisa500, sisa200, sisa100; 
	int nilaipembayaran, jumlahuang, kembalian;
/*Algoritma*/
	cout<<"Program Kasir"<<endl;
	cout<<endl;	
	cout<<"Masukan nominal biaya: Rp"; cin>>nilaipembayaran;
	cout<<"Jumlah uang: Rp"; cin>>jumlahuang;
	cout<<endl;
	kembalian = jumlahuang-nilaipembayaran;
	cout<<"Kembalian: Rp"<< kembalian<<endl;
	cout<<endl;
	Rp50000 = kembalian/50000;
	sisa50000 = kembalian%50000;
	Rp20000 = sisa50000/20000;
	sisa20000 = sisa50000%20000;
	Rp10000 = sisa20000/10000;
	sisa10000 = sisa20000%10000;
	Rp5000 = sisa10000/5000;
	sisa5000 = sisa10000%5000;
	Rp2000 = sisa5000/2000;
	sisa2000 = sisa5000%2000;
	Rp1000 = sisa2000/1000;
	sisa1000 = sisa2000%1000;
	Rp500 = sisa1000/500;
	sisa500 = sisa1000%500;
	Rp200 = sisa500/200;
	sisa200 = sisa500%200;  
	Rp100 = sisa200/100;
	sisa100 = sisa200%100;
	cout<<"Yang meliputi pecahan:"<<endl;
	if (Rp50000!=0)
	cout << " " << Rp50000 << " lembar uang pecahan Rp 50000"<<endl;
	if (Rp20000!=0)
	cout << " " << Rp20000 << " lembar uang pecahan Rp 20000"<<endl;
	if (Rp10000!=0)
	cout << " " << Rp10000 << " lembar uang pecahan Rp 10000"<<endl;
	if (Rp5000!=0)
	cout << " " << Rp5000 << " lembar uang pecahan Rp 5000"<<endl;
	if (Rp2000!=0)
	cout << " " << Rp2000 << " lembar uang pecahan Rp 2000"<<endl;
	if (Rp1000!=0)
	cout << " " << Rp1000 <<" lembar uang pecahan Rp 1000"<<endl;
	if (Rp500!=0)
	cout << " " << Rp500 << " koin uang pecahan Rp  500"<<endl;
	if (Rp200!=0)
	cout << " " << Rp200 << " koin uang pecahan Rp  200"<<endl;
	if (Rp100!=0)
	cout << " " << Rp100 <<" koin uang pecahan Rp  100"<<endl;
	cin.get();
	cin.get();
}
