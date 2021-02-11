#include <bits/stdc++.h>
using namespace std;
int main(){
	int i=0, n=1;
	float nota1, nota2, media;	
	do{
		i=0; nota1=0; nota2=0; media=0;
		do{
			if(i>0){ printf("nota invalida\n");}
			scanf("%f", &nota1);
			i = i+1;
		}while(nota1>10 || nota1<0);
		i=0;
		do{
			if(i>0){ printf("nota invalida\n");}
			scanf("%f", &nota2);
			i = i+1;
		}while(nota2>10 || nota2<0);
		media = (nota1+nota2)/2;
		printf("media = %.2f\n", media);
		do{
			printf("novo calculo (1-sim 2-nao)\n");
			scanf("%d", &n);
			if(n==2){ break;}
		}while(n!=1);
	}while(n==1);
	return 0;
}
