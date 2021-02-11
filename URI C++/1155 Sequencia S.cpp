#include <bits/stdc++.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"");
	double s=0;
	for(double i=1; i<=100; i++){
		s = s+(1/i);
	}
	cout << fixed;
	cout.precision(2);
	cout << s << endl;
	return 0;
}

