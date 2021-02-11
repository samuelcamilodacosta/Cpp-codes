#include <iostream>
using namespace std;
int main(){
	setlocale(LC_ALL,"");
	int classeVeiculo;
	double pedagio;
	cout << "Informe a classe do veículo: ";
	cin >> classeVeiculo;
	switch(classeVeiculo){
		case 1:
			cout <<"Carro de passageiro.\n";
			pedagio = 0.50;
			break;
		case 2:
			cout << "Ônibus.\n";
			pedagio = 2.00;
			break;
		case 3:
			cout << "Caminhão.\n";
			pedagio = 2.00;
			break;
		default:
			cout << "Classe de veículo desconhecida!\n";
	}
	system("pause");
	return 0;
}
