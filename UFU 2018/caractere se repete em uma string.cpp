#include <iostream>
#include <cstdlib>
#include <cstring>
int main(){
	char msg[50], c[1];
	char *amsg, *x; 
	int j = 0, i;
	printf("Digite uma frase: ");
	gets(msg);
	printf("Informe o caractere: ");
	scanf("%c", &c);
	x = &c[0];
	amsg = &msg[0];
	for(i=0; i < strlen(msg); i++){
		if(*(amsg+i) == *(x+0)){
			j = j+1;
			}
	}
			
	printf("\nO caractere se repete %d vezes.", j);
	
	printf("\n");
	system("pause");
	return 0;
}
