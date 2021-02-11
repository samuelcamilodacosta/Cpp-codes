#include <iostream>
#include <cstdlib>
int main(){
	int vet[100], aux1, aux2;
	for(int i=1; i<=100; i++){
		scanf("%d", &vet[i]);
		if(aux1<vet[i]){
			aux1=vet[i];
			aux2=i;
		}
	}
	printf("%d\n", aux1);
	printf("%d\n", aux2);
	
	system("pause");
	return 0;
}
