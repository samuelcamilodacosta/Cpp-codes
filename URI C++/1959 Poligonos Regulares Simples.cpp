#include <bits/stdc++.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"");
	long long int n, l, p;
	cin >> n;
	if(n>=3 && n<=1000000){
		cin >> l;
		if(l>=1 && l<=4000){
			p = n * l;
			cout << p << endl;
		}
	}
	return 0;
}

