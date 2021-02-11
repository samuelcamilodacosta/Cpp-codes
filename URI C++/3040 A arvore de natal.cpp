#include <bits/stdc++.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"");
	int altura, espessura, galhos, n;
	cin >> n;	
	while(n>0){
		cin >> altura >> espessura >> galhos;
		if(altura>=200 && altura<=300 && espessura>50 && galhos>=150){
			cout << "Sim" << endl;
		}else{
			cout << "Nao" << endl;
		}
		n--;
	}
	return 0;
}

