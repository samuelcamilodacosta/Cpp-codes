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
		cout << "\tInforme o tipo de ve�culo: ";
		cin >> tp;
		Veiculo *v1 = new Veiculo(tp);
		cout << "\tDigite: \n\t1 - caso o ve�culo esteja ligado e \n\t0 - caso o ve�culo esteja desligado: : ";
		cin >> l;
		v1->setligado(l);
		cout << "\n\n\tNome do ve�culo: ";
		cout << v1->getnome() << endl;
		cout << "\tVelocidade m�xima do ve�culo �: ";
		cout  << v1->getvelocidadeMaxima() << endl;
		(v1->getligado() == true) ? cout << "\tO ve�culo est� ligado!" : cout <<"\tO ve�culo est� desligado!";	
		cout << "\n\t=====================" << endl;
		cout << "\tDeseja informar outro(s) ve�culo(s)? [s]/[n] >";
		cin >> opcao;
		if(opcao=='s' or opcao=='S'){
			goto inicio;
			}
	return 0;
}

