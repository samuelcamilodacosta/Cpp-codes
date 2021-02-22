#include <bits/stdc++.h>
using namespace std;

int main(){
	int x, y;
	cin >> x >> y;
	if(x >= 0 && y >= 0){
		if(x <= 432 && y <= 468){
			cout << "dentro" << endl;
			return 0;
		}
	}
	cout << "fora" << endl;
	return 0;
}