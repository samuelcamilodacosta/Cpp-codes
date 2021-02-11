#include <bits/stdc++.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"");
	int t;
	cin >> t;
	while(t>0){
		set <double> carneirinhos;
		double n, carneiros;
		cin >> n;
		for(int i=0; i<n; i++){
			cin >> carneiros;
			carneirinhos.insert(carneiros);
		}
		cout << carneirinhos.size() << endl;
	t--;
	}
	return 0;
}

