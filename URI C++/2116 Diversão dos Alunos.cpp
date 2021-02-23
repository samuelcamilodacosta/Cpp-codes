#include <bits/stdc++.h>
using namespace std;

int primo(int num){
	int ans=0;
	for (int i = 2; i <= num/2; i++){
		if(num%i == 0){
			ans++;
			break;
		}
	}
	return ans;
}

int main(){
	int x, y, ans, primox, primoy;
	cin >> x >> y;
	ans = 1;
	while(ans>0){
		ans = primo(x);
		if(ans == 0){
			primox = x;
			break;
		}else{
			x--;
		}
	}
	ans = 1;
	while(ans>0){
		ans = primo(y);
		if(ans == 0){
			primoy = y;
			break;
		}else{
			y--;
		}
	}
	cout << primox*primoy << endl;
	return 0;
}