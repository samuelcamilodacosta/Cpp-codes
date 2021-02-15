#include <bits/stdc++.h>
using namespace std;

int main(){
	int N, QT, S, menor, num, temp, i;
	scanf("%d", &N);
	while(N>0){
		menor = INT_MAX; temp = 0; 
		scanf("%d %d", &QT, &S);
		int vet[QT];
		for(i = 0; i < QT; i++){
			scanf("%d", &vet[i]);
			num = vet[i]-S;
			num = abs(num);
			if(num<menor){
				menor = num;
				temp = i;
			}
		}
		cout << temp+1 << endl;
		N--;
	}
	return 0;
}