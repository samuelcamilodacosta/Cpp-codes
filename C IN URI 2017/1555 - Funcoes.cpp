#include <bits/stdc++.h>
using namespace std;
int main(){
	int x, y, n, r, b, c;
	scanf("%d", &n);
	do{
		r=0; b=0; c=0; x=0; y=0;
		scanf("%d", &x);
		scanf("%d", &y);
		r = ((3*x)*(3*x)) + (y*y);
		b = (2*(x*x)) + ((5*y)*(5*y));
		c = (-100*x) + (y*y*y);
		if(r>b && r>c){ cout << "Rafael ganhou" << endl;}
		if(b>r && b>c){ cout << "Beto ganhou" << endl;}
		if(c>b && c>r){ cout << "Carlos ganhou" << endl;}
		n = n-1;
	}while(n!=0);
	return 0;
}
