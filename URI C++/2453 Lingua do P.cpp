#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	getline(cin, s);
	int tam = s.length();
	for (int i = 0; i < tam; i++){
		if(s[i]!='p'){
			cout << s[i];
		}
		if(i>0){
			if(s[i]=='p' && s[i-1]=='p'){
			cout << s[i];
			s[i] = ' ';
			}
		}
	}
	cout << endl;
	return 0;
}