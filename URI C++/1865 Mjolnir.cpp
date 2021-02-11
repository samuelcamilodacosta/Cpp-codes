#include <bits/stdc++.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"");
	int c, forca;
	string nome, nomex;
	nomex = {'T','h','o','r'};
	cin >> c;
	while(c!=0){
		cin >> nome;
		cin >> forca;
		if(forca>=1 && forca<=25000){
			if(nome==nomex){
				cout << "Y" << endl;
			}else{
				cout << "N" << endl;
			}
		}
		c--;
	}
	return 0;
}

