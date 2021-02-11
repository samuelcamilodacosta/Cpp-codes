#include <iostream>
#include <cstdlib>
#include <cstring>
int main(){
	char string1[50], string2[50];
	char *p1, *p2; 
	int  j, i, aux1=0, aux2=0, a, b;
	printf("Informe a primeira string: ");
	gets(string1);
	printf("Informe a segunda string: ");
	gets(string2);
	p1 = &string1[0];
	p2 = &string2[0];
	a = strlen(string1);
	b = strlen(string2);
	printf("%s\n", string1);
	printf("%s\n", string2);
	printf("%d\n", a);
	printf("%d\n", b);
	for(i=0; i < a; i++){	
		if(*(p1+i) == *(p2+0)){
		aux1=0;
		for(j=0; j < b; j++){	
			if(*(p1+i+j) == *(p2+j)){
			aux1 = aux1 + 1;	
			}
			if(aux1 == b){
				aux2 = aux2 +1;
				i = i + (b-1);
			}
			}}}
	printf("A segunda string se repete %d vezes na string 1.", aux2);
	printf("\n");
	system("pause");
	return 0;
}
