#include <iostream>
#include <cstdlib>
int main(){
	int x, y, n=1;
	do{
		scanf("%d", &x);
		scanf("%d", &y);
		if(x>0 && y>0){ printf("primeiro\n");}
		else if(x<0 && y>0){ printf("segundo\n");}
		else if(x<0 && y<0){ printf("terceiro\n");}
		else if(x>0 && y<0){ printf("quarto\n");}
		if(x==0 || y == 0){
			n=0;
		}
	}while(n!=0);
	return 0;
}
