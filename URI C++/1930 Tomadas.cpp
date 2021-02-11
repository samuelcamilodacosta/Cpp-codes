#include <bits/stdc++.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"");
	int i, sum=0, x;
	for(i=0; i<4; i++){
		cin >> x;
		if(x>=2 && x<=6){
			sum = sum+x;
		}else{
			break;
		}
	}
	if(i==4){
		cout << sum-3 << endl;
	}
	return 0;
}

