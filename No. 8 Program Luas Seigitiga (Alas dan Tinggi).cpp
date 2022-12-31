/*Program LuasSegitiga*/
#include <iostream>    
#include <math.h>
using namespace std;
int main(){
	
/*Deklarasi*/
  int alas, tinggi;
  float luas;
  
/*Algoritma*/
  cout << "Menghitung Luas Segitiga\n";
  cout <<endl;
  cout << "Alas = "; cin >> alas;
  cout << "Tinggi = "; cin >> tinggi;
  luas = (alas*tinggi)/2;
  cout <<endl;
  cout << "Luas = " << luas << endl;
  cin.get();
  cin.get();
}
