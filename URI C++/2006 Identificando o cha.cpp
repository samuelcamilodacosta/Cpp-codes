#include <bits/stdc++.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"");
	int t, i=0, x=0, cont=0;
	cin >> t;
	for(i=0; i<5; i++){
		cin >> x;
		if(x==t){
			cont++;
		}
	}
	cout << cont << endl;
	return 0;
}

