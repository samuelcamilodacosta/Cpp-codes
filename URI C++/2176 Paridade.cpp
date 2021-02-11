#include <bits/stdc++.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"");
	int cont=0, i=0;
	char numero[101];
	cin.getline(numero,101);
	if(strlen(numero)<=100 && strlen(numero)>=1){
		for(i=0; i<strlen(numero); i++){
			if(numero[i]=='1'){
				cont++;
			}
		}
		if(cont%2==0){
			cout << numero << "0" << endl;
		}else{
			cout << numero << "1" << endl;
		}
	}
	return 0;
}

