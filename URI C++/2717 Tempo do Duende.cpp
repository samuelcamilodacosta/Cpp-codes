#include <bits/stdc++.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"");
	int n, a, b, sum=0;
	cin >> n;
	cin >> a;
	cin >> b;
	sum = a + b;
	if(sum>n){
		cout << "Deixa para amanha!" << endl;
	}else{
		cout << "Farei hoje!" << endl;
	}
	return 0;
}

