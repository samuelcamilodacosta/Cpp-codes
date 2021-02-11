#include <bits/stdc++.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"");
	int A, B, C, total, tamanho;
	inicio: 
		tamanho=0;
		total=0;
		cin >> A >> B >> C;
		if(A==0 && B==0 && C==0){
			return 0;
		}
		total = A*B*C;
		tamanho = cbrt(total);
		cout << tamanho << endl;
		goto inicio;
}

