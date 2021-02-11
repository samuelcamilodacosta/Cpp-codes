#include <stdio.h>
#include <stdlib.h>
int main(char **argv, int arc){
	int *p;
	int *aux;
	int i = 0;
	p = (int *) malloc(10*sizeof(int));
	for(aux=p, i = 0; i<10; ++i){
		printf("%d - %p \n", *aux, aux);
		*aux = i;
		aux++;
	}
	for(aux = p, i = 0; i < 10; ++i){
		printf("%d - %p\n", *aux, aux);
		aux++;
	}
	free(p);
	return 0;	
}
