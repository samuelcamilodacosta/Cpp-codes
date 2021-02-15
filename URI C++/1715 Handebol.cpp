#include <bits/stdc++.h>
using namespace std;

int main(){
	int N, M, cont=0;
	scanf("%d %d", &N, &M);
	int matriz[N][M], jogador[N];
	for (int i = 0; i < N; i++){
		jogador[i] = 0;
		for (int j = 0; j < M; j++){
			scanf("%d", &matriz[i][j]);
			if(matriz[i][j]>0){
				jogador[i]++;
			}
		}
	}
	for (int i = 0; i < N ; i++){
		if(jogador[i] == M){
			cont++;
		}
	}
	cout << cont << endl;
	return 0;
}