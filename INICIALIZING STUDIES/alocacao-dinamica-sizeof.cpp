#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
struct ponto{
	int x,y;
};
int main(){
	printf("Char: %d\n", sizeof(char));
	printf("Int: %d\n", sizeof(int));
	printf("Float: %d\n", sizeof(float));
	printf("Double: %d\n", sizeof(double));
	printf("Struct ponto: %d\n",sizeof(struct ponto));
	system("pause");
	return 0;
}
