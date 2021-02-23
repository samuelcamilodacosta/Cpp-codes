#include <bits/stdc++.h>
using namespace std;

int main(){
	long long int n, br, ale;
	while(true){
		cin >> n;
		if(n==0) return 0;
		br = floor(n/90);
		if(n%90==0){
			ale = ceil((n*7)/90);
		}else{
			ale = 1+ceil((n*7)/90);
		}
		cout << "Brasil " << br << " x Alemanha " << ale << endl;
	}
}