#include <bits/stdc++.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"");
	int n, i, tempo;
	inicio:
		tempo=0;
		cin >> n;
		if(n==0){
			return 0;
		}
		int t[n];	
		for(i=0; i<n; i++){
			cin >> t[i];
			tempo = tempo+10;
			if(i>0){
				if((t[i]-t[i-1])<10){
					tempo = tempo+(t[i]-t[i-1])-10;
				}
			}
		}
		cout << tempo << endl;
		goto inicio;
}

