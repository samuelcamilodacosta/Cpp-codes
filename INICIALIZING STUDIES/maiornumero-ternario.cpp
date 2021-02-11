#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
int main(){
	setlocale(LC_ALL,"");
	int x, y, z;
	printf("Informe o número x: ");
	scanf("%d", &x);
	printf("Informe o número y: ");
	scanf("%d", &y);
	z = x > y ? x : y;
	printf("Maior = %d\n", z);
	// ou
	(x > y) ? printf("%d é o maior valor.\n", x) : printf("%d é o maior valor.\n", y);
	system("pause");
	return 0;
}
