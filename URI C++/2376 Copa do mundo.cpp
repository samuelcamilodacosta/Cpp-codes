#include <bits/stdc++.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"");
	int vet[16], i, x, y, j=-1;
	for(i=0; i<16; i++){
		vet[i]=0;
	}
	for(i=0; i<16; i+=2){
		cin >> x;
		cin >> y;
		if(x>y){
			vet[i] = 1;
		}else{
			vet[i+1] = 1;
		}
	}
	for(i=0; i<16; i++){
		if(vet[i]==1 && j==-1){
			j = i;
		}else if(vet[i]==1 && j!=-1){
			cin >> x;
			cin >> y;
			if(x>y){
				vet[j] = 2;
				j=-1;
			}else{
				vet[i] = 2;
				j=-1;
			}
		}
	}
	for(i=0; i<16; i++){
		if(vet[i]==2 && j==-1){
			j = i;
		}else if(vet[i]==2 && j!=-1){
			cin >> x;
			cin >> y;
			if(x>y){
				vet[j] = 3;
				j=-1;
			}else{
				vet[i] = 3;
				j=-1;
			}
		}
	}
	for(i=0; i<16; i++){
		if(vet[i]==3 && j==-1){
			j = i;
		}else if(vet[i]==3 && j!=-1){
			cin >> x;
			cin >> y;
			if(x>y){
				vet[j] = 4;
				j=-1;
			}else{
				vet[i] = 4;
				j=-1;
			}
		}
	}
	for(i=0; i<16; i++){
		if(vet[i]==4){
			cout << char(65+i) << endl;
		}
	}
	return 0;
}

