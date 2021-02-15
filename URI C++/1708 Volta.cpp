#include <bits/stdc++.h>
using namespace std;

int main(){
	int x, y, r, dif;
	scanf("%d %d", &x, &y);
	dif = y-x;
	if(y%dif==0) r = (y/dif);
	else r = (y/dif)+1;
	cout << r << endl;
	return 0;
}