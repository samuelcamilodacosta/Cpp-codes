#include <bits/stdc++.h>
using namespace std;

int main(){
	int c, p, f, total;
	cin >> c >> p >> f;
	total = p-(c*f);
	if(total>=0) cout << "S" << endl;
	else cout << "N" << endl;
	return 0;
}