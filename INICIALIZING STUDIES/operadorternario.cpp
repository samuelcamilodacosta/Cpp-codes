#include <bits/stdc++.h>
//Operador Tern�rio
using namespace std;

int main(){
	setlocale(LC_ALL,"");
	int num = 0;
	cout << "Digite um n�mero diferente de 10: ";
	cin >> num;
	string texto = (num<10) ? "n�mero menor que 10." : "n�mero maior que 10.";
	cout << "O valor digitado � um " << texto << endl;
	return 0;
}
