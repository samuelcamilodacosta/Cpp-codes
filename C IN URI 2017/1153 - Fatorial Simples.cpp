#include <iostream>
#include <cstdlib>
int main(){
	int n, s=1;
	scanf("%d", &n);
	for(int i=0; i<n; i++){
	s=s*(n-i);
	}
	printf("%d\n", s);
	return 0;
}
