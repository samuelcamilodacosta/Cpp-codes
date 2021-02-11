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
	//Cada campo (variável da struct pode ser acessada usando o operador "."
	//Declaração de uma variável struct
	struct pessoa p;
	p.idade = 19; //comando de atribuição
	printf("Informe o nome da pessoa e rua da pessoa: ");
	gets(p.nome); //comando de leitura - nome
	gets(p.rua);
	printf("Informe o número: ");
	scanf("%d",&p.numero); //comando de leitura
	p.numero = p.numero + p.idade - 100;  //expressão
	printf("Idade: %d, número: %d, Nome da pessoa: %s, Rua da pessoa: %s\n", p.idade, p.numero, p.nome, p.rua);
	system("pause");
	return 0;
}
