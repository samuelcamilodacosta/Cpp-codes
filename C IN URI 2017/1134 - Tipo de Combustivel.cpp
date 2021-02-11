#include <iostream>
#include <cstdlib>
int main(){
	int s1=0, s2=0, s3=0, n=0;
	do{
		scanf("%d", &n);
		if(n==1){
			s1=s1+1;
		}
		else if(n==2){
			s2=s2+1;
		}
		else if(n==3){
			s3=s3+1;
		}
	}while(n!=4);
	printf("MUITO OBRIGADO\n");
	printf("Alcool: %d\n", s1);
	printf("Gasolina: %d\n", s2);
	printf("Diesel: %d\n", s3);
	
	return 0;
}
