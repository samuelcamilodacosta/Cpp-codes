#include <iostream>
#include <cstdlib>
int mdc(int x, int y){
	if(y == 0){
		return x;
	}
	else{
		return mdc(y, x%y);
	}
	}
int main(){
	setlocale(LC_ALL, "");
	int x, y, maxdivcomum ;
	printf("Informe X: ");
	scanf("%d", &x);
	printf("Informe Y: ");
	scanf("%d", &y);	
	maxdivcomum = mdc(x, y);
	printf("O máximo divisor comum é: %d\n", maxdivcomum);
	system("pause");
	return 0;
}
