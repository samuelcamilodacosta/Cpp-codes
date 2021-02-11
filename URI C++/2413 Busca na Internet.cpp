#include <bits/stdc++.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"");
	int pessoas, total;
	cin >> pessoas;
	if(pessoas>=1 && pessoas<=1000){
		total = (pessoas*4);
		cout << total << endl;
	}
	return 0;
}

