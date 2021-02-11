#include <iostream>
#include <cstdlib>
int main(){
	int n;
	scanf("%d", &n);
	if(n>5 && n<2000){
	for(int i=1; i<=n; i++){
	if(i%2==0){
		int quadrado = i*i;
		printf("%d^2 = %d\n", i, quadrado);
	}
	}
	}
	system("pause");
	return 0;
}
