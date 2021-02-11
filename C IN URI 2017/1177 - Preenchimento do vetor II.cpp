#include <bits/stdc++.h>
using namespace std;
int main(){
	int t;
	scanf("%d", &t);
	for(int i=0; i<1000;){
		for(int j=0; j<t; j++){
		if(i==1000){ break;}	
		cout << "N[" << i << "] = " << j << endl;
		i++;
		}
	}
	return 0;
}
