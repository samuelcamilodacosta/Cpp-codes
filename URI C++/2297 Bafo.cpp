#include <bits/stdc++.h>
using namespace std;

int main(){
	int cont = 0, c, sumA, sumB, x, y;
	while(true){
		cont++;
		cin >> c;
		if(c==0) return 0;
		sumA = 0; sumB = 0;
		while(c>0){
			cin >> x >> y;
			sumA += x;
			sumB += y;
			c--;
		}
		cout << "Teste " << cont << endl;
		if(sumA>sumB) cout << "Aldo" << endl;
		if(sumB>sumA) cout << "Beto" << endl;
		cout << endl;
	}
}