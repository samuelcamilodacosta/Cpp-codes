#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, cont=0;
	while(true){
		cont++;
		cin >> n;
		if(n==0) return 0;
		long long int mov = (pow(2,n))-1;
		cout << "Teste " << cont << endl;
		cout << mov << endl << endl;
	}
}