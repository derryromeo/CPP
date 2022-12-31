//Program Kombinasi
#include<iostream>
using namespace std;
int main(){
	
//Deklarasi	
    int n, k, x1=1, x2=1, x3=1, kombinasi;
    
//Algoritma
	cout << "Program Kombinasi" << endl;
	cout << "N, K Bilangan Asli. Asumsikan n > k." << endl;
	cout << endl;
    cout << "Masukan nilai n : "; cin >> n;
    cout << "Masukan nilai k : "; cin >> k;
	cout <<endl;
	cout << "n = " << n << endl;
    cout << "k = " << k << endl;
    for(int i=1; i<=n; i++){
        x1=x1*i;
    }
    for(int i=1; i<=k; i++){
        x2=x2*i;
    }
    for(int i=1; i<=n-k;i++){
        x3=x3*i;
    }
    kombinasi=x1/(x2*x3);
    cout << "nCk = " << kombinasi << endl;
    cin.get();
    cin.get();
}
