#include <bits/stdc++.h>
using namespace std;
int main(){
	setlocale(LC_ALL,"");
	cout << "Digite um n�mero correspondente ao m�s do ano: ";
	int num=0;
	cin >> num;
	string mes = 	(num==1) ? "Janeiro":
					(num==2) ? "Fevereiro":
					(num==3) ? "Mar�o":
					(num==4) ? "Abril":
					(num==5) ? "Maio":
					(num==6) ? "Junho":
					(num==7) ? "Julho":
					(num==8) ? "Agosto":
					(num==9) ? "Setembro":
					(num==10) ? "Outubro":
					(num==11) ? "Novembro":
					(num==12) ? "Dezembro":
								"O valor digitado n�o est� no intervalo de 1 � 12";
	cout << "O m�s escolhido foi: " << mes << endl;
	return 0;
}
