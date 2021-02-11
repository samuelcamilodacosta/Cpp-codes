#include <bits/stdc++.h>
struct dados{
	char nome[50];
	int idade;};
int main(){
	int n, x, i=0, result;
	scanf("%d", &n);
	x = n;
	struct dados p[n];
	FILE *arquivo;
	arquivo = fopen("exercicio3.dat", "wb");
	do{
		printf("Informe o nome: ");
		fflush(stdin);
		gets(p[i].nome);
		printf("Informe a idade: ");
		scanf("%d", &p[i].idade);
		n = n-1;
		i++;
	}while(n>0);
	if(arquivo!=NULL){
		result = fwrite(p, sizeof(struct dados), x, arquivo);
		printf("result: %d", result);
	}
	else{
		printf("Nao foi possivel abrir o arquivo");
		return 0;}
	fclose(arquivo);
	return 0;
}
