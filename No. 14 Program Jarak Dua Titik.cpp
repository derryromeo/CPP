//ProgramJarakDuaTitik
#include <iostream>
#include <math.h> /* sqrt*/  
using namespace std;
int main(){
//Deklarasi
	int x1,y1,x2,y2, x3, y3;
	float PQ;
//Algoritma
	cout<< "Program Jarak Dua Titik"<<endl;
	cout<<endl;
	cout<<"Koordinat Titik P:"<<endl;
	cout<<"x1 = "; cin>>x1;
	cout<<"y1 = "; cin>>y1;
	cout<<endl;
	cout<<"Koordinat Titik Q"<<endl;
	cout<<"x2 = "; cin>>x2;
	cout<<"y2 = "; cin>>y2;
	cout<<endl;
	x3 = x2-x1;
	y3 = y2-y1;
	PQ = sqrt(x3*x3+y3*y3);
	cout<<"Jarak P dan Q = " << PQ << endl;
	cin.get();
	cin.get();
}

