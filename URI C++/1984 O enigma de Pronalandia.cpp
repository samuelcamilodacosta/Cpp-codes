#include <bits/stdc++.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"");
	long long int num, x, i=0, cont=0;
	int vet[11];
	cin >> num;
	while(num>0){
		vet[i] = num%10;
		num = num/10;
		cont++;
		i++;
	}
	for(i=0; i<cont; i++){
		cout << vet[i];
	}
	cout << endl;
	return 0;
}

