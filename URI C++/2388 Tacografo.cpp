#include <bits/stdc++.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"");
	int intervalo, tempo, velocidade, total=0;
	cin >> intervalo;
	while(intervalo>0){
		cin >> tempo >> velocidade;
		total = total +(tempo*velocidade);
		intervalo--;
	}
	cout << total << endl;
	return 0;
}

