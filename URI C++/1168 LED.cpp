#include <bits/stdc++.h>
using namespace std;

int main(){
	string numero;
	int n=0, led=0;
	setlocale(LC_ALL,"");
	cin >> n;
	while(n!=0){
	cin >> numero;
	led=0;
	for(int i=0; i<numero.length(); i++){
		if(numero[i]=='1'){
			led += 2;
		}
		if(numero[i]=='2'){
			led += 5;
		}
		if(numero[i]=='3'){
			led += 5;
		}
		if(numero[i]=='4'){
			led += 4;
		}
		if(numero[i]=='5'){
			led += 5;
		}
		if(numero[i]=='6'){
			led += 6;
		}
		if(numero[i]=='7'){
			led += 3;
		}
		if(numero[i]=='8'){
			led += 7;
		}
		if(numero[i]=='9'){
			led += 6;
		}
		if(numero[i]=='0'){
			led += 6;
		}
	}
	cout << led << " leds" << endl;
	n--;
	}
	return 0;
}

