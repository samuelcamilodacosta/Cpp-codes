#include <bits/stdc++.h>
using namespace std;

int main(){
	int arr[501][501], n, x, y, resp=0;
	cin >> n;
	for (int i = 0; i < 501; i++)
		for (int j = 0; j < 501; j++)
			arr[i][j] = 0;
	for (int k = 0; k < n; k++){
		cin >> x >> y;
		arr[x][y]++;
		if(arr[x][y]>1) resp = 1;
	}
	if(resp == 1) cout << "1" << endl;
	else cout << "0" << endl;
	return 0;
}