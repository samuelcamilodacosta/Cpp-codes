#include <bits/stdc++.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"");
	int num1=0, num2=0, div=0, resto=0;
	cout << "Informe o primeiro n�mero: ";
	cin >> num1;
	cout << "Informe o segundo n�mero: ";
	cin >> num2;
	div = num1/num2;
	resto = num1%num2;
	cout << "\tA divis�o do primeiro n�mero pelo segundo �: " << div << endl;
	cout << "\tO resto da divis�o �: " << resto << endl;		
	return 0;
}
