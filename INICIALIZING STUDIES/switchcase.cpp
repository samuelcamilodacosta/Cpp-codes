#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"");
	char ch;
	printf("Digite um s�mbolo de pontua��o: ");
	scanf("%c", &ch);
	switch( ch ){
		case '.': printf("Ponto. \n"); break;
		case ',': printf("Virgula. \n"); break;
		case ':': printf("Dois pontos.\n"); break;
		case ';': printf("Ponto virgula.\n"); break;
		default : printf("N�o � pontua��o.\n");
	}
	system("pause");
	return 0;
}
