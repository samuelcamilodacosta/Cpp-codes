#include <bits/stdc++.h>
using namespace std;
int main(){
	setlocale(LC_ALL,"");
	string cpf;
	int i;
	cin >> cpf;
	for(i=0; i<3; i++){
		cout << cpf[i];
	}
		cout << endl;
	for(i=4; i<7; i++){
		cout << cpf[i];
	}
		cout << endl;
	for(i=8; i<11; i++){
		cout << cpf[i];
	}
		cout << endl;
	for(i=12; i<14; i++){
		cout << cpf[i];
	}
		cout << endl;
	return 0;
}

