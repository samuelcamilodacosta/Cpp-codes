#include <bits/stdc++.h>
struct dados{
	char nome[50];
	int idade;};
int main(){
	FILE *arquivo;
	int n, i=0, result;
	scanf("%d", &n);
	struct dados p[n];
	arquivo = fopen("exercicio3.dat", "rb");
	if(arquivo!=NULL){
		result = fread(p, sizeof(struct dados), n, arquivo);
		for(i=0; i<result; i++){
		printf("Nome = %s\n",p[i].nome);
		printf("Idade = %d\n",p[i].idade);}		
	}else{
		printf("Erro ao abrir o arquivo");
		return 0;}
	fclose(arquivo);
	return 0;
}
