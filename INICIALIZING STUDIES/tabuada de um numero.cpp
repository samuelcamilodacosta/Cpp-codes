#include <bits/stdc++.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"");
	int i = 0, n = 0;
	cout << "Por favor, informe o n�mero da tabuada que voc� deseja: ";
	cin >> n;
	for(i=0; i<=10; i++){
		cout << i << " x " << n << " = " << i*n << endl;
	}
	
	return 0;
}
