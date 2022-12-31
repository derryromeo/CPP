/*Program LuasSegitiga*/
#include <iostream>    
#include <math.h> /* sin */
using namespace std;
int main(){
	
/*Deklarasi*/
  int sisi_a, sisi_b, sudut;
  float luas;
  
/*Algoritma*/
  cout << "Menghitung Luas Segitiga\n";
  cout << endl;
  cout << "Sisi a = "; cin >> sisi_a;
  cout << "Sisi b = "; cin >> sisi_b;
  cout << "Sudut  = "; cin >> sudut;
  luas = (sisi_a*sisi_b*sin(sudut))/2;
  cout << endl;
  cout << "Luas = " << luas << endl;
  cin.get();
  cin.get();
}
