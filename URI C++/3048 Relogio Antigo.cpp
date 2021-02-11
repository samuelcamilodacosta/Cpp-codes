#include <bits/stdc++.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"");
	int anghr, angmin, hr, min;
	while(cin >> anghr >> angmin){
		hr = (anghr*12)/360;
		min = (angmin*60)/360;
		cout << setfill('0') <<setw(2) << hr << ":" << setfill('0') << setw(2) << min << endl; 
	} 	
	return 0;
}

