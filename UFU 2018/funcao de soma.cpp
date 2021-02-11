#include <iostream>
#include <cstdlib>
int soma(int num){
	if(num == 1){
		return 1;
	}
	else{
		return num+soma(num-1);
	}
	}
int main(){
	setlocale(LC_ALL, "");
	int n, s;
	printf("Informe um valor: ");
	scanf("%d", &n);
	s = soma(n);
	printf("A soma de 1 até %d é: %d\n", n, s);
	system("pause");
	return 0;
}
