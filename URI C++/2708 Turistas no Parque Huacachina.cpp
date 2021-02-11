#include <bits/stdc++.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"");
	string word;
	int total=0, pessoas, cont=0;
	while(word!="ABEND"){
		cin >> word;
		if(word=="ABEND"){
			break;
		}
		cin >> pessoas;
		if(word=="SALIDA"){
			total = total + pessoas;
			cont++;
		}else if(word=="VUELTA"){
			total = total - pessoas;
			cont--;
		}
	}
	cout << total << endl;
	cout << cont << endl;
	return 0;
}

