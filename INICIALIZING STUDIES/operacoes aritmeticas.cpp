#include <bits/stdc++.h>
using namespace std;
int main(){
	setlocale(LC_ALL,"");
	int x = 0, y = 0;
	cout << "Informe o valor de x: ";
	cin >> x;
	cout << "Informe o valor de y: ";
	cin >> y;
	cout << "O valor de x e y é: " << x << ", " << y << endl;
	cout << "A soma entre x e y é: " << x + y << endl;
	cout << "A subtração de x por y é: " << x - y << endl;
	cout << "A multiplicação entre x e y é: " << x * y << endl;
	if(y!=0){
		double d = x / y;
    	cout << "A divisão de x por y é: " << d << endl;
	}
	return 0;
}
