#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, s, x, menor;
	cin >> n >> s;
	menor = s;
	for (int i = 0; i < n; i++){
		cin >> x;
		s += x;
		if(s<menor){
			menor = s;
		}
	}
	cout << menor << endl;
	return 0;
}