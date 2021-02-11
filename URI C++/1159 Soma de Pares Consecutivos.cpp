#include <bits/stdc++.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"");
	int x, i, soma;
	cin >> x;
	inicio: 
		soma=0;
		i=0;
		while(i!=5){
			if(x%2==0){
				for(i=0; i<5; i++){
					soma = soma + x;
					x = x+2;
				}
			}else{
				x=x+1;
			}
		}
		cout << soma << endl;
		cin >> x;
		if(x!=0){
			goto inicio;
		}
	return 0;
}

