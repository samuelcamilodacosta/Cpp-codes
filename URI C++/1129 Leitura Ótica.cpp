#include <bits/stdc++.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"");
	int n=0, a=0, b=0, c=0, d=0, e=0, cont=0, cont2=0;
	string resposta;
	cin >> n;
	inicio:
		cont = 0; cont2=0;
		cin >> a;
		cin >> b;
		cin >> c;
		cin >> d;
		cin >> e;
		if(a<=127){
			cont++; 
			resposta='A';
		}else{
			cont2++;
		}
		if(b<=127){
			cont++; 
			resposta='B'; 
		}else{
			cont2++;
		}
		if(c<=127){
			cont++; 
			resposta='C'; 
		}else{
			cont2++;
		}
		if(d<=127) {
			cont++; 
			resposta='D'; 
		}else{
			cont2++;
		}
		if(e<=127) {
			cont++; 
			resposta='E'; 
		}else{
			cont2++;
		}
		if(cont==1){
			cout << resposta << endl;
		}else{
			cout << "*" << endl;
		}
		n--;
		if(n==0){
			cin >> n;
			if(n>=1 && n<=255){
				goto inicio;
			}
		}else{
			goto inicio;
		}
	return 0;
}

