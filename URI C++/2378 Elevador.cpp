#include <bits/stdc++.h>
using namespace std;

int main(){
	int N, C, total, x, y, ans=0;
	cin >> N >> C;
	while(N>0){
		cin >> x >> y;
		total = total -x + y;
		if(total>C){
			ans = 1;
		}
		N--;
	}
	if(ans == 1) cout << "S" << endl;
	else cout << "N" << endl;
	return 0;
}