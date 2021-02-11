#include <bits/stdc++.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"");
	int L, C;
	cin >> L >> C;
	if(L>=1 && L<=1000)	{
		if(C>=1 && C<=1000){
			if((L+C)%2 == 0){
				cout << "1" << endl;
			}else{
				cout << "0" << endl;
			}
		}
	}
	return 0;
}

