// variáveis x, y, temp => existem APENAS no escopo(corpo) da função troca valor(...)
#include <iostream>
using namespace std;
void trocaValor(int x, int y){
	cout << "ANTES" << endl;
	cout <<"x= " << x << endl;
	cout <<"y= " << y << endl;
	int temp = x;
	x = y;
	y = temp;
	cout << "DEPOIS" << endl;
	cout <<"x= " << x << endl;
	printf("y= %d", y);
}
int main(){
	int a = 10; 
	int b = 20;

	trocaValor(a,b);
	printf("\nA = %d, B = %d\n", a,b);
	system("pause");
}
