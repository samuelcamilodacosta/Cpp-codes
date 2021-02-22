#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, x, sum = 0, i, j;
	while(scanf("%d", &n)!=EOF){
		vector<int> vec;
		for (i = 0; i < n; i++){
			cin >> x;
			vec.push_back(x);
		}
		sort(vec.begin(), vec.end());
		i = 0; j = n-1; sum = 0;
		while(n>1){
			sum = sum+(vec[j]-vec[i]);
			i++;
			j--;
			n -= 2;
		}
		cout << sum << endl;
		vec.clear();
	}
	return 0;
}