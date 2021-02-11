#include <iostream>
#include <cstdlib>
#include <stdio.h>
int main(){
	int g[7]={2,4,5,8,10,32,78};
	int *ptr1= &g[0], *ptr2 = &g[3];
	//a
	printf("\nA: ");
	printf("\n%d, ",*g);
	printf("\n%d, ", g);
	//b
	printf("\nB: ");
	printf("\n%d, ",*g+1);
	printf("\n%d, ", g+1);
	//c
	printf("\nC: ");
	printf("\n%d, ",*ptr1+1);
	printf("\n%d, ", ptr1+1);
	//d
	printf("\nD: ");
	printf("\n%d, ",*(ptr1+1));
	printf("\n%d, ", (ptr1+1));
	//e
	printf("\nE: ");
	printf("\n%d, ",*(g+1));
	printf("\n%d, ", (g+1));
	
	//f
	printf("\nF: ");
	printf("\n%d, ",*(g+5));
	printf("\n%d, ", (g+5));
	
	//g
	printf("\nG: ");
	printf("\n%d, ",*ptr2);
	printf("\n%d, ", ptr2);
	
	//h
	printf("\nH: ");
	printf("\n%d, ",*(ptr2+2));
	printf("\n%d, ", (ptr2+2));
	
}
