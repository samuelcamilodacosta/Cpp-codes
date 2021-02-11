#include <bits/stdc++.h>
using namespace std;
double preco(int x){
	if(x==1001){
		return 1.50;
	}else if(x==1002){
		return 2.50;
	}else if(x==1003){
		return 3.50;
	}
	else if(x==1004){
		return 4.50;
	}
	else if(x==1005){
		return 5.50;
	}
	else{
		return 0;
	}
}
int main(){
	setlocale(LC_ALL,"");
	int num, codproduto, qtd;
	double valortotal=0.00, valor=0.00;
	cin >> num;
	if(num>=1 && num<=5){
		while(num>0){
			cin >> codproduto;
			cin >> qtd;
			valor=qtd * (preco(codproduto));
			valortotal = valortotal+valor;
			num--;
		}
		cout << fixed << setprecision(2) << valortotal << endl;
	}
	return 0;
}

