#include <bits/stdc++.h>
//Verifica��o simples de um n�mero, caso ele seja par ou impar

using namespace std;
int main(){
	setlocale(LC_ALL,"");
	int num;
	cout << "Informe o n�mero para verifica��o: ";
	cin >> num;
	if(num%2 == 0){
		cout << "Esse n�mero � par!" << endl;
	}
	else{
		cout << "Esse n�mero � �mpar!" << endl;
	}
	return 0;
}
