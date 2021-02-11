#include <bits/stdc++.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"");
	int c, H, M, O;
	cin >> c;
	while(c!=0){
		cin >> H;
		cin >> M;
		cin >> O;
		cout << setfill('0') << setw(2) << H << ":" << setfill('0') << setw(2) << M << " - ";
		if(O==1){
			cout << "A porta abriu!" << endl;
		}else if(O==0){
			cout << "A porta fechou!" << endl;
		}
		c--;
	}	
	return 0;
}

