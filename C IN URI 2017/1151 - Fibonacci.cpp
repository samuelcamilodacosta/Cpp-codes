#include <iostream>
#include <cstdlib>
int main(){
	setlocale(LC_ALL, "");
	int n, aux, a=0, b=1, i;
	scanf("%d", &n);
	n = n-2;
	printf("%d ", a);
	if(n>=0){
	printf("%d ", b);
	for(i=0; i<n; i++){
		aux = a+b;
		a = b;
		b = aux;
		if(i+1 == n){
			printf("%d", aux);
		}
		else{
		printf("%d ", aux);
	}
	}
	}
	printf("\n");
	return 0;
}
