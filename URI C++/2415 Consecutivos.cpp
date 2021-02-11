#include <bits/stdc++.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"");
	int n;
	cin >> n;
	int vet[n], i, maior=0, cont=1;
	for(i=0; i<n; i++){
		cin >> vet[i];
		if(i>=1){
			if(vet[i] == vet[i-1]){
				cont++;
				if(maior<cont){
					maior = cont;
				}
			}else{
				cont=1;
			}
		}
	}
	cout << maior << endl;
	return 0;
}

