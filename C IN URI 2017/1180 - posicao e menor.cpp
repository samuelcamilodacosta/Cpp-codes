#include <bits/stdc++.h>
using namespace std;
int main(){
	int n, menor, posicao;
	scanf("%d", &n);
	int vet[n];
	for(int i=0; i<n; i++){
		if(i==0){ menor = vet[i]; posicao=0;}
		scanf("%d", &vet[i]);
		if(vet[i]<menor){
			menor = vet[i];
			posicao = i;
		}
	}
	cout << "Menor valor: " << menor << endl;
	cout << "Posicao: " << posicao << endl;
	return 0;
}
