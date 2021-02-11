#include <bits/stdc++.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"");
	int m, n, c=0;
	double r;
	cin >> c;
	while(c!=0){
		cin >> n;
		cin >> m;
		r = floor(m*log10(n))+1;
		cout << r << endl;
		c--;
	}	
	return 0;
}

