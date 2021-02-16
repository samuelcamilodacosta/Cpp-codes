#include <bits/stdc++.h>
using namespace std;
int titleToNumber(string A) {
    int p=0,sum=0;
    for(int i=A.size()-1;i>=0;i--){
        sum+=pow(26,p++)*(A[i]-'A'+1);
    }
    return sum;
}
int main(){
	setlocale(LC_ALL,"");
	int x;
	string A={"BB"};
	x = titleToNumber(A);
	cout << x << endl;
	return 0;
}

