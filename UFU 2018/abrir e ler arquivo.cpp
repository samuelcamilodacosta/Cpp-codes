#include <bits/stdc++.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"");
	FILE *arq1, *arq2, *arq3;
	int i;
	char a[50];
	arq1 = fopen("ex1.txt", "w+");
	arq2 = fopen("ex2.txt", "w+");
	arq3 = fopen("novoarquivo.txt", "w");
	if(arq1!= NULL){
		for(i=0; i<10; i++){
			fprintf(arq1,"%d\n", rand() % 100);
		}
	}else{
		printf("Não foi possível abrir o arquivo.");
	}
	if(arq2!= NULL){
		for(i=0; i<10; i++){
			fprintf(arq2,"%d\n", rand() % 100);
		}
	}else{
		printf("Não foi possível abrir o arquivo.");
	}
	if(arq3!=NULL){
		rewind(arq1); rewind(arq2);
		while(!feof(arq1)){
			fgets(a, 50, arq1);
			fputs(a, arq3);
			}
			while(!feof(arq2)){
			fgets(a, 50, arq2);
			fputs(a, arq3);
			}
	}
	else{
		printf("Não foi possível abrir o arquivo.");
	}
	fclose(arq3);
	fclose(arq2);
	fclose(arq1);
	return 0;
}
