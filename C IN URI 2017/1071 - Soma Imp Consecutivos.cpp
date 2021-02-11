#include <iostream>
#include <cstdlib>
int main(){
	int x, y, aux, s=0;
	scanf("%d", &x);
	scanf("%d", &y);
	if(x>y){
		aux = x;
		x = y;
		y = aux;
	}
	if(x%2 != 0){
		x = x+1;
	}
	for(int i=x; i<y; i++){
		if(i%2 != 0){
			s = s+i;
		}
	}
	printf("%d\n",s);
	return 0;
}
