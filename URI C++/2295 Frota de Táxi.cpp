#include <bits/stdc++.h>
using namespace std;

int main(){
	double alcool=0, gasolina=0, pAl, pGa, RendAl, RendGa;
	cin >> pAl >> pGa >> RendAl >> RendGa;
	alcool = (pAl/RendAl);
	gasolina = (pGa/RendGa);
	if(gasolina>alcool){
		cout << "A" << endl;
	}else{
		cout << "G" << endl;
	}
	return 0;
}