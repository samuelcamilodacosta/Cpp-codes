#include <bits/stdc++.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"");
	string operacao;
	int N, P, Q, total;
	cin >> N;
	cin >> P;
	cin >> operacao;
	cin >> Q;
	if(operacao == "*"){
		total = P*Q;
		if(N>=total){
			cout << "OK" << endl;
		}else{
			cout << "OVERFLOW" << endl;
		}
	}
	if(operacao == "+"){
		total = P+Q;
		if(N>=total){
			cout << "OK" << endl;
		}else{
			cout << "OVERFLOW" << endl;
		}
	}
	return 0;
}

