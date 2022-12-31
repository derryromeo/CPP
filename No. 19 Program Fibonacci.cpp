//Program Fibonacci Modifikasi
#include <iostream>
using namespace std;
int main(){

//Deklarasi
    int A, B, N, C,i;

//Algoritma
	cout << "Program Fibonacci Modifikasi" << endl;
	cout << "A = "; cin >> A;
	cout << "B = "; cin >> B;
    cout << "N = "; cin >> N;
    cout << endl;
    cout << "FIBONACCI "<<endl;
    for (int i=0;i<=N;i++){
        cout<<A<<" ";
        C=A+B;
        A=B;
        B=C;
    }
	cin.get();
	cin.get();
	}
