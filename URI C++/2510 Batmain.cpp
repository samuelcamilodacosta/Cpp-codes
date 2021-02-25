#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	int x;
	cin >> x;
	while(x>0){
		cin >> s;
		if(s=="Batmain"){
			cout << "N" << endl;
		}else{
			cout << "Y" << endl;
		}
		x--;
	}
	return 0;
}