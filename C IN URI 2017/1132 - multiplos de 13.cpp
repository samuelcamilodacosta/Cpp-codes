#include <iostream>
#include <cstdlib>
int main(){
	int x, y, s=0;
	scanf("%d", &x);
	scanf("%d", &y);
	if(x<y){
	for(int i=x; i<=y; i++){
		if(i%13!=0){
			s = s+i;
		}
	}
	printf("%d\n", s);
	}
	else if(x>y){
	for(int i=y; i<=x; i++){
		if(i%13!=0){
			s = s+i;
		}
	}
	printf("%d\n", s);
	}
	else{
		printf("0\n");
	}
	
	
	system("pause");
	return 0;
}
