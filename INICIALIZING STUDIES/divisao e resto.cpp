#include <bits/stdc++.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"");
	int num1=0, num2=0, div=0, resto=0;
	cout << "Informe o primeiro número: ";
	cin >> num1;
	cout << "Informe o segundo número: ";
	cin >> num2;
	div = num1/num2;
	resto = num1%num2;
	cout << "\tA divisão do primeiro número pelo segundo é: " << div << endl;
	cout << "\tO resto da divisão é: " << resto << endl;		
	return 0;
}
