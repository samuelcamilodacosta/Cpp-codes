#include <bits/stdc++.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"");
	int n, nummatricula, matricula;
	double nota, notamax=0;
	cin >> n;
	if(n>=3 && n<=100){
		while(n>0){
			cin >> nummatricula;
			cin >> nota;
			if(nota>=8 && nota>notamax){
				notamax = nota;
				matricula = nummatricula;
			}
			n--;
		}
		if(notamax!=0){
			cout << matricula << endl;
		}else{
			cout << "Minimum note not reached" << endl;
		}
	}
	return 0;
}

