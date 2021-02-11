#include <bits/stdc++.h>
//Verificação simples de um número, caso ele seja par ou impar

using namespace std;
int main(){
	setlocale(LC_ALL,"");
	int num;
	cout << "Informe o número para verificação: ";
	cin >> num;
	if(num%2 == 0){
		cout << "Esse número é par!" << endl;
	}
	else{
		cout << "Esse número é ímpar!" << endl;
	}
	return 0;
}
