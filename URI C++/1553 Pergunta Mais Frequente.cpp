#include <bits/stdc++.h>
using namespace std;

int main(){
	int N, K, x, cont;
	while(true){
		cont = 0;
		cin >> N >> K;
		if(N == 0 && K == 0) return 0;
		int vet[N+1];
		for (int i = 0; i <= N; i++) vet[i] = 0;
		for (int i = 1; i <= N; i++){
			cin >> x;
			vet[x]++;
		}
		for (int i = 1; i <= N; i++){
			if(vet[i] >= K) cont++;
		}
		cout << cont << endl;
	}
}