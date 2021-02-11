#include <bits/stdc++.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"");
	int N, M;
	string acao;
	cin >> N;
	cin >> M;
	if(0<N && N<500 && M>0 && M<500){
		while(M>=0){
			getline(cin,acao);
			if(acao=="fechou"){
				N = N-1+2;
			}else if(acao=="clicou"){
				N = N-1;
			}
			M--;
		}
		cout << N << endl;
	}
	return 0;
}

