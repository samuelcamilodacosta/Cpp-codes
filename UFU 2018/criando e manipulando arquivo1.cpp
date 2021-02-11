#include <bits/stdc++.h>
int main(){
	int *p, n, i, result;
	FILE *arquivo;	
	scanf("%d", &n);
	p = (int *) malloc(n*sizeof(int));
	arquivo = fopen("exercicio1.dat", "wb");
	for(i=0; i<n; i++){
		p[i]= rand()%100;
		printf("%d\n", p[i]);
	}
	if(arquivo!=NULL){
		result = fwrite(p,sizeof(int), n, arquivo);
		printf("result: %d", result);
	}else{
		printf("Nao foi possivel abrir o arquivo");
		return 0;}
	free(p);
	fclose(arquivo);
	return 0;
}
