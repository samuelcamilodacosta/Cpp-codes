#include <bits/stdc++.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"");
	int n, la, lb, sa, sb;
	cin >> n >> la >> lb >> sa >> sb;
	if(la<=n && lb>=n && sa<=n && sb>=n){
		cout << "possivel" << endl;
	}else{
		cout << "impossivel" << endl;
	}
	return 0;
}

