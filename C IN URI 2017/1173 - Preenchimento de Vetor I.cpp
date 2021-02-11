#include <iostream>
#include <cstdlib>
int main(){
	int i, vet[10], n;
	scanf("%d", &n);
	vet[0] = n;
	for(i=1; i<=10; i++){
	vet[i] = vet[i-1]+vet[i-1];
		}
	for(i=0; i<10; i++){
	printf("N[%d] = %d\n", i, vet[i]);
	}
	return 0;
}
