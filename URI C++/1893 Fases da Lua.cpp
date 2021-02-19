#include <bits/stdc++.h>
using namespace std;

using namespace std;
int main(){
	int x, y, dif;
	cin >> x >> y;
	if(y>=0 && y<=2){
		cout << "nova" << endl;
	}else if(y>=3 && y<=96){
		dif = y - x;
		if(dif>0){
			cout << "crescente" << endl;
		}else{
			cout << "minguante" << endl;
		}
	}else{
		cout << "cheia" << endl;
	}
	return 0;
}