#include <bits/stdc++.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"");
	int i, pulo, numcano, lose=0, absoluto;
	cin >> pulo;
	if(pulo>=1 && pulo<=5){
		cin >> numcano;
		int n[numcano];
		if(numcano>=2 && numcano<=100){
			for(i=0; i<numcano; i++){
				cin >> n[i];
				if(n[i]>10 || n[i]<0){
					return 0;
				}
				if(i>=1){
					absoluto=n[i-1]-n[i];
					absoluto = abs(absoluto);
					if(absoluto>pulo){
						lose++;
					}
				}
			}
			if(lose==0){
				cout << "YOU WIN" << endl;
			}else{
				cout << "GAME OVER" << endl;
			}
		}
	}
	return 0;
}

