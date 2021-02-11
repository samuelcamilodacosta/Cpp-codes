#include <bits/stdc++.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"");
	vector <double> notas;
	double x, nota, media; int n, i;
	string s;
	cin >> n;
	while(n>0){
		cout << fixed << setprecision(2);
		media=0;
		cin >> s;
		cin >> x;
		for(i=0; i<7; i++){
			cin >> nota;
			notas.push_back(nota);
		}
		sort(notas.begin(),notas.end());
		for(i=1; i<6; i++){
			media = media+notas[i];
		}
		cout << s << " "  << media*x << endl;
		notas.clear();
		n--;
	}
	return 0;
}

