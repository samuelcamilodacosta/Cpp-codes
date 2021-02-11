#include <bits/stdc++.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"");
	int num;
	double soma=0, soma2=0;
	int x=0;
	cin >> num;
	double vet[num];	
	for(int i=0; i<num; i++){
		cin >> vet[i];
		if(vet[i]>100 || vet[i]<1){
			return 0;
		}else{
			soma = soma+(vet[i]/2);
		}
	}
	for(int i=0; i<num; i++){
		soma2 = soma2 + vet[i];
		if(soma2==soma){
			x = i;
			break;
		}
	}
	cout << x+1 << endl;
	return 0;
}

