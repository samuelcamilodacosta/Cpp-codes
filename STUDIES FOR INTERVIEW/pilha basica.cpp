#include <bits/stdc++.h>
using namespace std;

//cartas.top();, cartas.size();, cartas.pop(); cartas.empty();

int main(){
	setlocale(LC_ALL,"");
	stack <string> cartas;
	
	cartas.push("Dez de Copas");
	cartas.push("Dez de Espada");
	cartas.push("Dez de Ouro");
	cartas.push("Dez de Paus");
	
	cout << "Carta do topo: " << cartas.top() << endl;
	cout << "Tamanho da pilha: " << cartas.size() << endl;
	cartas.pop();
	cout << "Nova carta do topo: " << cartas.top() << endl;
	cout << "Tamanho da pilha: " << cartas.size() << endl;
	
	//while(!cartas.empty())
	return 0;
}

