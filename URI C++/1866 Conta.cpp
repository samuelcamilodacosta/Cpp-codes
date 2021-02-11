#include <bits/stdc++.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"");
	int n, x, s;
	cin >> x;
	while(x!=0){
		s=0;
		cin >> n;
		if(1<=n && n<=1000){
			if(n%2==0){
			 s = 0;	
			}else{
				s = 1;
			}
			cout << s << endl;
		}
		x--;
	}
	return 0;
}

