#include <iostream>
using namespace std;
int main(){
	setlocale(LC_ALL,"");
	const double TAXA = 6.9;
	double deposito;
	cout << "Digite o total do seu dep�sito $ ";
	cin >> deposito;
	double novoBalanco;
	novoBalanco = deposito + deposito*(TAXA/100);
	cout << "Em um ano, esse deposito aumentar� para\n"
		 << "$" << novoBalanco << "uma quantia real pela qual vale a pena esperar.\n";
	system("pause");	 
	return 0;
}

