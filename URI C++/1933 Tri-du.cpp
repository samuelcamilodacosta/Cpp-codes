#include <bits/stdc++.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"");
	int a, b;
	cin >> a;
	if(a>=1 && a <=13){
		cin >> b;
		if(b>=1 && b<=13){
			if(a>=b){
				cout << a << endl;
			}else{
				cout << b << endl;
			}
		}
	}	
	return 0;
}

