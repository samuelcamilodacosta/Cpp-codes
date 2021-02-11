#include <iostream>
#include <cstdlib>
int main(){
	float nota, media=0;
	int cont=0;
	do{
		scanf("%f", &nota);
		if(nota>=0 && nota<=10){
			media = media + nota;
			cont=cont+1;}
		else{
			printf("nota invalida\n");
			}
	}while(cont!=2);
	media = (media/2.0);
	printf("%.2f\n", media);

	return 0;
}
