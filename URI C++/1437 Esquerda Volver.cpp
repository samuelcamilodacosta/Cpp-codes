#include <bits/stdc++.h>
using namespace std;

int main(){
	int n=1, sum;
	cin >> n;
	string s;
	while(n>0){
		sum = 0;
		cin >> s;
		for (int i = 0; i < s.size(); i++){
			if(s[i] == 'D'){
				sum++;
			}else{
				sum--;
			}
		}
		if(sum>0){
			if(sum%4 == 0) cout << "N" << endl;
			if(sum%4 == 1) cout << "L" << endl;
			if(sum%4 == 2) cout << "S" << endl;
			if(sum%4 == 3) cout << "O" << endl;	
		}else if(sum<0){
			if(sum%4 == 0) cout << "N" << endl;
			if(sum%4 == -1) cout << "O" << endl;
			if(sum%4 == -2) cout << "S" << endl;
			if(sum%4 == -3) cout << "L" << endl;
		}else{		
			cout << "N" << endl;
		}
		cin >> n;
	}
	return 0;
}