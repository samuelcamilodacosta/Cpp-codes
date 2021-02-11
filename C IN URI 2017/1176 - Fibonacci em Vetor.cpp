#include <cstdlib>
#include <iostream>
int main(){
	int n, i,j;
	scanf("%d", &n);
	do{
		scanf("%d", &i);
		long long int f[61];
		f[0]=0;
		f[1]=1;
		for(j=2;j<=60;j++){
			f[j]=f[j-2]+f[j-1];
		}
		printf("Fib(%d) = %lld\n",i,f[i]);
		n = n-1;
	}while(n!=0);
	return 0;
}
