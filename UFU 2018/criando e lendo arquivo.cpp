#include <bits/stdc++.h>
using namespace std;
int main(){
	setlocale(LC_ALL,"");
	int n, s;
	char a[50];
	FILE *arquivo1;
	arquivo1 = fopen("exercicio4.txt", "w+");
	if(arquivo1==0){ printf("Erro na abertura do arquivo\n"); return 0;}
	else{ printf("Arquivo aberto com sucesso\n");}
	do{
	scanf("%d", &n);
	s=1;
	if(n==999){ break;}
	for(int i=0; i<n; i++){
	s=s*(n-i);
	}
	fprintf(arquivo1,"%d\n",s);
	}while(n!=999);
	rewind(arquivo1);
	while(!feof(arquivo1)){
		fflush(stdin);
		fgets(a, 50, arquivo1);
		printf("%s", a);}
	fclose(arquivo1);
	return 0;
}
