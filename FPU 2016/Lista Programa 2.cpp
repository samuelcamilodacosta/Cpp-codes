#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
int main(){
	system("color 7f");
	int i, x, vetor[10];
	setlocale(LC_ALL,"");
	printf("Informe 10 números: \n");
	for(i=1; i<=10; i++){
		printf("Informe o valor %dº valor: ", i);
		scanf("%d", &vetor[i]);
	}
	for(i=1; i<=10; i++){
		if(vetor[i]>x){
			x = vetor[i];
	 }
	}
	printf("O maior valor é: %d", x);
	return 0;
}
