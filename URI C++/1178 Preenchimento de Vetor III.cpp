#include <bits/stdc++.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"");
	double num=0, vet[100];
	cin >> num;
	vet[0] = num;
	cout << fixed;
	cout.precision(4);
	cout << "N[0] = " << vet[0] << endl;
	for(int i=1; i<100; i++){
		vet[i] = vet[i-1]/2;
		cout << "N[" << i << "] = " << vet[i] << endl;
	}
	return 0;
}

