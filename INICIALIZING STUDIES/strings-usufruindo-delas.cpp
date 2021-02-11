#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
int main(){
	//Lendo e escrevendo uma string
	//Forma convencional de declaração
	//char palavra[50] = {'J','o','a','o','\0'};
	char palavra[50];
	printf("Digite uma palavra: ");
	scanf("%s", palavra);
	printf("\nPalavra lida: %s",palavra);
	printf("\nDigite uma frase: ");
	gets(palavra);
	printf("\nFrase lida: %s\n",palavra);
	//Para descartar lixo de memória, cortes de frases, etc.
	palavra[7] = '\0';
	printf("\nPalavra: %s\n",palavra);
	
	//tamanho de uma string - strlen
	int tamanho = strlen(palavra);
	printf("\nTamanho = %d\n", tamanho);
	//imprimindo a palavra de trás para frente
	for(int i=strlen(palavra)-1; i>=0; i--){
		printf("%c",palavra[i]);
	}
	//copiando uma string - strcpy
	char novapalavra[50];
	strcpy(novapalavra,palavra);
	printf("\nCopia = %s\n",novapalavra);
	
	//concatenar = copiar uma string e somar a outra - strcat
	char palavra1[20] = "Bom ";
	char palavra2[20] = "dia";
	strcat(palavra1,palavra2);
	printf(" %s\n",palavra1);
	
	//comparando strings - strcmp
	(strcmp(palavra1,palavra2) == 0) ? printf("Strings iguais.\n") : printf("Strings diferentes.\n"); // comparando se iguais ou diferentes.
	system("pause");
	return 0;
}
