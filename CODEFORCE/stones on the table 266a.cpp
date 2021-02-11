#include <stdio.h>
#include <stdlib.h>
int main(){
	int x, i, cont=0;
	scanf("%d", &x);
	char cor[x];
	scanf("%s", &cor);
	for(i=0; i<x; i++){
		if(cor[i] == cor[i+1]){
			cont = cont+1;
		}
		if(i+1 == x){
			break;
		}
	}
	printf("\n%d", cont);
	return 0;
}
