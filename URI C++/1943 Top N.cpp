#include <bits/stdc++.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"");
	int K;
	cin >> K;
	if(K==1){
		cout << "Top 1" << endl;
	}else if(K>1 && K<=3){
		cout << "Top 3" << endl;
	}else if(K>3 && K<=5){
		cout << "Top 5" << endl;
	}else if(K>5 && K<=10){
		cout << "Top 10" << endl;
	}else if(K>10 && K<=25){
		cout << "Top 25" << endl;
	}else if(K>25 && K<=50){
		cout << "Top 50" << endl;
	}else{
		cout << "Top 100" << endl;
	}
	return 0;
}

