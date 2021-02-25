#include <bits/stdc++.h>
using namespace std;
int main(){
	string s;
	int x, y;
	cin >> s;
	do{
		cin >> x;
		vector<int> vet;
		for (int i = 0; i < x; i++){
			scanf("%d", &y);
			vet.push_back(y);
		}
		for (int i = 0; i < x; i++){
			cout << s[vet[i]-1];
		}
		cout << endl;
		vet.clear();
	}while(cin >> s);
	return 0;
}