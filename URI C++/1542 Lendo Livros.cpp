#include <bits/stdc++.h>
using namespace std;

int main(){
	int Q, D, P, total;
	while(true){
		cin >> Q;
		if(Q==0) return 0;
		cin >> D >> P;
		total = (Q*D*P)/(P-Q);
		if(total==1) cout << total << " pagina" << endl;
		else cout << total << " paginas" << endl;
	}
}