#include <bits/stdc++.h>
using namespace std;
int multiploDois(int x, int *vet){
	int i, cont=0;
	for(i=0; i<x; i++){
		if(vet[i]%2==0){
			cont++;
		}
	}
	return cont;	
}
int multiploTres(int x, int *vet){
	int i, cont=0;
	for(i=0; i<x; i++){
		if(vet[i]%3==0){
			cont++;
		}
	}
	return cont;	
}
int multiploQuatro(int x, int *vet){
	int i, cont=0;
	for(i=0; i<x; i++){
		if(vet[i]%4==0){
			cont++;
		}
	}
	return cont;	
}
int multiploCinco(int x, int *vet){
	int i, cont=0;
	for(i=0; i<x; i++){
		if(vet[i]%5==0){
			cont++;
		}
	}
	return cont;	
}
int main(){
	setlocale(LC_ALL,"");
	int n, i;
	cin >> n;
	int vet[n];
	for(i=0; i<n; i++){
		cin >> vet[i];
	}
	cout << multiploDois(n,vet) << " Multiplo(s) de 2" << endl;
	cout << multiploTres(n,vet) << " Multiplo(s) de 3" << endl;
	cout << multiploQuatro(n,vet) << " Multiplo(s) de 4" << endl;
	cout << multiploCinco(n,vet) << " Multiplo(s) de 5" << endl;
	return 0;
}

