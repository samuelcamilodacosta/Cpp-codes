#include <bits/stdc++.h>
using namespace std;

int main(){
	long long int n, a, b, c, d, ans, resp1, resp2;
	cin >> n;
	while(n>0){
		cin >> a >> b >> c >> d;
		ans = (d-b)*100/(c-a);
		resp1 = ans/100;
		resp2 = ans%100;
		cout << resp1 << ",";
		cout << setfill('0') << setw(2) << resp2 << endl;
		n--;
	}
	return 0;
}