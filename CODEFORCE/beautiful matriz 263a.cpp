#include <stdio.h>
#include <stdlib.h>
int main(){
	int i, j, matriz[5][5], x, y, cont=0;
	for(i=0; i<5; i++){
		for(j=0; j<5; j++){
			scanf("%d", &matriz[i][j]);
		}
	}
	for(i=0; i<5; i++){
		for(j=0; j<5; j++){
			if(matriz[i][j] == 1){
				x = i; y = j;}
		}
	}
	for(i=0; i<5; i++){
		if(x<2){
			cont = cont+1;
			x = x+1;}
		if(x>2){
			x=x-1;
			cont = cont+1;}
		if(y<2){
			cont = cont+1;
			y = y+1;}
		if(y>2){
			cont = cont+1;
			y = y-1;}
	}
	printf("\n%d", cont); 
	return 0;
}
