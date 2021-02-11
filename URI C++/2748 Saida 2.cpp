#include <bits/stdc++.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"");
	string vetor[] = {"-", "|", " ", "Roberto", "5786", "UNIFEI"};
	int i;
	for(i=0; i<39; i++){
		cout << vetor[0];
	}
	cout << endl;
	for(i=0; i<39; i++){ //1
		if(i==0 || i==38){
			cout << vetor[1];
		}else if(i==9 || i==10 || i==11 || i==12 || i==13 || i==14 || i==15){
			if(i==9){
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
		}else if(i==9 || i==10 || i==11 || i==12){
			if(i==9){
				cout << vetor[4];
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
		}else if(i==9 || i==10 || i==11 || i==12 || i==13 || i==14){
			if(i==9){
				cout << vetor[5];
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

