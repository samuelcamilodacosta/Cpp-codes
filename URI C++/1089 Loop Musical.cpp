#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, cont, valor, verificador, prim;
	while(true){
		cont = 0; 
		verificador = -1;
		cin >> n;
		if(n==0) return 0;
		int v[n+1];
		for (int i = 0; i < n; i++){
			cin >> v[i]; 
		}
		v[n] = v[0];
		for (int i = 0; i < n; i++){
			valor = v[i]-v[i+1];
			if(valor>0 && verificador!=1){
				if(cont == 0) prim = 1;
				verificador = 1;
				cont++;
			}else if(valor<0 && verificador!=0){
				if(cont == 0) prim = 0;
				verificador = 0;
				cont++;
			}
		}
		if(verificador==prim){
			cont--;
		}
		cout << cont << endl;
	}
}