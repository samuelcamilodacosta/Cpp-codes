#include <bits/stdc++.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"");
	int vet1[5], vet2[5], cont=0, i;
	for(i=0; i<5; i++){
		cin >> vet1[i];
	}
	for(i=0; i<5; i++){
		cin >> vet2[i];
	}
	for(i=0; i<5; i++){
		if(vet1[i]+vet2[i] == 1){
			cont++;
		}
	}
	if(cont==5){
		cout << "Y" << endl;
	}else{
		cout << "N" << endl;
	}
	return 0;
}

