#include <bits/stdc++.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"");
	int c, x, y, resp, resultado, dif, i;
	string op, igual;
	cin >> c;
	while(c>0){
		cin >> x;
		cin >> op;
		cin >> y;
		cin >> igual;
		cin >> resp;
		if(op=="+"){
			resultado = x+y;
		}else if(op=="-"){
			resultado = x-y;
		}else if(op=="x"){
			resultado = x*y;
		}
		dif = abs(resultado-resp);
		cout << "E";
		for(i=0; i<dif; i++){
			cout << "r";
		}
		cout << "ou!" << endl;
		c--;
	}	
	return 0;
}

