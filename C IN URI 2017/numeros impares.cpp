#include <iostream>
#include <cstdlib>
int main(){
	int x=0;
	scanf("%d", &x);
	if(x>=1 && x<=1000){
	for(int i=0; i<=x; i++)
	if(i%2!=0){
		printf("%d\n", i);
	}
	}
	system("pause");
	return 0;
}
