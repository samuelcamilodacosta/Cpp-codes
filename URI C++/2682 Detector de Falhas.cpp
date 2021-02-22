#include <bits/stdc++.h>
using namespace std;

int main(){
	long long int x, y, cont=0, r;
	while(scanf("%lld", &x) != EOF){
		if(cont == 0 && x < y){
			cont = 1;
			cout << y+1 << endl;
		}
		y = x;
	}
	if(cont==0) cout << x+1 << endl;
	return 0;
}