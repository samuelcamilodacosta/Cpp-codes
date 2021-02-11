#include <bits/stdc++.h>
#include "classe.h"
using namespace std;

int main(){
	setlocale(LC_ALL,"");
	int tp, l, i=1;
	char opcao;
	inicio:
		system("cls");
		cout << "\t=====================" << endl;
		cout << "\tInforme o tipo de veículo: ";
		cin >> tp;
		Veiculo *v1 = new Veiculo(tp);
		cout << "\tDigite: \n\t1 - caso o veículo esteja ligado e \n\t0 - caso o veículo esteja desligado: : ";
		cin >> l;
		v1->setligado(l);
		cout << "\n\n\tNome do veículo: ";
		cout << v1->getnome() << endl;
		cout << "\tVelocidade máxima do veículo é: ";
		cout  << v1->getvelocidadeMaxima() << endl;
		(v1->getligado() == true) ? cout << "\tO veículo está ligado!" : cout <<"\tO veículo está desligado!";	
		cout << "\n\t=====================" << endl;
		cout << "\tDeseja informar outro(s) veículo(s)? [s]/[n] >";
		cin >> opcao;
		if(opcao=='s' or opcao=='S'){
			goto inicio;
			}
	return 0;
}

