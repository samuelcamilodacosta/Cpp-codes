#include <iostream>
#include <time.h>
#include <cstdlib>
int main(){
	srand(time(NULL));
	setlocale(LC_ALL, "");
	int vet[30], *p;
	for(int i = 0; i < 30; i++){
	vet[i] = rand() % 100;}
	p = &vet[0];
	printf("Os valores de 20 a 30 são: ");
	for(int i = 20; i <30; i++){
	printf("%d, ", *(p+i));}
	return 0;
}
