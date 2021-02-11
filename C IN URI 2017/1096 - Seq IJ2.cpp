#include <iostream>
#include <cstdlib>
int main(){
	int i=1, j;
	do{
		j=7;
		for(j=7; j>4; j--){
		printf("I=%d J=%d\n", i,j);}
		i = i+2;
	}while(i!=11);
	
	system("pause");
	return 0;	
}
