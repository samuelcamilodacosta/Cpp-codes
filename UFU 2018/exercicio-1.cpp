#include <bits/stdc++.h>
using namespace std;
int main(){
	int soma=0;
	char nome[50], a[50];
	gets(nome);
	FILE *arquivo;
	arquivo = fopen(teste.txt, "r");
	if(arquivo==0){
		printf("Erro na abertura do arquivo\n");
		return 0;}
	else{
		printf("Arquivo aberto com sucesso\n");}
	while(!feof(arquivo)){
		fgets(a, 50, arquivo);
		printf("%s", a);
		soma = soma+1;
	}
	printf("\nLinhas: %d", soma);
	fclose(arquivo);
	return 0;
}

/* fopen() - abre um arquivo
fputc() - escreve um caracter em um arquivo
fgetc() - lê um caracter de um arquivo
fputs() - escreve uma string em um arquivo
fgets() - lê uma linha de um arquivo
fprintf() - equivalente a printf()
fscanf() - equivalente a scanf()
rewind() - posiciona o arquivo no início
feof() - retorna verdadeiro se chegou ao fim do arquivo
fclose() - fecha */
