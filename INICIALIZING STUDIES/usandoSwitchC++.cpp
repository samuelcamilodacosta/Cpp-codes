#include <iostream>
using namespace std;
int main(){
	setlocale(LC_ALL,"");
	int classeVeiculo;
	double pedagio;
	cout << "Informe a classe do ve�culo: ";
	cin >> classeVeiculo;
	switch(classeVeiculo){
		case 1:
			cout <<"Carro de passageiro.\n";
			pedagio = 0.50;
			break;
		case 2:
			cout << "�nibus.\n";
			pedagio = 2.00;
			break;
		case 3:
			cout << "Caminh�o.\n";
			pedagio = 2.00;
			break;
		default:
			cout << "Classe de ve�culo desconhecida!\n";
	}
	system("pause");
	return 0;
}
