#include <iostream>
#include <cstdlib>
int main(){
	int i=1, j=7, cont;
	do{
		for(cont=0; cont<3; cont++){
		printf("I=%d J=%d\n", i,j);
		j = j-1;}
		i = i+2;
		j=j+5;
	}while(i!=11);
	
	system("pause");
	return 0;	
}
