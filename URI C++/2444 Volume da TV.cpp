#include <bits/stdc++.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"");
	int vol, t, x;
	cin >> vol >> t;
	while(t>0){
		cin >> x;
		vol = vol + (x);
		t--;
		if(vol>100){
			vol = 100;
		}else if(vol<0){
			vol = 0;
		}
	}
	cout << vol << endl;
	return 0;
}

