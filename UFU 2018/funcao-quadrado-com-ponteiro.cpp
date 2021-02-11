#include <iostream>
using namespace std;
void quadrado(int *num){
	*num = (*num)*(*num);
}
int main(){
	int num;
	scanf("%d", &num);
	int *p;
	p = &num;
	printf("\nValor da variavel = %d\n", *p);
	quadrado(p);
	printf("\nValor da variavel = %d\n", *p);
	system("pause");
}
