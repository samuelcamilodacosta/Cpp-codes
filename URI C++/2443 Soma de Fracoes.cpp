#include <bits/stdc++.h>
using namespace std;
int mdc(int a, int b){
	while(b!=0){
		int r = a%b;
		a = b;
		b = r;
	}
	return a;
}int mmc(int a, int b){
	return a * (b/mdc(a,b));
}
int main(){
	int a, b, c, d, r1, r2, x;
	cin >> a >> b >> c >> d;
	if(b==d){
		r1 = a + c; 
		r2 = b;
		x = mdc(r1,r2);
		r1 = r1/x;
		r2 = r2/x;
		cout << r1 << " " << r2 << endl;
	}else{
		r2 = mmc(b, d);
		r1 = a*(r2/b)+c*(r2/d);
		x = mdc(r1,r2);
		r1 = r1/x;
		r2 = r2/x;
		cout << r1 << " " << r2 << endl;
	}
	return 0;
}