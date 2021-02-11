#include <bits/stdc++.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"");
	int vet[5], i;
	for(i=0; i<5; i++){
		cin >> vet[i];
	}
	if(vet[0]<vet[1] && vet[1]<vet[2] && vet[2]<vet[3] && vet[3]<vet[4]){
		cout << "C" << endl;
	}else if(vet[0]>vet[1] && vet[1]>vet[2] && vet[2]>vet[3] && vet[3]>vet[4]){
		cout << "D" << endl;
	}else{
		cout << "N" << endl;
	}
	return 0;
}

