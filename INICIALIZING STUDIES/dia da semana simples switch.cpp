#include <bits/stdc++.h>
using namespace std;
int main(){
	setlocale(LC_ALL,"");
	int valor = 0;
	cout << "Informe um valor referente ao dia da semana de 1 à 7: " << endl;
	cin >> valor;
	switch(valor){
		case 1:
			cout << "\tO dia escolhido foi Domingo!" << endl;
			break;
		case 2:
			cout << "\tO dia escolhido foi Segunda!" << endl;
			break;
		case 3:
			cout << "\tO dia escolhido foi Terça-feira!" << endl;
			break;
		case 4:
			cout << "\tO dia escolhido foi Quarta-feira!" << endl;
			break;
		case 5:
			cout << "\tO dia escolhido foi Quinta-feira!" << endl;
			break;
		case 6:
			cout << "\tO dia escolhido foi Sexta-feira!" << endl;
			break;
		case 7:
			cout << "\tO dia escolhido foi Sábado!" << endl;
			break;
		default: 
			cout << "\tO dia escolhido foi inválido!" << endl;
	}
	
	return 0;
}
