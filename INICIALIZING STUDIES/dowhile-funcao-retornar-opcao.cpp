#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int menu(){
int i=0;
do{
	printf("Escolha uma opção: \n");
	printf("(1) Opção 1\n");
	printf("(2) Opção 2\n");
	printf("(3) Opção 3\n");
	printf("(4) Opção 4\n");
	printf("(5) Opção 5\n");
	scanf("%d", &i);
}	while((i<1)||(i>5));
	return i;
}
int main(){
	setlocale(LC_ALL,"");
	int opcao = menu();
	printf("Você escolheu a opção: %d\n",opcao);
	return 0;
}
