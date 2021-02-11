#include <bits/stdc++.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"");
	int x, z, soma, cont=0;
	cin >> x;
	do{
		cin >> z;
	}while(x>=z);
	for(x; x<z; x++){
		soma = soma + x;
		cont++;
		if(soma>z){
			break;
		}
	}
	cout << cont << endl;
	return 0;
}

