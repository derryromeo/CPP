/*Program LuasSegitiga*/
#include <iostream>
#include <math.h> /* sqrt*/      
using namespace std;
int main(){
  
/*Deklarasi*/
  int a, b, c;
  float luas, s;
  
/*Algoritma*/
  cout << "Menghitung LuasSegitiga\n";
  cout<<endl;
  cout << "sisi_a = "; cin >> a;
  cout << "sisi_b = "; cin >> b;
  cout << "sisi_c = "; cin >> c;
  
  cout<<endl;
  s = (a+b+c)/2;
  cout<<"S = " << s <<endl;
  
  cout<<endl;
  luas = sqrt(s*(s-a)*(s-b)*(s-c));
  cout << "LuasSegitga = "<< luas << endl;
  cin.get();
  cin.get();
}
