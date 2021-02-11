#include <bits/stdc++.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"");
	int L, sum=1;
	cin >> L;
	while(L>=2){
		L = L/2;
		sum = sum*4;
	}
	cout << sum << endl;
	return 0;
}

