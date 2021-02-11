#include <bits/stdc++.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"");
	int q, i=0, satisfatorio=0;
	cin >> q;
	int vet[q];
	for(i=0; i<q; i++){
		cin >> vet[i];
		if(vet[i]==0){
			satisfatorio++;
		}
	}
	if(q/2<satisfatorio){
		cout << "Y" << endl;
	}else{
		cout << "N" << endl;
	}
	return 0;
}

