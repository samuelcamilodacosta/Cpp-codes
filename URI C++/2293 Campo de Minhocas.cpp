#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, m, sum, max=0;
	cin >> n >> m;
	int vet[n][m];
	for (int i = 0; i < n; i++){
		sum = 0;
		for (int j = 0; j < m; j++){
			scanf("%d", &vet[i][j]);
			sum += vet[i][j];
			if (sum > max) max = sum;
		}
	}
	for (int j = 0; j < m; j++){
		sum = 0;
		for (int i = 0; i < n; i++){
			sum += vet[i][j];
			if (sum > max) max = sum;
		}
	}
	cout << max << endl;
	return 0;
}