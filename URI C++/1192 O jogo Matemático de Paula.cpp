#include <bits/stdc++.h>
using namespace std;

int main(){
	int x, y, n, result;
	char c[1];
	cin >> n;
	while(n>0){
		result = 0;
		scanf("%d%c%d", &x, &c, &y);
		if(x==y){
			result = x*y;
		}else if(c[0]>='a' && c[0]<='z'){
			result = x+y;
		}else{
			result = y-x;
		}
		cout << result << endl;
		n--;
	}
	return 0;
}