#include <iostream>
#include <cstdlib>
int main(){
	int n, x, y, aux, s=0;
	scanf("%d", &n);
	do{
		x=0; y=0; s=0;
		scanf("%d", &x);
		scanf("%d", &y);
		if(x>y){
			aux = x;
			x = y;
			y = aux;
		}
		for(int i=x+1; i<y; i++){
			if(i%2 != 0){
				s=s+i;
			}
		}
		printf("%d\n",s);
		n = n-1;
	}while(n!=0);
	
	return 0;
}
