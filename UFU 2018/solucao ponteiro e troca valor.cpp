#include <iostream>
using namespace std;
void trocaValor(int *x, int *y){
	int aux = *x;
	*x = *y;
	*y = aux;
	
}
int main(){
	int a = 10; 
	int b = 20;
	int *p, *q;
	p = &a;
	q = &b;
	printf("%d\n", p);
	printf("%d\n", q);
	trocaValor(p,q);
	printf("\nA = %d, B = %d\n", *p,*q);
	system("pause");
}
