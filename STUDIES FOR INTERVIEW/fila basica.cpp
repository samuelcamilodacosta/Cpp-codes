#include <bits/stdc++.h>
using namespace std;

/*
empty();
size();
front();
back();
push();
pop();
*/

int main(){
	setlocale(LC_ALL,"");
	queue <string> cartas;
	
	cartas.push("Rei de Copas");
	cartas.push("Rei de Espada");
	cartas.push("Rei de Ouro");
	cartas.push("Rei de Paus");
	cout << "Primeira carta da fila: " << cartas.front() << endl;
	cout << "Última carta da fila: " << cartas.back() << endl;
	cout << "Tamanho da fila: " << cartas.size() << endl;
	
	while(!cartas.empty()){
		cout << "Primeira carta: " << cartas.front() << endl; 
		cartas.pop();
	}
	
	return 0;
}

