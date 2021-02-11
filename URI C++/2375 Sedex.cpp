#include <bits/stdc++.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"");
	int D, A, L, P;
	cin >> D;
	cin >> A >> L >> P;
	if(A>=D && L>=D && P>=D){
		cout << "S" << endl;
	}else{
		cout << "N" << endl;
	}
	return 0;
}

