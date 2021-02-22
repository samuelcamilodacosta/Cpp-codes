#include <bits/stdc++.h>
using namespace std;

int main(){
	int a, b, c, d, ans;
	vector<int> vec;
	cin >> a >> b >> c >> d;
	vec.push_back(a);
	vec.push_back(b);
	vec.push_back(c);
	vec.push_back(d);
	sort(vec.begin(), vec.end());
	ans = (vec[3]+vec[0]) - (vec[2]+vec[1]);
	ans = abs(ans);
	cout << ans << endl;
	return 0;
}