#include <iostream>
#include <cstdlib>
int main(){
	int n;
	scanf("%d", &n);
	do{
		float x, y, r;
		scanf("%f", &x);
		scanf("%f", &y);
		if(y==0){
			printf("divisao impossivel\n");
		}
		else{
			r = (x/y);
			printf("%.1f\n", r);
		}
		
		n = n-1;
	}while(n!=0);
	
	system("pause");
	return 0;
}
