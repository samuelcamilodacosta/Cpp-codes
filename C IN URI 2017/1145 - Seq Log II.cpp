#include <iostream>
#include <cstdlib>
int main(){
	int x, y, i, j; 
	scanf("%d", &x);
	scanf("%d", &y);
	for(i=0; i<y;){
		for(j=0; j<x; j++){
			if(i==y){
				break;}
			i=i+1;
			if(j+1==x){
				printf("%d", i);
			}else{
				printf("%d ", i);
			}	
		}
	printf("\n");
	}
	return 0;
}
