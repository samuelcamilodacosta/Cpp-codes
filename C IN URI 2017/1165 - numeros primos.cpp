#include <iostream>
#include <cstdlib>
int main(){
	int n;
	scanf("%d", &n);
	int vet[n];
	do{
		scanf("%d", &vet[n]);
		int s=0, i=0;
		for(i=2; i<vet[n]; i++){
			if(vet[n]%i==0){
				s = s+1;
			}
		}
		if(s==0){
			printf("%d eh primo\n", vet[n]);
		}
		else{
			printf("%d nao eh primo\n", vet[n]);
		}
		n=n-1;
	}while(n!=0);
	return 0;
}
