#include <bits/stdc++.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"");
	bitset <32> x;
	bitset <32> y;
	unsigned long long a, b, mofiz;
	while(cin >> a >> b){
		x = a;
		y = b;
		mofiz = a^b;
		cout << mofiz << endl;
	}
	return 0;
}

