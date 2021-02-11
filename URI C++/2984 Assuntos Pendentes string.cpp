#include <bits/stdc++.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"");
	string s;
	int cont=0;
	cin >> s;
	for(int i=0; i<s.size(); i++){
		if(s[i]=='('){
			cont++;
		}else if(s[i]==')'){
			if(cont>0){
				cont--;
			}
		}
	}
	if(cont!=0){
		cout << "Ainda temos " << cont << " assunto(s) pendente(s)!" << endl;
	}
	else{
		cout << "Partiu RU!" << endl;
	}
	return 0;
}

