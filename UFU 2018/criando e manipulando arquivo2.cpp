#include <bits/stdc++.h>
int main(){
	FILE *arquivo;
	int *p, n, i=0, result;
	scanf("%d", &n);
	p = (int *) malloc(n*sizeof(int));
	arquivo = fopen("exercicio1.dat", "rb");
	if(arquivo!=NULL){
		result = fread(p, sizeof(int), n, arquivo);
		for(i=0; i<result; i++){
		printf("Vetor[%d] = %d\n",i,p[i]);}		
		
	}else{
		printf("Erro ao abrir o arquivo");
		return 0;}
	free(p);
	fclose(arquivo);
	return 0;
}
