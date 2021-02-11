#include <iostream>
#include <cstdlib>
int p(int num){
	if(num == 0 || num == 1 || num == 2){
		return 1;
	}
	else{
		return p(num-2)+p(num-3);
	}
	}
int main(){
	setlocale(LC_ALL, "");
	int n, numpadovan;
	printf("Informe um valor: ");
	scanf("%d", &n);
	numpadovan = p(n);
	printf("O termo %d da sequência de Padovan é: %d\n", n, numpadovan);
	system("pause");
	return 0;
}
