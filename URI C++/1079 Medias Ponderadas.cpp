#include <bits/stdc++.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"");
	int c;
	float nota1, nota2, nota3, media;
	cin >> c;
	for(int i=0; i<c; i++){
		cin >> nota1;
		cin >> nota2;
		cin >> nota3;
		media = ((nota1*2)+(nota2*3)+(nota3*5))/10;
		cout << fixed;
		cout.precision(1);
		cout << media << endl;
	}
	return 0;
}

