#include <bits/stdc++.h>
using namespace std;
int main(){
	int i, j, n=1, s=0;
	do{
	scanf("%d", &n);
	for(i=1; i<=n; i++){
		for(j=1; j<=n; j++){
			if(i == 1 || j==n){ 
				printf("%d"); 
			}
			else{ 
				printf("%d ");
			}
		printf("\n");	
	}
	printf("\n");
	}while(n!=0);
	return 0;
}
