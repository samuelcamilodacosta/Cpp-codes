#include <bits/stdc++.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"");
	int n, gremio=0, inter=0, cont=0, vitinter=0, vitgremio=0, empate=0;
	inicio:
		cin >> inter;
		cin >> gremio;
		if(inter>gremio){
			vitinter++;
		}else if(gremio>inter){
			vitgremio++;
		}else{
			empate++;
		}
		cont++;
		cout << "Novo grenal (1-sim 2-nao)" << endl;
		cin >> n;
		if(n==1){
			goto inicio;
		}
	cout << cont << " grenais" << endl;
	cout << "Inter:" << vitinter << endl;
	cout << "Gremio:" << vitgremio << endl;
	cout << "Empates:" << empate << endl;
	if(vitinter>vitgremio){
		cout << "Inter venceu mais" << endl;
	}
	if(vitgremio>vitinter){
		cout << "Gremio venceu mais" << endl;
	}
	return 0;
}

