#include <bits/stdc++.h>
using namespace std;

int main(){
	int t, cont=0, sum, x, y;
	while(true){
		cont++;
		cin >> t;
		if(t==0) return 0;
		cout << "Teste " << cont << endl;
		sum = 0;
		while(t>0){
			cin >> x >> y;
			sum += (x-y);
			cout << sum << endl;
			t--;
		}
		cout << endl;
	}
	return 0;
}