#include <bits/stdc++.h>
using namespace std;
int testeTriangulo(int x, int y, int z){
	int sum, absolute;
	sum = x - y;
	absolute =  abs(sum);
	sum = x + y;
	if(absolute<z && z<sum){
		return 1;
	}else{
		return 0;
	}
}
int main(){
	setlocale(LC_ALL,"");
	int vet[4], x, cont=0, test=0;
	for(int i=0; i<4; i++){
		cin >> x;
		if(x>=1 && x<=100){
			vet[i] = x;
			cont++;
		}else{
			break;
		}
	}
	if(cont==4){
		test=test+testeTriangulo(vet[0],vet[1],vet[2]);
		test=test+testeTriangulo(vet[0],vet[1],vet[3]);
		test=test+testeTriangulo(vet[0],vet[2],vet[3]);
		test=test+testeTriangulo(vet[1],vet[2],vet[3]);
		if(test>0){
			cout  << "S" << endl;
		}else{
			cout << "N" << endl;
		}
	}
	return 0;
}

