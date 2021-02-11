#include <bits/stdc++.h>
using namespace std;

int verificador(int x){
	int i=0, j, cont=0, vet[5], aux=0;
	while(x>0){
		vet[i] = x%10;
		x = x/10;
		i++;
		cont++;
	}
	for(i=0; i<cont; i++){
		for(j=i+1; j<cont; j++){
			if(vet[i]==vet[j]){
				return 0;
			}
		}
	}
	return 1;
}


int main(){
	setlocale(LC_ALL,"");
	int num1, num2, diferenca, cont, inf=1;
	while(inf==1){
		cont=0,
		cin >> num1;
		cin >> num2;
		if(num1<1 || num1>5000 || num2<1 || num2>5000 || num2<num1){
			return 0;
		}
		diferenca = num2-num1;
		do{
			cont = cont + verificador(num1);
			num1++;
			diferenca--;
		}while(diferenca>=0);
		cout << cont << endl;
	}
	return 0;
}

