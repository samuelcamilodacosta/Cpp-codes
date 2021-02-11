#include <bits/stdc++.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"");
	int n;
	string frase;
	cin >> n;
	if(n>=1 && n<=2000){
		while(n!=0){
		cin.ignore();
		getline(cin, frase);
		n--;
		}
		cout << "Ciencia da Computacao" << endl;
	}
	return 0;
}

