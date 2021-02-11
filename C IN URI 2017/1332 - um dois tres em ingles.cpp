#include <bits/stdc++.h>
using namespace std;
int main(){
	int n, tamanho, ponto;
	char palavra[10];
	scanf("%d", &n);
	do{
		ponto = 0;
		scanf("%s", &palavra);
		tamanho = strlen(palavra);
		if(tamanho == 5){ cout << "3" << endl;}
		else if(palavra[0] == 't' || palavra[1] == 'w' || palavra[2] == 'o'){
			if(palavra[0] == 't'){ ponto = ponto+1;}
			if(palavra[1] == 'w'){ ponto = ponto+1; }
			if(palavra[2] == 'o'){ ponto = ponto+1;}
			if(ponto>=2){ cout << "2" << endl; }else{ cout << "1" << endl;}
		}
		else{ cout << "1" << endl;}
		n = n-1;
	}while(n!=0);
	
	return 0;
}
