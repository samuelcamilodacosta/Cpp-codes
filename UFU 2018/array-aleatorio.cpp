#include <iostream>
#include <time.h>
#include <cstdlib>
int main(){
	srand(time(NULL));
	setlocale(LC_ALL, "");
	int vet[10], x, *p, min, max;
	printf("Digite o n�mero m�nimo: ");
	scanf("%d", &min);
	printf("Digite o n�mero m�ximo: ");
	scanf("%d", &max);
	for(int i = 0; i<10; i++){
	vet[i] = min + rand() % (max-min);
	printf("\n%d", vet[i]);
	}
	p = &vet[0];
	printf("\nInforme a posi��o desejada: ");
	scanf("%d", &x);
	printf("%d", *(p+x));
	return 0;
}
