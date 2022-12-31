//Program Kelipatan
#include <iostream> 
using namespace std;
int main(){
//Deklarasi
	int N, K;
//Algoritma
	cout<< "Program Kelipatan"<<endl;
	cout<<endl;
	cout<<"N = "; cin>>N;
	cout<<"K = "; cin>>K;
	cout<<endl;
	if (N%K==0)
		cout<< N << " merupakan kelipatan " << K << endl;
	else
		cout<< N << " bukan merupakan kelipatan " << K << endl;
	cin.get();
	cin.get();
}
