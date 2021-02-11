#include <iostream>
#include <cstdlib>
int main(){
	int i=0, j=1;
	do{
	for(int k=0; k<3; k++){
		printf("I=%f", i); 
		printf(" J=%f\n", j);
		j=j+1;
	}
	i = i+0.2;
	j = j+0.2-3;
	}while(i<2.1);
	
	system("pause");
	return 0;
}
