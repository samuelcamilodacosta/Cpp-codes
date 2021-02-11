#include <bits/stdc++.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"");
	double O, B, I;
	cin >> O >> B >> I;
	if(O==B || O==I || B==I){
		cout << "Empate" << endl;
	}else if(O<B && O<I){
		cout << "Otavio" << endl;
	}else if(B<O && B<I){
		cout << "Bruno" << endl;
	}else if(I<B && I<O){
		cout << "Ian" << endl;
	}
	return 0;
}

