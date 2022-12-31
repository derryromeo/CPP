//Program Titik Tengah
#include <iostream>
#include <math.h>
using namespace std;
int main(){
//Deklarasi
	int x1,y1,x2,y2;
	float x3,y3;
//Algoritma
	cout<<"Program Titik Tengah"<<endl;
	cout<<endl;
	cout<<"x1 = "; cin >> x1;
	cout<<"y1 = "; cin >> y1;
	cout<<"x2 = "; cin >> x2;
	cout<<"y2 = "; cin >> y2;
	cout<<endl;
	x3 = (x1+x2)/2;
	y3 = (y1+y2)/2;
	cout<<"Titik Tengah: (" << x3 << ", " << y3 << ")"<<endl;
	cin.get();
}
