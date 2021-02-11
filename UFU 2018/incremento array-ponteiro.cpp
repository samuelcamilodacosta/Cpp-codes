#include <iostream>
#include <cstdlib>
#include <stdio.h>
using namespace std;
int main(){
	int a[5]={0,1,2,3,4};
	int *p;
	p = &a[0];
	printf("%d", *a);
	printf("\n%d", *p);
	for(int i=0; i<5; i++){
		printf("\n%d", *(a+i));
	}
	return 0;
}
