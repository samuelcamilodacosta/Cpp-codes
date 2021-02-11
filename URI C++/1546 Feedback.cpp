#include <bits/stdc++.h>
using namespace std;
void mensagemFeed(int x){
	if(x==1){
		cout << "Rolien" << endl;
	}if(x==2){
		cout << "Naej" << endl;
	}if(x==3){
		cout << "Elehcim" << endl;
	}if(x==4){
		cout << "Odranoel" << endl;
	}
}
int main(){
	setlocale(LC_ALL,"");
	int n, k, x;
	cin >> n;
	while(n>0){
		cin >> k;
		while(k>0){
			cin >> x;
			mensagemFeed(x);
			k--;
		}
		n--;
	}
	return 0;
}

