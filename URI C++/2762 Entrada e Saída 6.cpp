#include <bits/stdc++.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"");
	string num;
	cin >> num;
	int i=0, x, cont=0;
	for(i=0; i<num.size(); i++){
		if(num[i] =='.'){
			x=i;
		}
	}
	for(int j=x+1; j<num.size(); j++){
		if(num[j]!='0'){
			cont = cont+1;
		}
		if(cont>=1){
			cout << num[j];
		}
	}
	cout << num[x];
	for(i=0; i<x; i++){
		cout << num[i];
	}
	cout << endl;
	return 0;
}

