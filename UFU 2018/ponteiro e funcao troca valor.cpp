/* declara��o de ponteiros
int a = 10; int b = 20;
int *p; - p � um ponteiro que guarda no espa�o de uma vari�vel inteira
p = &a; - pegue o endere�o de mem�ria onde est� a vari�vel a e jogue em p
*/
#include <iostream>
using namespace std;
void trocaValor(int x, int y){
/*	cout << "ANTES" << endl;
	cout <<"x= " << x << endl;
	cout <<"y= " << y << endl;
	int temp = x;
	x = y;
	y = temp;
	cout << "DEPOIS" << endl;
	cout <<"x= " << x << endl;
	printf("y= %d", y);*/
}
int main(){
	setlocale(LC_ALL,"");
	int a = 10; 
	int b = 20;
	int *p; //a variavel p � um ponteiro para inteiro, isto �, ela guarda um endere�o de mem�ria onde se encontra um inteiro
	p = &a; //p recebe o endere�o de mem�ria onde est� a vari�vel inteira a
	printf("O valor de a �: %d\n", a);
	printf("O valor de p de a est� armazenado em: %d\n", p);
	printf("O valor de p de a �: %d\n", *p);
	
	p = &b;
	printf("O valor de a �: %d\n", b);
	printf("O valor de p de a est� armazenado em: %d\n", p);
	printf("O valor de p de a �: %d\n", *p);
	system("pause");
/*	trocaValor(a,b);
	printf("\nA = %d, B = %d\n", a,b);
	system("pause");
*/
}

