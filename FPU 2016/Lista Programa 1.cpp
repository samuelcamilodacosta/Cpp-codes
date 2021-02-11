#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
int main(){
	system("color 7f");
	int i, j, aux = 0, vetor[5];
	setlocale(LC_ALL,"");
	printf("Informe 5 números. \n");
	for(i=0; i<5; i++){
		printf("Informe o valor %dº valor: ", i+1);
		scanf("%d", &vetor[i]);
	}
	
	for(i=0; i<5; i++){
		for(j=i+0; j<5; j++){
			if(vetor[i]>vetor[j]){
				aux = vetor[i];
				vetor[i] = vetor[j];
				vetor[j] = aux;
			}
		}
	}
	printf("A ordem crescente é: \a");
	for(i=0; i<5; i++){
		printf(" %d", vetor[i]);
	}
	printf(".");
	return 0; 
}
