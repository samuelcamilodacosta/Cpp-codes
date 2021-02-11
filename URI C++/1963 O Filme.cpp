#include <bits/stdc++.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"");
	double a, b, value;
	cin >> a >> b;
	if(b<a || a<0 || b<0 || a>1000 || b>1000){
		return 0;
	}
	value = ((b-a)/a)*100;
	cout << fixed << setprecision(2) << value << "%" << endl;
	return 0;
}

