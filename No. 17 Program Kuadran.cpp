//Program Kuadran
#include <iostream> 
using namespace std;
int main(){
//Deklarasi
	int x, y;
//Algoritma
	cout<<"Program Kuadran"<<endl;
	cout<<endl;
	cout<<"Koordinat Titik P:"<<endl;
	cout<<"X = "; cin>>x;
	cout<<"Y = "; cin>>y;
	cout<<endl;
	if ((x>0) and (y>0))
		cout<<"Titik P terletak pada kuadran: I"<<endl;
	else
		if ((x<0) and (y>0))
			cout<<"Titik P terletak pada kuadran: II"<<endl;
		else
			if ((x<0) and (y<0))
				cout<<"Titik P terletak pada kuadran: III"<<endl;
			else
				cout<<"Titik P terletak pada kuadran: IV"<<endl;
	cin.get();
	cin.get();
}		
