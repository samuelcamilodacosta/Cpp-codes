#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
enum semana{Domingo,Segunda,Terca,Quarta,Quinta,Sexta,Sabado};
int main(){
	setlocale(LC_ALL,"");
	enum semana s1, s2, s3;
	s1 = Segunda; //Atribuo uma string para localizar a sua posição no enum, Segunda vale 1
	printf("Segunda é o %dº dia da semana. \n",s1+1);
	s1 = Segunda;
	s2 = Terca;
	printf("Domingo = %d\n",Domingo);
	printf("s1 = %d\n", s1);
	printf("s2 = %d\n", s2);
	printf("s3 = %d\n", s1+s2);
	system("pause");
	return 0;
}
