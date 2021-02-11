#include <iostream>
using namespace std;
void reordenar(int *x, int *y, int *z){
	if(*x>*y){
	int aux = *x;
	*x = *y;
	*y = aux;
	}
	if(*x>*z){
	int aux = *x;
	*x = *z;
	*z = aux;
	}
	if(*y>*z){
	int aux = *z;
	*z = *y;
	*y = aux;	
	}}
int main(){
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c); 
	int *pa, *pb, *pc;
	pa = &a;
	pb = &b;
	pc = &c;
	printf("%d\n", pa);
	printf("%d\n", pb);
	printf("%d\n", pc);
	reordenar(pa, pb, pc);
	printf("\na = %d, b = %d e c = %d.\n", *pa, *pb, *pc);
	system("pause");
}
