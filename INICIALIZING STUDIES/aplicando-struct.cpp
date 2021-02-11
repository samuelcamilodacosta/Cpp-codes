#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
struct dados{
	char nome[50];
	int idade, codigo;
};
int main(){
	setlocale(LC_ALL,"");
	struct dados p[5];
	for(int i=0; i<5; i++){
	printf("Informe o seu nome: ");
	scanf("%s", &(p[i].nome));
	printf("Informe a sua idade: ");
	scanf("%d", &p[i].idade);
	p[i].codigo = i+1;
	}
	for(int i=0; i<5; i++){
	printf("Nome: %s, Idade: %d, Código: %d\n", p[i].nome, p[i].idade, p[i].codigo);}
	system("pause");
	return 0;
}
