/*Program KonversiMataUang*/
#include <iostream>
using namespace std;
int main(){
/*Deklarasi*/
	float rupiah, dollar, euro, dirham, yen;
/*Algoritma*/
	cout << "Konversi Mata Uang Rupiah\n";
	cout << endl;
	cout << "Nominal Konversi Rupiah = Rp"; cin >> rupiah ;
	cout << endl;
	dollar = rupiah/14876.50;
	euro = rupiah/17465.17;
	dirham = rupiah/4048.69;
	yen = rupiah/141.08;
	cout << "Nominal Hasil Konversi\n";
	cout << "Dollar = "<< dollar << endl;
	cout << "Euro   = "<< euro << endl;
	cout << "Dirham = "<< dirham << endl;
	cout << "Yen    = "<< yen << endl;
    cin.get();
    cin.get();
}
