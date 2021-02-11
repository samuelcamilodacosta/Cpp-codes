#include <bits/stdc++.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"");
	int L, R;
	while(cin >> L >> R){
		if(L==0 && R==0){
			break;
		}else{
			cout << L+R << endl;
		}
	}	
	return 0;
}

