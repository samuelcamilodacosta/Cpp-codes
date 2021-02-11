#include <stdio.h>

int main (){
	int n;
	printf("Informe o tamanho do vetor: ");
	scanf("%d", &n);
	int vetor[n];
	for(int i=0; i<n; i++){
		printf("Informe o %dº valor: ", i+1);
		scanf("%d", &vetor[i]);
	}
	for(int i=0; i<n; i++){
	printf("%d ", vetor[i]);
	}
	return 0;
}
