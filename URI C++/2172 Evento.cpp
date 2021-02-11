#include <bits/stdc++.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"");
	long int X=1, M=1, E;
	while(X != 0 && M != 0){
		cin >> X;
		cin >> M;
		if(X>0 && X<=3){
			if(M>=10){
				E = X*M;
				cout << E << endl;
			}
		}
	}
	return 0;
}

