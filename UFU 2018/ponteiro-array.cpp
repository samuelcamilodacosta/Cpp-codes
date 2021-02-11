#include <iostream>
#include <cstdlib>
#include <stdio.h>
int main(){
	int a[5]={0,1,2,3,4};
	int *p;
	p = &a[0];
	printf("%d", (a+2));
	printf("\n%d",*(a+2));
	return 0;
}
