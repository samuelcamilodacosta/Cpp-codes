#include <stdio.h>
#include <stdlib.h>
int main(){
	int x, y, aux;
	scanf("%d", &x);
	scanf("%d", &y);
	if(x>y){
		aux = x;
		x = y;
		y = aux;
	}
	x = x+1;
	for(int i=x; i<y; i++){
		if(i%5 == 2){
			printf("%d\n", i);
		}
		if(i%5==3){
			printf("%d\n", i);
		}
	}
	return 0;
}
