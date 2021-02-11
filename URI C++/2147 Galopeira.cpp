#include <bits/stdc++.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"");
	double x;
	int c;
	cin >> c;
	string palavra;
	while(c!=0){
		cin >> palavra;
		x = palavra.size();
		x = x/100.00;
		cout << fixed << setprecision(2) << x << endl;
		c--;
	}
	
	return 0;
}

