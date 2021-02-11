#include <bits/stdc++.h>
int main(){
	setlocale(LC_ALL,"");
	int n=0, tam, i, j;
	printf("Informe o tamanho do vetor: ");
	scanf("%d", &tam);
	int vet[tam], vet2[tam];
	printf("Informe os valores do vetor: \n");
	for(i=0; i<tam; i++){
		printf("Vetor[%d]: ", i+1);
		scanf("%d", &vet[i]);
		}
	while(n!=1){
		int aux=0, maior=0, num;
		if(n==1){
			break;
		}
		else if(n==2){
		for(i=0; i<tam; i++){
			if(vet[i]>maior){ 
			maior=vet[i]; 
			}
		}
		printf("Maior número: %d", maior);
		}
		else if(n==3 || n==4){
			for(i=0; i<tam; i++){
				for(j=0; j<tam; j++){
					if(vet[i]<vet[j]){
						aux = vet[i];
						vet[i] = vet[j];
						vet[j] = aux;
					}
				}
			}
			if(n==3){
			printf("\nA ordem crescente é: ");
			for(i=0; i<tam; i++){
			printf(" %d", vet[i]);
			}
			}
			if(n==4){
			printf("\nA ordem decrescente é: ");
			for(i=tam-1; i>=0; i--){
				vet2[i]=vet[i];
				printf(" %d", vet[i]);
			}
			for(i=0; i<tam; i++){
				vet[i]=vet2[i];
			}
			}
			}
		else if(n==5){
			j=0;
			printf("Vetor de ordem invertida: ");
			for(i=tam-1; i>=0; i--){
				vet2[j] = vet[i];
				printf("%d ", vet2[j]);
				j++;
			}
			for(i=0; i<tam; i++){
				vet[i] = vet2[i];
			}
		}
		else if(n==6){
			printf("Informe o número a ser encontrado: ");
			scanf("%d", &num);
			printf("Posição(ões) em que encontramos o número: ");
			for(i=0; i<tam; i++){
				if(vet[i]==num){
					printf("%d \n", i+1);
				}
			}
		}	
		else if(n==7){
			printf("Informe o tamanho do vetor: ");
			scanf("%d", &tam);
			int vet[tam], vet2[tam];
			printf("Informe os valores do vetor: \n");
			for(i=0; i<tam; i++){
				printf("Vetor[%d]: ", i);
				scanf("%d", &vet[i]);
			}
			}	
		printf("\n1 - Sair; 2 - Maior num; 3 - Crescente; 4 - Decrescente; 5 - Inverter; 6 - Encontrar Posições; 7 - Novo vetor;");
		printf("\nInforme a opção desejada: ");
		scanf("%d", &n);
	}
	system("pause");
}
