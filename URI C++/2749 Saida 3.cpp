#include <bits/stdc++.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"");
	string vetor[] = {"-", "|", " ", "x = 35"};
	int i;
	for(i=0; i<39; i++){
		cout << vetor[0];
	}
	cout << endl;
	for(i=0; i<39; i++){ //1
		if(i==0 || i==38){
			cout << vetor[1];
		}else if(i==1 || i==2 || i==3 || i==4 || i==5 || i==6 ){
			if(i==1){
				cout << vetor[3];
			}
		}
		else{
			cout << vetor[2];
		}
	}
		cout << endl;
	for(i=0; i<39; i++){ //2
		if(i==0 || i==38){
			cout << vetor[1];
		}
		else{
			cout << vetor[2];
		}
	}
		cout << endl;
	for(i=0; i<39; i++){ //3
		if(i==0 || i==38){
			cout << vetor[1];
		}else if(i==16 || i==17 || i==18 || i==19 || i==20 || i==21){
			if(i==16){
				cout << vetor[3];
			}
		}
		else{
			cout << vetor[2];
		}
	}
		cout << endl;
	for(i=0; i<39; i++){ //4
		if(i==0 || i==38){
			cout << vetor[1];
		}
		else{
			cout << vetor[2];
		}
	}
		cout << endl;
	for(i=0; i<39; i++){ //5
		if(i==0 || i==38){
			cout << vetor[1];
		}else if(i==32 || i==33 || i==34 || i==35 || i==36 || i==37){
			if(i==32){
				cout << vetor[3];
			}
		}
		else{
			cout << vetor[2];
		}
	}
		cout << endl;
	
	for(i=0; i<39; i++){
		cout << vetor[0];
	}
	cout << endl;
	return 0;
}

