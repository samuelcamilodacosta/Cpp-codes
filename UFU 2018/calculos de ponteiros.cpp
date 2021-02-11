#include <iostream>
using namespace std;
void nula(int *x, int *y){
}
int main(){
	int a, b;
	int *c, *d;
	c = &a;
	d = &b;
	a = 5;
	b = 2;
	*d = *c+*d;
	printf("%d\n", b);
	system("pause");
}
