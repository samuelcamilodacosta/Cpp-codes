#include <bits/stdc++.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"");
	int x, mary, john, y;
	while(cin >> x !=0){
		if(x==0){
			return 0;
		}
		mary=0; john=0;
		while(x>0){
			cin >> y;
			if(y==0){
				mary++;
			}else{
				john++;
			}
			x--;
		}
		cout << "Mary won "<< mary <<" times and John won "<< john <<" times" << endl;
	}
}

