#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int menu(){
int i=0;
do{
	printf("Escolha uma op��o: \n");
	printf("(1) Op��o 1\n");
	printf("(2) Op��o 2\n");
	printf("(3) Op��o 3\n");
	printf("(4) Op��o 4\n");
	printf("(5) Op��o 5\n");
	scanf("%d", &i);
}	while((i<1)||(i>5));
	return i;
}
int main(){
	setlocale(LC_ALL,"");
	int opcao = menu();
	printf("Voc� escolheu a op��o: %d\n",opcao);
	return 0;
}
