#include <iostream>
#include <cstdlib>
int main(){
	int x, i;
	scanf("%d", &x);
	for(i=x; i<x+12; i++){
		if(i%2 == 1){
		printf("%d\n", i);
		}
	}
	system("pause");
	return 0;
}
