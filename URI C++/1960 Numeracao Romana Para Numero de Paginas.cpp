#include <bits/stdc++.h>
using namespace std;
int tamanho(int x){
	int tam=0;
	while(x>0){
		x = x/10;
		tam++;
	}
	return tam;	
}
int main(){
	setlocale(LC_ALL,"");
	int n, tam, x;
	cin >> n;
	if(n>0 && n<1000){
		tam = tamanho(n);
		if(tam==3){
			x = n/100;
			n=n%100;
			switch(x){
				case 1:
					cout << "C";
					break;
				case 2:
					cout << "CC";
					break;
				case 3:
					cout << "CCC";
					break;
				case 4:
					cout << "CD";
					break;
				case 5:
					cout << "D";
					break;
				case  6:
					cout << "DC";
					break;
				case 7:
					cout << "DCC";
					break;
				case 8:
					cout << "DCCC";
					break;
				case 9:
					cout << "CM";
					break;
			}
			tam--;
		}
		if(tam==2){
			x = n/10;
			n = n%10;
			switch(x){
				case 1:
					cout << "X";
					break;
				case 2:
					cout << "XX";
					break;
				case 3:
					cout << "XXX";
					break;
				case 4:
					cout << "XL";
					break;
				case 5:
					cout << "L";
					break;
				case 6:
					cout << "LX";
					break;
				case 7:
					cout << "LXX";
					break;
				case 8:
					cout << "LXXX";
					break;
				case 9:
					cout << "XC";
					break;
			}
			tam--;
		}
		if(tam==1){
			x = n;
			switch(x){
				case 1:
					cout << "I";
					break;
				case 2:
					cout << "II";
					break;
				case 3:
					cout << "III";
					break;
				case 4:
					cout << "IV";
					break;
				case 5:
					cout << "V";
					break;
				case 6:
					cout << "VI";
					break;
				case 7:
					cout << "VII";
					break;
				case 8:
					cout << "VIII";
					break;
				case 9:
					cout << "IX";
					break;
			}
			tam--;
		}
	cout << endl;
	}	
	return 0;
}

