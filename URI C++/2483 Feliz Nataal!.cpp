#include <bits/stdc++.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"");
	int qtd;
	cin >> qtd;
	if(qtd>1){
		cout << "Feliz nat";
		for(int i=0; i<qtd; i++){
			cout << "a";
		}
		cout << "l!" << endl;
	}
	return 0;
}

