#include <iostream>
#include <cstdlib>
int main(){
	int x=0, y=0;
	do{
		scanf("%d", &x);
		scanf("%d", &y);
		if(x>y){
			printf("Decrescente\n");
		}
		if(y>x){
			printf("Crescente\n");
		}
	}while(x!=y);
	
	return 0;
}
