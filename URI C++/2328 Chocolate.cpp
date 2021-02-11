#include <bits/stdc++.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"");
	int n, i, total=0;
	cin >> n;
	int vet[n];
	for(i=0; i<n; i++){
		cin >> vet[i];
		total = total+(vet[i]-1);
	}
	cout << total << endl;
	return 0;
}

