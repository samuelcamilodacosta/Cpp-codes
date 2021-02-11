#include <bits/stdc++.h>
using namespace std;
typedef pair <string, int> P;

int main(){
	setlocale(LC_ALL,"");
	string frase;
	char palavra[50];
	int n=0, aux=0, i=0, j=0;
	cin >> n;
	cin.ignore();
	while(n!=0){
		vector <P> p;
		aux=0;
		getline(cin, frase);
		for(i=j=0; i<=frase.size(); i++,j++){
			if(frase[i]==' ' || frase[i]=='\0'){
				palavra[j]='\0';
				p.push_back(make_pair(palavra,j+aux));
				j=-1;
				aux++;
			}else{
				palavra[j] = frase[i];
			}
		}
		sort(p.begin(), p.end(), 
			[] (P x,P y){
			if(x.first.size() == y.first.size()){
					return x.second < y.second;
			
			}else{
				return x.first.size() > y.first.size();
			}
		});
		for(i=0; i<aux; i++){
			if((i+1) != aux){
				cout << p[i].first << " ";
			}else{
				cout << p[i].first << endl;
			}
		}
		n--;
	}
	return 0;
}
