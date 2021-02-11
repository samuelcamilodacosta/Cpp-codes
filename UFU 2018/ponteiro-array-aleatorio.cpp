#include <iostream>
#include <time.h>
#include <stdlib.h>
int main(){
	srand(time(NULL));
	setlocale(LC_ALL,"");
	int vet[10], x, *p;
	for(int i = 0; i < 10; i++){
	vet[i] = rand() % 100;	
	}
	p = &vet[4];
	printf("O valor é: %d", *p);
	// srand(time(NULL));
	// rand() % 100;
	return 0;
}
