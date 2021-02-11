#include <bits/stdc++.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"");
	long long int QT, int1, int2, sum;
	string nome1, nome2, valor1, valor2, result;
	cin >> QT;
	if(QT>=1 && QT<=100){
		while(QT!=0){
			cin >> nome1;
			cin >> valor1;
			cin >> nome2;
			cin >> valor2;
			cin >> int1;
			cin >> int2;
			sum = int1+int2;
			if(sum%2==0){
				result={'P','A','R'};
			}else{
				result={'I','M','P','A','R'};
			}
			if(result==valor1){
				cout << nome1 << endl;
			}else{
				cout << nome2 << endl;
			}
			QT--;
		}	
	}
	return 0;
}

