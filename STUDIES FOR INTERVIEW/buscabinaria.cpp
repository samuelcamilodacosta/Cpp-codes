#include <bits/stdc++.h>
using namespace std;
int buscabinaria(int vet[], int x, int n){
	int l=0, r=n, m;
	while(l<=r){
		m=(l+r)/2;
		if(vet[m]==x){
			return m;
		}
		else if(vet[m]<x){
			l=m+1;
		}
		else{
			r=m-1;
		}
	}
	return -1;
}

int main(){
	setlocale(LC_ALL,"");
	int vetor[10], num, tam=10, resultado;
	for(int i=0; i<tam; i++){
		vetor[i] = i+1;
	}
	cout << "Informe o valor para buscar no vetor >> ";
	cin >> num;
	resultado = buscabinaria(vetor, num, tam);
	if(resultado!=-1){
		cout << "A posição desse número no vetor é: " << resultado <<endl;
	}else{
		cout << "Valor não está inserido no vetor." << endl;
	}
	return 0;
}

