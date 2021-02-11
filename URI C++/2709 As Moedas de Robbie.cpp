#include <bits/stdc++.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"");
	int M, i, N, sum, cont;
	while(cin >> M){
		sum = 0;
		cont = 0;
		int vet[M];
		for(i=0; i<M; i++){
			cin >> vet[i];
		}
		cin >> N;
		i=M-1;
			while(i>=0){
			sum = sum+vet[i];
			i = i-N;
		}
		if(sum==1){
			cont = cont+2;
		}
		for(i=1; i<sum; i++){
			if(sum%i == 0){
				cont++;
			}
		}
		if(cont==1){
			cout << "You’re a coastal aircraft, Robbie, a large silver aircraft." << endl;
		}else if(cont>1){
			cout << "Bad boy! I’ll hit you." << endl;
		}
	}
	return 0;
}

