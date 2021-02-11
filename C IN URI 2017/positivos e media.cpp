#include <iostream>
#include <cstdlib>
int main(){
	float vet[6], aux = 0, media = 0;
	for(int i=0; i<6; i++){
		scanf("%f", &vet[i]);
		if(vet[i]>0){
			media = vet[i] + media;
			aux = aux+1;
		}
	}
	media = media/aux;
	printf("%.0f valores positivos\n", aux);
	printf("%.1f", media);
	printf("\n");	
	system("pause");
	return 0;
}
