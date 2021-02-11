#include <iostream>
#include <cstdlib>
int main(){
	int i, vet[5], aux = 0;
	for(i=0; i<5; i++){
		scanf("%d", &vet[i]);
		if(vet[i]%2==0){
			aux = aux+1;
		}
	}
	printf("%d valores pares", aux);
	printf("\n");	
	system("pause");
	return 0;
}
