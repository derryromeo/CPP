//Program Urutan Bilangan
#include <iostream>
using namespace std;
int main(){
//Deklarasi
	int a, b, c;
//Algoritma
	cout << "Program Urutan Bilangan"<<endl;
	cout<<endl;
	cout<<"A = "; cin>>a;
	cout<<"B = "; cin>>b;
	cout<<"C = "; cin>>c;
	cout<<endl;
	if ((c>b)and (b>a))
		cout<<"Urutan Bilangan = "<< a <<", "<< b <<", "<< c << endl;
	else
		if ((a>b) and (c>a))
			cout<<"Urutan Bilangan = "<< b <<", "<< a <<", "<< c << endl;
		else
			if ((a>c) and (b>a))
				cout<<"Urutan Bilangan = "<< c <<", "<< a <<", "<< b << endl;
			else
				if ((c>a) and (b>c))
					cout<<"Urutan Bilangan = "<< a <<", "<< c <<", "<< b << endl;
				else
					if ((a>c) and (c>b))
						cout<<"Urutan Bilangan = "<< b <<", "<< c <<", "<< a << endl;
					else
						cout<<"Urutan Bilangan = "<< c <<", "<< b <<", "<< a << endl;
	cin.get();
	cin.get();
}		
