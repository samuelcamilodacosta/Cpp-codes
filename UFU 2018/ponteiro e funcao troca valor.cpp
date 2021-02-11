/* declaração de ponteiros
int a = 10; int b = 20;
int *p; - p é um ponteiro que guarda no espaço de uma variável inteira
p = &a; - pegue o endereço de memória onde está a variável a e jogue em p
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
	int *p; //a variavel p é um ponteiro para inteiro, isto é, ela guarda um endereço de memória onde se encontra um inteiro
	p = &a; //p recebe o endereço de memória onde está a variável inteira a
	printf("O valor de a é: %d\n", a);
	printf("O valor de p de a está armazenado em: %d\n", p);
	printf("O valor de p de a é: %d\n", *p);
	
	p = &b;
	printf("O valor de a é: %d\n", b);
	printf("O valor de p de a está armazenado em: %d\n", p);
	printf("O valor de p de a é: %d\n", *p);
	system("pause");
/*	trocaValor(a,b);
	printf("\nA = %d, B = %d\n", a,b);
	system("pause");
*/
}

