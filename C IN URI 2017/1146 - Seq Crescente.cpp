#include <iostream>
#include <cstdlib>
int main(){
	int n=1;
	do{
		scanf("%d", &n);
		for(int i=1; i<=n; i++){
			if(i==n){ printf("%d\n", i);}
			else{ printf("%d ", i);}
		}
	}while(n!=0);
	printf("\n");
	return 0;
}
