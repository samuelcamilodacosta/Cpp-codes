#include <bits/stdc++.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"");
	vector <double> notas;
	double i, x;
	for(i=0; i<5; i++){
		cin >> x;
		notas.push_back(x);
	}
	sort(notas.begin(),notas.end());
	cout << fixed << setprecision(1) << notas[1]+notas[2]+notas[3] << endl;
	return 0;
}

