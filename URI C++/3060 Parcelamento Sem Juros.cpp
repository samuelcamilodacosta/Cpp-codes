#include <bits/stdc++.h>
using namespace std;

int main(){
	int V, P, rest;
	scanf("%d", &V);
	if(V>1000 || V<10)
		return 0;
	scanf("%d", &P);
	if(P<2 || P>18)
		return 0;
	rest = V%P;
	for (int i = 0; i < P; i++){
		if(rest > 0){
			cout << (V/P)+1 << endl;
			rest--;
		}
		else
			cout << V/P << endl;
	}
	return 0;
}