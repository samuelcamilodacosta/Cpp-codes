#include <bits/stdc++.h>
using namespace std;

int main(){
	int mes, dia, resp;
	while(scanf("%d %d", &mes, &dia)!=EOF){
		if(mes==12 && dia==24){
			cout << "E vespera de natal!" << endl;
		}else if(mes==12 && dia==25){
			cout << "E natal!" << endl;
		}else if(mes==12 && dia>25){
			cout << "Ja passou!" << endl;
		}else{
			if(mes==1){
				resp = 360-dia;
				cout << "Faltam "<< resp << " dias para o natal!" << endl;
			}else if(mes==2){
				resp = 329-dia;
				cout << "Faltam "<< resp << " dias para o natal!" << endl;
			}else if(mes==3){
				resp = 300-dia;
				cout << "Faltam "<< resp << " dias para o natal!" << endl;
			}else if(mes==4){
				resp = 269-dia;
				cout << "Faltam "<< resp << " dias para o natal!" << endl;
			}else if(mes==5){
				resp = 239-dia;
				cout << "Faltam "<< resp << " dias para o natal!" << endl;
			}else if(mes==6){
				resp = 208-dia;
				cout << "Faltam "<< resp << " dias para o natal!" << endl;
			}else if(mes==7){
				resp = 178-dia;
				cout << "Faltam "<< resp << " dias para o natal!" << endl;
			}else if(mes==8){
				resp = 147-dia;
				cout << "Faltam "<< resp << " dias para o natal!" << endl;
			}else if(mes==9){
				resp = 116-dia;
				cout << "Faltam "<< resp << " dias para o natal!" << endl;
			}else if(mes==10){
				resp = 86-dia;
				cout << "Faltam "<< resp << " dias para o natal!" << endl;
			}else if(mes==11){
				resp = 55-dia;
				cout << "Faltam "<< resp << " dias para o natal!" << endl;
			}else{
				resp = 25-dia;
				cout << "Faltam "<< resp << " dias para o natal!" << endl;
			}
		}
	}
	return 0;
}