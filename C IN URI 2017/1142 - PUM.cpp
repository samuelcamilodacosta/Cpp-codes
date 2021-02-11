#include <iostream>
#include <cstdlib>
int main(){
	int n, x=0, i=0;
	scanf("%d", &n);
	do{
		for(i=1; i<4; i++){
		printf("%d ", x+i);}
		printf("PUM\n");
		n = n-1;
		x = x+i;
	}while(n!=0);
	
	return 0;
}
