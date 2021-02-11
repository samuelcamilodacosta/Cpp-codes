#include <iostream>
#include <cstdlib>
int main(){
	int i, vet[20], j;
	for(i=19; i>=0; i--){
	scanf("%d", &vet[i]);
	}
	for(i=0; i<20;i++){
		printf("N[%d] = %d\n", i, vet[i]);
	}

	return 0;
}
