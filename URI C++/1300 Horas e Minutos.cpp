#include <bits/stdc++.h>
using namespace std;

int main(){
	int A;
	while(scanf("%d", &A)!= EOF){
		if(A==0){
			cout << "Y" << endl;
		}else if(A%6==0){
			cout << "Y" << endl;
		}else{
			cout << "N" << endl;
		}
	}
	return 0;
}