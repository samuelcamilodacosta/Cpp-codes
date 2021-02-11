#include <bits/stdc++.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"");
	int vetor[6], i, x, j, acertou=0;
	for(i=0; i<6; i++){
		cin >> vetor[i];
	}
	for(i=0; i<6; i++){
		cin >> x;
		for(j=0; j<6; j++){
			if(x == vetor[j]){
				acertou++;
				break;
			}
		}
	}
	if(acertou == 3){
		cout << "terno" << endl;
	}else if(acertou == 4){
		cout << "quadra" << endl;
	}else if(acertou == 5){
		cout << "quina" << endl;
	}else if(acertou == 6){
		cout << "sena" << endl;
	}else{
		cout << "azar" << endl;
	}
	return 0;
}

