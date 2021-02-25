#include <bits/stdc++.h>
using namespace std;

int main(){
	string L;
	getline(cin, L);
	int tam = L.length();
	if(tam <= 80){
		cout << "YES" << endl; 
	}else{
		cout << "NO" << endl;
	}
	return 0;
}