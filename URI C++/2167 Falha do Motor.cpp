#include <bits/stdc++.h>
using namespace std;

int main(){
	int x, pos=0;
	cin >> x;
	int vet[x];
	for (int i = 0; i < x; i++){
		cin >> vet[i];
		if(i>0 && pos == 0){
			if(vet[i]<vet[i-1]){
				pos = i+1;
			}
		}
	}
	if(pos==0){
		cout << pos << endl;
	}else{
		cout << pos << endl;
	}
	return 0;
}