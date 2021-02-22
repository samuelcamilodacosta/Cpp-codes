#include <bits/stdc++.h>
using namespace std;

int main(){
	int R, pontosM, pontosL, pos1, pos2;
	while(true){
		pontosM = 0; pontosL = 0; pos1 = -1; pos2 = -1;
		scanf("%d", &R);
		if(R==0) return 0;
		int vet[2][R];
		for (int i = 0; i < 2; i++){
			for (int j = 0; j < R; j++){
				scanf("%d", &vet[i][j]);
			}
		}
		for (int i = 0; i < R; i++){
			pontosM += vet[0][i];
			if(i >= 2 && pos1==-1){
				if(vet[0][i]==vet[0][i-1] && vet[0][i]==vet[0][i-2]){
					pos1 = i;
				}
			}
		}
		for (int i = 0; i < R; i++){
			pontosL += vet[1][i];
			if(i >= 2 && pos2 == -1){
				if(vet[1][i]==vet[1][i-1] && vet[1][i]==vet[1][i-2]){
					pos2 = i;
				}
			}
		}
		if(pos1!=-1){
			if(pos2!=-1){
				if(pos1<pos2) pontosM += 30;
				else if(pos1>pos2) pontosL += 30;
			}else pontosM += 30;
		}else{
			if(pos2!=-1) pontosL += 30;
		}
		if(pontosM > pontosL) cout << "M" << endl;
		if(pontosM < pontosL) cout << "L" << endl;
		if(pontosM == pontosL) cout << "T" << endl;
	}	
}