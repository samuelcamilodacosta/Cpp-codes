#include <bits/stdc++.h>
using namespace std;

int main(){
	int n, i, s;
	while(~scanf("%d", &n)){
		s=0;
		for(i=1; i<n;){
			s = s+1;
			i = i+i;
		}
	printf("%d\n", s);
	}
	return 0;
}
