#include <bits/stdc++.h>
//Exercício de análise de média escolar, verificação de aprovação, recuperação ou reprovação

using namespace std;
int main(){
	setlocale(LC_ALL,"");
	double media=0, nota1=0, nota2=0, nota3=0, nota4=0;
	cout << "Informe o valor da nota obtida no primeiro Bimestre: ";
	cin >> nota1;
	cout << "Informe o valor da nota obtida no segundo Bimestre: ";
	cin >> nota2;
	cout << "Informe o valor da nota obtida no terceiro Bimestre: ";
	cin >> nota3;
	cout << "Informe o valor da nota obtida no quarto Bimestre: ";
	cin >> nota4;
	media = (nota1+nota2+nota3+nota4)/4;
	cout << "Sua média no semestre foi de: " << media << endl;
	if(media>=60){
		cout << "Parabéns! Você foi aprovado!!";
	}
	else if(media<60 && media >=30){
		cout << "Você está de recuperação! Se esforce para a prova.";
	}
	else{
		cout << "Infelizmente você está reprovado. Boa sorte no próximo ano!";
	}
	return 0;
}
