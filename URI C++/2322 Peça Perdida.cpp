#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, x;
	cin >> n;
	vector<int> vec;
	for (int i = 0; i < n-1; i++){
		cin >> x;
		vec.push_back(x);
	}
	sort(vec.begin(), vec.end());
	for (int i = 0; i< n; i++){
		if(vec[i] != (i+1)){
			cout << i+1 << endl;
			break;
		}
	}
	return 0;
}