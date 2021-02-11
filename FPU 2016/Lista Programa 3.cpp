#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
int main(){
	system("color 7f");
	setlocale(LC_ALL,"");
	int n, s = 0;
	printf("Informe um valor maior que 1000: ");
	scanf("%d", &n);
	if(n>1000){
		for(int i=0; i<n; i++){
			if(i%7 == 0){
				s = s + i;
			}
		}
	}
	printf("A soma de todos os múltiplos de 7 até o %d é: %d", n, s);
	return 0;	
}
