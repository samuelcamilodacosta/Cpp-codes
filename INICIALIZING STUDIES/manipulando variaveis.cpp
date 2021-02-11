#include <bits/stdc++.h>
using namespace std;
int main(){
	setlocale(LC_ALL,"");
	int varInt = 200;
	char c = 's';
	double pFlutuante = 11.10;
	cout << "O valor da variável varInt é: " << varInt << endl;
	cout << "O valor da variável c é: " << c << endl;
	cout << "O valor da variável pFlutuante é: " << pFlutuante << endl;
	cout << endl;
	cout << "Memória da variável varInt: " << sizeof(varInt) << " bytes" << endl;
	cout << "Memória da variável c: " << sizeof(c) << " bytes" << endl;
	cout << "Memória da variável pFlutuante: " << sizeof(pFlutuante) << " bytes" << endl;
	return 0;
}
