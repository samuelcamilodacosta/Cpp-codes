#include <bits/stdc++.h>
using namespace std;

/*
Leia um valor de ponto flutuante com duas casas decimais. Este valor representa um valor monetário. A seguir, calcule o menor número de notas e moedas possíveis no qual o valor pode ser decomposto. As notas consideradas são de 100, 50, 20, 10, 5, 2. As moedas possíveis são de 1, 0.50, 0.25, 0.10, 0.05 e 0.01. A seguir mostre a relação de notas necessárias.

Entrada
O arquivo de entrada contém um valor de ponto flutuante N (0 = N = 1000000.00).

Saída
Imprima a quantidade mínima de notas e moedas necessárias para trocar o valor inicial, conforme exemplo fornecido.

Obs: Utilize ponto (.) para separar a parte decimal.
*/

int main(){
	setlocale(LC_ALL,"");
	float num;
	cin >> num;
	num = num*100;
	int cont=0;
	cout << "NOTAS:" << endl;
	while(num>=10000){
		cont++;
		num = num - 10000;
	}
	cout << cont << " nota(s) de R$ 100.00" << endl;
	cont=0;
	while(num>=5000){
		cont++;
		num = num - 5000;
	}
	cout << cont << " nota(s) de R$ 50.00" << endl;
	cont=0;
	while(num>=2000){
		cont++;
		num = num - 2000;
	}
	cout << cont << " nota(s) de R$ 20.00" << endl;
	cont=0;
	while(num>=1000){
		cont++;
		num = num - 1000;
	}
	cout << cont << " nota(s) de R$ 10.00" << endl;
	cont=0;
	while(num>=500){
		cont++;
		num = num - 500;
	}
	cout << cont << " nota(s) de R$ 5.00" << endl;
	cont=0;
	while(num>=200){
		cont++;
		num = num - 200;
	}
	cout << cont << " nota(s) de R$ 2.00" << endl;
	cout << "MOEDAS:" << endl;
	cont=0;
	while(num>=100){
		cont++;
		num = num - 100;
	}
	cout << cont << " moeda(s) de R$ 1.00" << endl;
	cont = 0;
	while(num>=50){
		cont++;
		num = num - 50;
	}
	cout << cont << " moeda(s) de R$ 0.50" << endl;
	cont = 0;
	while(num>=25){
		cont++;
		num = num - 25;
	}
	cout << cont << " moeda(s) de R$ 0.25" << endl;
	cont = 0;
	while(num>=10){
		cont++;
		num = num - 10;
	}
	cout << cont << " moeda(s) de R$ 0.10" << endl;
	cont = 0;
	while(num>=5){
		cont++;
		num = num - 5;
	}
	cout << cont << " moeda(s) de R$ 0.05" << endl;
	cont = 0;
	while(num>=1){
		cont++;
		num = num - 1;
	}
	cout << cont << " moeda(s) de R$ 0.01" << endl;
	return 0;
}

