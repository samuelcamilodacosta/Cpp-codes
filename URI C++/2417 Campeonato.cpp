#include <bits/stdc++.h>
using namespace std;

int main(){
	int Cvit, Cemp, Csal, Fvit, Femp, Fsal, Cpontos, Fpontos;
	cin >> Cvit >> Cemp >> Csal >> Fvit >> Femp >> Fsal;
	Cpontos = (Cvit*3) + Cemp;
	Fpontos = (Fvit*3) + Femp;
	if(Cpontos > Fpontos) cout << "C" << endl;
	else if(Fpontos > Cpontos) cout << "F" << endl;
	else{
		if(Csal > Fsal) cout << "C" << endl;
		else if(Fsal > Csal) cout << "F" << endl;
		else cout  << "=" << endl;
	}
	return 0;
}