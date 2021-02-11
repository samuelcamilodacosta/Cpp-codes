#include <iostream>
#include <cstdlib>
int main(){
	int idade=0, cont=0;
	float media=0;
	do{
		scanf("%d", &idade);
		if(idade<0){
			break;
		}
		cont = cont+1;
		media = media+idade;
	}while(idade>=0);
	media = (media/cont);
	printf("%.2f", media);
	return 0;
}
