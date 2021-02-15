#include <bits/stdc++.h>
using namespace std;

int main(){
	long long int n, m, sum;
	while(scanf("%lld %lld", &n, &m)!=EOF){
		sum = 0;
		while(n>0){
			sum += (m%10);
			m = m/10;
			n--;
		}
		if(sum%3 == 0){
			cout << sum << " sim" << endl;
		}else{
			cout << sum << " nao" << endl;
		}
	}
}