#include <bits/stdc++.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"");
	int n=0;
	cin >> n;
	cin.ignore();
	if(n<100 && n>0){
		while(n!=0){
			string lista;
			set <string> itens;
			char palavra[20];
			int i=0, j=0, qtdpalavra=0;
			getline(cin, lista);
			for(i=j=0; i<=lista.size(); i++,j++){
				if(lista[i]==' ' || lista[i]=='\0'){
					palavra[j]='\0';
					itens.insert(palavra);
					j=-1;
				}else{
					palavra[j] = lista[i];
				}
				}
			qtdpalavra= itens.size();
			for(string x:itens){ 
				if(qtdpalavra>1){
					cout << x << " ";
				}else if(qtdpalavra==1){
					cout << x << endl;
				}
				qtdpalavra = qtdpalavra-1;
			}
			n=n-1;
		}
	}
	return 0;
}
