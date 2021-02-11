#include <bits/stdc++.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"");
	int i = 0, n = 0;
	cout << "Por favor, informe o número da tabuada que você deseja: ";
	cin >> n;
	for(i=0; i<=10; i++){
		cout << i << " x " << n << " = " << i*n << endl;
	}
	
	return 0;
}
