//Program Berat badan
#include <iostream>
#include <math.h>
using namespace std;
int main(){
//Deklarasi
	int x, y, z, bb;
//Algoritma
	cout<<"Program Berat Badan Ideal"<<endl;
	cout<<endl;
	cout<<"Tinggi badan: "; cin>> x;
	cout<<"Berat badan: "; cin>> y;
	z = (x-100-(10/100)*(x-100));
	bb = y-z;
	cout<<endl;
	if (bb==2.5)
		cout<<"Berat badan ideal"<<endl;
	else
		if (bb<=2.5)
			cout<<"Berat badan kurus"<<endl;
		else
			cout<<"Berat badan gemuk"<<endl;
	cout<<"Berat badan ideal: "<<z<<"kg"<<endl;
	cin.get();
}
