#include <bits/stdc++.h>
using namespace std;
int main(){
	setlocale(LC_ALL,"");
	int x = 0, y = 0;
	cout << "Informe o valor de x: ";
	cin >> x;
	cout << "Informe o valor de y: ";
	cin >> y;
	cout << "O valor de x e y �: " << x << ", " << y << endl;
	cout << "A soma entre x e y �: " << x + y << endl;
	cout << "A subtra��o de x por y �: " << x - y << endl;
	cout << "A multiplica��o entre x e y �: " << x * y << endl;
	if(y!=0){
		double d = x / y;
    	cout << "A divis�o de x por y �: " << d << endl;
	}
	return 0;
}
