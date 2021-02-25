#include <bits/stdc++.h>
using namespace std;

int main(){
	string T;
	getline(cin, T);
	int tam = T.length();
	if(tam<141){
		cout << "TWEET" << endl;
	}else{
		cout << "MUTE" << endl;
	}
	return 0;
}