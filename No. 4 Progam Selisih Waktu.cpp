//Program DurasiWaktuAntara
#include<iostream>
using namespace std;
int main(){
//Deklarasi
	int jam1, menit1, detik1, jam2, menit2, detik2, w1, w2, TotalDurasiWaktu, jam3, menit3, detik3, sisa;
//Algoritma
	cout<<"Masukan durasi waktu"<<endl;
	cout<<endl;
	cout<<"Jam1 = "; cin>>jam1;
	cout<<"Menit1 = "; cin>>menit1;
	cout<<"Detik1 = "; cin>>detik1;
	cout<<endl;
	cout<<"Jam2 = "; cin>>jam2;
	cout<<"Menit2 = "; cin>>menit2;
	cout<<"Detik2 = "; cin>>detik2;
	cout<<endl;
	w1 = (jam1*3600)+(menit1*60)+(detik1);
	w2 = (jam2*3600)+(menit2*60)+(detik2);
	TotalDurasiWaktu = (w2-w1);
	jam3 = TotalDurasiWaktu/3600;
	sisa = TotalDurasiWaktu%3600;
	menit3 = sisa/60;
	detik3 = sisa%60;
	cout<<"Durasi Waktu Antara"<<endl;
	cout<< jam3 << " jam " << menit3 << " menit " << detik3<< " detik " << endl;
	cin.get();
}
