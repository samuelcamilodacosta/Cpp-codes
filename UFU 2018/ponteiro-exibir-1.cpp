#include <iostream>
int main(){
	int x, y, z, *p;
	x = 10;
	y = x;
	z = y;
	p = &z;
	printf("%d", *p);
	return 0;
}
