#include <bits/stdc++.h>
using namespace std;
int reordenarFrase(int x, char frase[50]){
	for(int i=x-1; i>=0; i--){
		printf("%c", frase[i]);
	}
}

int main(){
	char frase[50];
	printf("Informe uma frase: ");
	gets(frase);
	reordenarFrase(strlen(frase), frase);
	return 0;
}
