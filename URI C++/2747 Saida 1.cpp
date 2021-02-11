#include <bits/stdc++.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"");
	string vetor[] = {"-", "|", " "};
	int i,j;
	for(i=0; i<39; i++){
		cout << vetor[0];
	}
	cout << endl;
	for(j=0; j<5; j++){
		for(i=0; i<39; i++){
			if(i==0 || i==38){
				cout << vetor[1];
			}
			else{
				cout << vetor[2];
			}
		}
		cout << endl;
	}
	for(i=0; i<39; i++){
		cout << vetor[0];
	}
	cout << endl;
	return 0;
}

