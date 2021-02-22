#include <bits/stdc++.h>
using namespace std;

int main(){
	int A, B, C, X, Y, Z, result;
	cin >> A >> B >> C;
	cin >> X >> Y >> Z;
	if(X-A < 0){ 
		cout << "0" << endl; 
		return 0;
	}
	if(Y-B < 0){ 
		cout << "0" << endl;
		return 0;
	}
	if(Z-C < 0){
		cout << "0" << endl;
		return 0;
	}
	result = (X/A)*(Y/B)*(Z/C);
	cout << result << endl;
	return 0;
}