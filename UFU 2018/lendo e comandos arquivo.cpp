#include <bits/stdc++.h>
using namespace std;
int main(){
	int linha=0;
	char a[50], frase[50];
	FILE *arquivo;
	arquivo = fopen("exercicio2.txt", "w+");
	if(arquivo==0){ printf("Erro na abertura do arquivo\n"); return 0;}
	else{ printf("Arquivo aberto com sucesso\n");}
	while(frase[0]!='F' && frase[1]!='I' && frase[2]!='M'){
		fflush(stdin);
		gets(frase);
		fputs(frase, arquivo);
		fputs("\n", arquivo);
		}
	rewind(arquivo);
	while(!feof(arquivo)){
		fflush(stdin);
		fgets(a, 50, arquivo);
		printf("%s", a);
		for(int i=0; i<strlen(a); i++){
			if(a[i]=='\n'){
			linha++;}
		}
		if(a[0]=='F' && a[1]=='I' && a[2]=='M'){ break;}
	}
	printf("Frases: %d", linha-1);
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
