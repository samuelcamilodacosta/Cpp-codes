#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <conio.h>
int main(){
	system("color 7f");
	setlocale(LC_ALL,"");
	int idade;
	printf("Informe a idade do nadador: ");
	scanf("%d", &idade);
	if(idade>=5 && idade<=7){
		printf("Aluno classificado como Infantil A.\a");
	}
	else if(idade>=8 && idade<=10){
		printf("Aluno classificado como Infantil B.\a");
	}
	else if(idade>=11 && idade<=13){
		printf("Aluno classificado como Juvenil A.\a");
	}
	else if(idade>=14 && idade<=17){
		printf("Aluno classificado como Juvenil B.\a");
	}
	else if(idade>=18){
		printf("Aluno classificado como Adulto.\a");
	}
	else{
		printf("Idade inválida.");
	}
	return 0;
}
