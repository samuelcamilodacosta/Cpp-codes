#include <bits/stdc++.h>
using namespace std;
int main(){
	int toupper (int ch);
	FILE *arquivo;
	arquivo = fopen("exercicio2.txt", "r");
	char a[50];
	if(arquivo==0){ printf("Erro na abertura do arquivo\n"); return 0;}
	else{ printf("Arquivo aberto com sucesso\n");}
	while(!feof(arquivo)){
		fgets(a, 50, arquivo);
		printf("%s", strupr(a));
		if(a[0]=='F' && a[1]=='I' && a[2]=='M'){ break;}
	}
	fclose(arquivo);
	return 0;
}
