#include <bits/stdc++.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"");
	int n, m, x;
	set <int> figurinha;
	cin >> n;
	if(100>=n && n>=1){
		cin >> m;
		if(300>=m && m>=1){
			int i=m;
			while(i!=0){
				cin >> x;
					if(x>=1 && x<=n){
						figurinha.insert(x);
						i--;
					}else{
						return 0;
					}
			}
			cout << n-figurinha.size() << endl;
		}
		else{
			return 0;
		}
		
	}
	return 0;
}
