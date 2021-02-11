#include <bits/stdc++.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"");
	int bife, massa, frango, f, b, m, refeicao=0;
	cin >> frango >> bife >> massa;
	cin >> f >> b >> m;
	if(frango<f){
		refeicao = refeicao + (f-frango);
	}
	if(bife<b){
		refeicao = refeicao + (b-bife);
	}
	if(massa<m){
		refeicao = refeicao + (m-massa);
	}
	cout << refeicao << endl;
	return 0;
}

