#include <bits/stdc++.h>
using namespace std;
int main(){
	long long int valor, x, t;
	cin >> t;
	while(t>0){
		cin >> x;
		if(x==0){
			cout << "1" << endl;
		}else if(x==1){
			cout << "9" << endl;
		}else if(x%2==0){
			cout << "1" << endl;
		}else{
			cout << "9" << endl;
		}
		t--;
	}
	return 0;
}