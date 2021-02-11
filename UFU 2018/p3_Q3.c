#include <stdio.h>
#include <stdlib.h>
#define DC 0 
#define DD 2 
#define DU 7 
typedef
	struct Pilha {
		char dado;
		struct Pilha * proximo;
	}
Pilha;
char top(Pilha * pilha) {
	return pilha? pilha->dado : '\0';
}
void push(Pilha ** ppilha, char dado) {
	Pilha * novo = NULL;
	while(!novo)
		novo = (Pilha *) malloc(sizeof(Pilha));
	novo->dado = dado;
	novo->proximo = *ppilha;
	*ppilha = novo;
}
void pop(Pilha ** ppilha) {
	Pilha * aux = NULL;
	if(*ppilha) {
		aux = (*ppilha)->proximo;
		free(*ppilha);
		*ppilha = aux;
	}
}
int main() {
	Pilha * origem = NULL, * resposta = NULL;
	int i, j;
	for(i = 0; i < 26; i++)
		push(&origem, i+65);
	for(i = 0; i < 3; i++)
		for(j = 0; j < 10; j++)
			push(&origem, j+48);
			
	for (i = 0; i < 10; i++) {
   		if (top(origem) == '7') push(&resposta, top(origem));
    	pop(&origem);
	}
	for (i = 0; i < 10; i++) {
    	if (top(origem) == '2') push(&resposta, top(origem));
    	pop(&origem);
}
	for (i = 0; i < 10; i++) {
    	if (top(origem) == '0') push(&resposta, top(origem));
    	pop(&origem);
	}
	for (i = 0; i < 26; i++) {
    	if (top(origem) == 'S') push(&resposta, top(origem));
    	pop(&origem);
	}
	printf("Matricula: %d%d%d\n",DC,DD,DU);
	printf("A resposta armazenada:\n");
	while(resposta) {
		printf("%c",top(resposta));
		pop(&resposta);
	}
	printf("\n"); // Exemplo de resposta: I123
	return EXIT_SUCCESS;
}
