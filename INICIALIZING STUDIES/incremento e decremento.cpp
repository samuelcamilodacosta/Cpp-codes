#include <bits/stdc++.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"");
	//Incremento ++ e Decremento --
	cout << "\tOperações de Incrementos" << endl;
	int i=0, i1 = 0;
	cout << "Pré = " << ++i << endl;
	cout << "Pós = " << i1++ << endl;
	cout << "Pós = " << i1 << endl << endl;
	
	cout << "\tOperações de Decrementos" << endl;
	i=0, i1=0;
	cout << "Pré = " << --i << endl;
	cout << "Pós = " << i1-- << endl;
	cout << "Pós = " << i1 << endl;
	
	return 0;
}
