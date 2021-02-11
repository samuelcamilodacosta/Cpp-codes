#include <iostream>
#include <cstdlib>
int fib(int num, int *p){
	*p = *p +1;
	if(num == 0){
		return 0;
	}
	else if(num == 1){
		return 1;
	}
	else{
		return fib(num-1, p)+fib(num-2, p);
	}	
	}
int main(){
	setlocale(LC_ALL, "");
	int n, calls, num_calls=0;
	int *p;
	p = &num_calls;
	printf("Informe quantos testes: ");
	scanf("%d", &n);
	int vet[n];
	for(int i=0; i<n; i++){
	scanf("%d", &vet[i]);
	}
	for(int i=0; i<n; i++){
	if(vet[i]>=1 && vet[i]<=39){
	calls = 0;
	num_calls = 0;
	*p = 0;
	calls = fib(vet[i], p);
	num_calls = num_calls-1;
	printf("fib(%d) = %d calls = %d\n", vet[i], num_calls, calls);
	}
	}
	
	system("pause");
	return 0;
}
