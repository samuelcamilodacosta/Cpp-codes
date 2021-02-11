#include <bits/stdc++.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"");
	int l, c, n, total=0;
	cin >> n;
	while(n>0){
		cin >> l;
		cin >> c;
		if(l>c){
			total = total+c;
		}
		n--;
	}
	cout << total << endl;
	return 0;
}

