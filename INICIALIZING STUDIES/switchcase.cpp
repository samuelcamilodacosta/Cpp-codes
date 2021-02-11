#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"");
	char ch;
	printf("Digite um símbolo de pontuação: ");
	scanf("%c", &ch);
	switch( ch ){
		case '.': printf("Ponto. \n"); break;
		case ',': printf("Virgula. \n"); break;
		case ':': printf("Dois pontos.\n"); break;
		case ';': printf("Ponto virgula.\n"); break;
		default : printf("Não é pontuação.\n");
	}
	system("pause");
	return 0;
}
