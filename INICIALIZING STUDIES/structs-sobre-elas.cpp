#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
//definindo uma estrutura
struct pessoa{
	char nome[50], rua[50];
	int idade, numero;
};
int main(){
	setlocale(LC_ALL,"");
	//Cada campo (vari�vel da struct pode ser acessada usando o operador "."
	//Declara��o de uma vari�vel struct
	struct pessoa p;
	p.idade = 19; //comando de atribui��o
	printf("Informe o nome da pessoa e rua da pessoa: ");
	gets(p.nome); //comando de leitura - nome
	gets(p.rua);
	printf("Informe o n�mero: ");
	scanf("%d",&p.numero); //comando de leitura
	p.numero = p.numero + p.idade - 100;  //express�o
	printf("Idade: %d, n�mero: %d, Nome da pessoa: %s, Rua da pessoa: %s\n", p.idade, p.numero, p.nome, p.rua);
	system("pause");
	return 0;
}
