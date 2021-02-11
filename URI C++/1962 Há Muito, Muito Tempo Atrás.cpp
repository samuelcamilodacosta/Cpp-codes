#include <bits/stdc++.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"");
	int n;
	cin >> n;
	while(n>0){
		long long int t, atual=2015;
		cin >> t;
		if(t<0){
			break;
		}
		if(t<atual){
			cout << atual-t << " D.C." << endl;
		}else if(t>=atual){
			cout << t-atual+1 << " A.C." << endl;
		}
		n--;
	}
	return 0;
}

