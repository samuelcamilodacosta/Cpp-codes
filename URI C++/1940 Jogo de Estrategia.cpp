#include <bits/stdc++.h>
using namespace std;
#define MAX 1000
int main(){
	int J, R, maior=0, pos;
	int v[MAX][MAX], sol[MAX];
	unordered_map <int, int> umap;
	scanf("%d %d", &J, &R);
	for (int i = 0; i < R; i++){
		for (int j = 0; j < J; j++){
			scanf("%d", &v[i][j]);
				umap[j] += v[i][j];
		}
	}
	for (int i = 0; i < J; i++){
		sol[i] = umap[i];
		if(sol[i]>=maior){
			maior = sol[i];
			pos = i;
		}
	}
	cout << pos+1 << endl; 
	return 0;
}