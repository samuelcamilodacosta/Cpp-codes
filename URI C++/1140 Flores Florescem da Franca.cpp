#include <bits/stdc++.h>
using namespace std;

bool comparacao(char x, char y){
	x = tolower(x);
	y = tolower(y);
	if(x==y){
		return true;
	}else{
		return false;
	}
}
int main(){
	setlocale(LC_ALL,"");
	int comp=0, cont=0;
	char frase[1000];
	gets(frase);
	inicio: 
		comp=0; cont=0;
		for(int i=0; i<strlen(frase); i++){
			if(frase[i]==' ' && frase[i+1!='\0']){
				(comparacao(frase[0], frase[i+1])==true) ? comp++ : comp=0;
				cont++;
			}
		}
		if(comp==cont){
			cout << "Y" << endl;
		}else{
			cout << "N" << endl;
		}
		gets(frase);
	if(frase[0]!='*'){
		goto inicio;
	}
	return 0;
}

