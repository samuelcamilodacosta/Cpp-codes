#include <iostream>
#include <cstdlib>
int main(){
	int i=-2, j=65;
	do{
		i = i+3;
		j = j-5;
		printf("I=%d J=%d\n", i, j);
	}while(j!=0);
	
	system("pause");
	return 0;
}
