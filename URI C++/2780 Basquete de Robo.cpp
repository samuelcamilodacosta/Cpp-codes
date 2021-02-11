#include <bits/stdc++.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"");
	int D;
	cin >> D;
	if(D>=0 && D<=2000){
		if(D>1400){
			cout << "3" << endl;
		}else if(D>800 && D<=1400){
			cout << "2" << endl;
		}else{
			cout << "1" << endl;
		}
	}	
	return 0;
}

