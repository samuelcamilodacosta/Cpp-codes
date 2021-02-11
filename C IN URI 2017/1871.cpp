#include <bits/stdc++.h>
using namespace std;
int main(){
	while(true){
		int x, y, s, tamanho, j=0;
		char soma[20], vet[20];
		scanf("%d%d", &x,&y);
		if(x == 0 && y == 0){ break;}
		s = x + y;
		sprintf(soma, "%i", s);
		tamanho = strlen(soma);
		for(int i=0; i<=tamanho; i++){
			if(soma[i] != '0'){
				vet[j] = soma[i];
				j++;
			}
		}
		cout << vet << endl;
	}
	
	return 0;
}
