#include <bits/stdc++.h>
using namespace std;

int main(){
	string frase, letra;
	cin >> letra;
	cin.ignore();
	getline(cin, frase);
	float total=1, totalantigo = -1, repete=0, tam = frase.length();
	for (int i = 0; i < tam; i++){
		if(frase[i]==' '){
			total++;
		}
		if(totalantigo!=total && frase[i]==letra[0]){
			totalantigo = total;
			repete++;
		}
	}
	float porcentagem = (repete*100)/total;
	printf("%.1f\n", porcentagem);
	return 0;
}