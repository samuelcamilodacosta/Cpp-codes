#include <bits/stdc++.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"");
	int inihr, inimin, fimhr, fimmin, horas=0, minutos;	
	cin >> inihr >> inimin;
	cin >> fimhr >> fimmin;
	if(inihr==fimhr && inimin == fimmin){
		cout << "O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)" << endl;
		return 0;
	}
	if(inimin>fimmin){
		fimhr--;
		minutos = abs((60+fimmin)-inimin);
	}else{
		minutos = fimmin-inimin;
	}
	if(inihr>fimhr){
		horas = abs((24-inihr)+fimhr);
	}else{
		horas = fimhr-inihr;
	}
	cout << "O JOGO DUROU "<< horas <<" HORA(S) E "<< minutos <<" MINUTO(S)" << endl;
	return 0;
}

