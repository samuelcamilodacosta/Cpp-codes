#include <bits/stdc++.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"");
	int n, total;
	cin >> n;
	if(n>=0){
		total = total + 7;
	}
	if(n>=11){
		if(n>30){
			total = total+20;
		}else{
			total = total+(n-10);
		}
	}
	if(n>=31){
		if(n>100){
			total = total+140;
		}else{
			total = total+((n-30)*2);
		}
	}
	if(n>=101){
		total = total+((n-100)*5);
	}
	cout << total << endl;
	return 0;
}

