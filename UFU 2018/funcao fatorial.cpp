#include <iostream>
#include <cstdlib>
int fatorial(int num){
	if(num == 0){
		return 1;
	}else{
		return num*fatorial(num-1);
	}
	}
int main(){
	setlocale(LC_ALL, "");
	int n, fat;
	printf("Fatorial de ?: ");
	scanf("%d", &n);
	fat = fatorial(n);
	printf("O fatorial de %d é: %d\n", n, fat);
	system("pause");
	return 0;
}
