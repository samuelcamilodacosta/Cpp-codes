#include <iostream>
#include <cstdlib>
int main(){
	int n, x, i, s=0;
	scanf("%d", &n);
	do{
		s=0;
		scanf("%d", &x);
		for(i=1; i<x; i++){
			if(x%i==0){
				s = s+i;}
		}
		if(s==x){ 
		printf("%d eh perfeito\n", x);}
		else{ 
		printf("%d nao eh perfeito\n", x);}
		
		n = n-1;
	}while(n!=0);
	
	return 0;
}
