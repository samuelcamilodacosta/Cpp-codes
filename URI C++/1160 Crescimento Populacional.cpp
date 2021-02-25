#include <bits/stdc++.h>
using namespace std;

int main(){
	int popA, popB, t, cont;
	double g1, g2;
	cin >> t;
	while(t>0){
		cin >> popA >> popB;
		cin >> g1 >> g2;
		cont = 0;
		while(popA<=popB){
			cont++;
			if(cont>100){
				break;
			}
			popA += ((popA*g1)/100);
			popB += ((popB*g2)/100);
		}
		if(cont<=100){
			cout << cont << " anos." << endl;
		}
		else{
			cout << "Mais de 1 seculo." << endl;
		}
		t--;
	}
	return 0;
}