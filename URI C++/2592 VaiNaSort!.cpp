#include <bits/stdc++.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"");
	int n, tentativa;
	do{
		tentativa = 0;
		cin >> n;
		if(n==0){
			break;
		}
		int vet[n], vet1[n], i;
		for(i=0; i<n; i++){
			vet[i] = i+1;
		}
		back:
			tentativa++;
			for(i=0; i<n; i++){
				cin >> vet1[i];
			}
			for(i=0; i<n; i++){
				if(vet[i]!=vet1[i]){
					goto back;
				}
			}
		cout << tentativa << endl;
	}while(n!=0);
	return 0;
}

