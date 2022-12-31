//Program  Formasi Bintang
#include<iostream>
using namespace std;
int main(){
	
//Deklarasi	
    int i, j, n;
    
//Algoritma
	cout << "Program Formasi Bintang" << endl;
	cout << endl;
    cout << "Masukkan jumlah baris: "; cin >> n;
    cout << endl;
	for (i = 0; i < n; i++)
    {
        for (j = 0; j < (2 * n); j++)
        {
            if (i + j <= n - 1)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
	}
    for (i = 1; i < n; i++)
    {
        for (j = 0; j < (2 * n); j++)
        {
            if (i >= j)
                cout << "*";
            else
                cout << " ";
                 }
        cout << endl;
	}
	cin.get();
	cin.get();
	}
