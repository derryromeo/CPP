//Program Palindrom
#include <iostream>
#include<string.h>
using namespace std;
int main() {

//Deklarasi
    string kata;
    int n, i;
    bool palindrome = true;
	
//Algoritma
	cout << "Program Palindrom" << endl;
    cout << "Masukkan Kata : "; getline(cin, kata);
    n = kata.length();
    for(i = 0; i < n; i++){
        if(kata[i] != kata[n-i-1])
        {
            palindrome = false;
            break;
        }
    }
    if(palindrome == true)
        cout << "Palindrom";
    else
        cout << "Bukan Palindrom"; cin.ignore();
    cin.get();
    cin.get();
}
