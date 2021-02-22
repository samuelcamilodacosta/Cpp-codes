#include <bits/stdc++.h>
using namespace std;

int main(){
	int teste=0, n, winner;
	while(true){
		teste++;
		scanf("%d", &n);
		if(n==0) return 0;
		int vet[n];
		for (int i = 0; i < n; i++){
			scanf("%d", &vet[i]);
			if(vet[i]==(i+1)) winner = i+1;
		}
		cout << "Teste " << teste << endl;
		cout << winner << endl;
		cout << endl;
	}
}