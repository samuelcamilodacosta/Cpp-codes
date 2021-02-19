#include <bits/stdc++.h>
using namespace std;

int main(){
	int L, D, K, P, sum, TP=0;
	cin >> L >> D >> K >> P;
	int i = D;
	while(i<=L){
		i += D;
		TP++;
	}
	sum = (L*K)+(TP*P);
	cout << sum << endl;
	return 0;
}