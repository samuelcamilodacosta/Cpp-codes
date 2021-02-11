#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	int *p;
	p = (int *) malloc(5*sizeof(int));
	if(p == NULL){
		printf("Erro: Sem Memoria!\n");
		exit(1);
	}
	int i;
	for(i=0; i<5; i++){
		printf("Digite p[%d]: ",i);
		scanf("%d", &p[i]);
	}
	free(p);
	system("pause");
	return 0;
}
