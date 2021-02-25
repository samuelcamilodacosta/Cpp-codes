#include <bits/stdc++.h>
using namespace std;

int main(){
	int t, x;
	cin >> t;
	while(t>0){
		cin >> x;
		if(x>8000) cout << "Mais de 8000!" << endl;
		else cout << "Inseto!" << endl;
		t--;
	}
	return 0;
}