#include <bits/stdc++.h>
using namespace std;
int main(){
	int par=0, impar=0, positivo=0, negativo=0, vet[5]; 
	for(int i=0; i<5; i++){
		scanf("%d", &vet[i]);
		if(vet[i]%2==0){ 
			par = par+1;
		}
		else{ 
			impar = impar+1;
		}
		if(vet[i]>0){ 
			positivo = positivo+1;
		}
		else if(vet[i]<0){ 
			negativo = negativo+1; 
		}
	}
	printf("%d valor(es) par(es)\n", par);
	printf("%d valor(es) impar(es)\n", impar);
	printf("%d valor(es) positivo(s)\n", positivo);
	printf("%d valor(es) negativo(s)\n", negativo);
	return 0;
}
