#include <iostream>
#include <cstdlib>
int main(){
	int n;
	scanf("%d", &n);
	for(int i=1; i<=n; i++){
		printf("%d %d %d\n", i, i^2, i*i*i);
	}
	
	return 0;
}
