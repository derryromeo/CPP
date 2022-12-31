//Program Persamaan Kuadrat
#include <iostream>
#include <math.h> /* sqrt*/ 
using namespace std;
int main(){
//Deklarasi
	float a,b,c,D,x1,x2,p,q;
//Algoritma
    cout<<"Program Persamaan Kuadrat"<<endl;
    cout<<endl;
	cout<<"Masukan nilai a: "; cin>>a;
	cout<<"Masukan nilai b: "; cin>>b;
	cout<<"Masukan nilai c: "; cin>>c;
	cout<<endl;
	D =(b*b)-(4*a*c);
	x1 = (-b + sqrt(D))/2*a;
	x2 = (-b - sqrt(D))/2*a;
	p = -b/2*a;
	q = sqrt(-D)/2*a;
	if (D>0)
		cout<<"Mempunyai dua akar real: x1 = "<< x1 <<" dan x2 ="<< x2 <<endl;
    else
    	if(D==0)
			cout<<"Mempunyai satu akar real: x1 = " << x1 << endl; 	
		else
			cout<<"Mempunyai 2 akar imaginer: x1 =  "<< p << " + i"<< q << ",  x2 =  "<< p << " - i"<< q << endl;		
	cin.get();
	cin.get();
}
