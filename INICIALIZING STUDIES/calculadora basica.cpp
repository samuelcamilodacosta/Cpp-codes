#include <bits/stdc++.h>

//Calculadora básica de valor total, exercício de treinamento do curso de C++

using namespace std;
int main(){
	setlocale(LC_ALL,"");
	int total = 0;
	int menuOpcao1 = 0;
	do{
		cout << "Bem-vindo a Calculadora Basica" << endl;
		cout << "========= Menu Principal ==========" << endl;
		cout << "\t 0 - Sair do programa" << endl;
		cout << "\t 1 - Calculadora" << endl;
		cout << "menu> ";
		cin >> menuOpcao1;
		cout << "\t\t >> " << menuOpcao1 << " <<" <<endl;
		if(menuOpcao1 != 0){
			int menuInterno = 0;
			do{
				int valor = 0;
				system("CLS");
				cout << "\t 0 - Voltar ao Menu Principal" << endl;
				cout << "\t 1 - Somar com" << endl;
				cout << "\t 2 - Subtrair de" << endl;
				cout << "\t 3 - Multiplicar com " << endl;
				cout << "\t 4 - Dividir com" << endl;
				cout << "\t 5 - Mostrar total" << endl;
				cout << "Total> " << total << endl;
				cout << "Informe a opção desejada> " << endl;
				cout << "Menu > ";
				cin >> menuInterno;
				if(menuInterno != 5 && menuInterno != 0){
					cout << "Total = " << total <<(
					(menuInterno == 1) ? " + " :
						(menuInterno == 2) ? " - " :
							(menuInterno == 3) ? " * " : " / " 
					);
					cin >> valor;
				}
				if(menuInterno != 0){
					switch(menuInterno){
						case 1:
							total += valor;
							break;
						case 2:
							total -= valor;
							break;
						case 3:
							total *= valor;
							break;
						case 4:
							total /= valor;
							break;
						case 5:
							cout << "\t\t Valor total > " << total << " <<" <<endl;
							getchar();
							getchar();
						break;
					}
				}
			}while(menuInterno != 0);
		}
	}while(menuOpcao1 != 0);
	return 0;
}
