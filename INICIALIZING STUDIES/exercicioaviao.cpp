#include <bits/stdc++.h>
#include "aviao.h"
using namespace std;

int main(){
	setlocale(LC_ALL,"");
	Aviao *av1 = new Aviao(1);
	Aviao *av2 = new Aviao(2);
	Aviao *av3 = new Aviao(3);
	
	av1->imprimir();
	av2->imprimir();
	av3->imprimir();
	
	return 0;
}

