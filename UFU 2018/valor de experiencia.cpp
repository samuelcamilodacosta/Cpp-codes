#include <iostream>
#include <cstdlib>
int exp(int x, int y){
	if(y == 0){
		return 1;
	}
	else{
		return x*exp(x,y-1);
	}
	}
int main(){
	setlocale(LC_ALL, "");
	int x, y, valordaexp;
	printf("Informe o valor de X: ");
	scanf("%d", &x);
	printf("Informe o valor de y: ");
	scanf("%d", &y);
	valordaexp = exp(x, y);
	printf("O valor de %d ^ %d é: %d\n", x, y, valordaexp);
	system("pause");
	return 0;
}
