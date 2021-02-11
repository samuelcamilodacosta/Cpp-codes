#include <bits/stdc++.h>
//Operador Ternário
using namespace std;

int main(){
	setlocale(LC_ALL,"");
	int num = 0;
	cout << "Digite um número diferente de 10: ";
	cin >> num;
	string texto = (num<10) ? "número menor que 10." : "número maior que 10.";
	cout << "O valor digitado é um " << texto << endl;
	return 0;
}
