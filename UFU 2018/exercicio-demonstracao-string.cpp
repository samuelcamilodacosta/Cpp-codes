#include <iostream>
#include <cstdlib>
#include <cstring>
int main(){
	char *msg;
	msg = "Ola, como vai?";
	printf("%s\n", msg);
	for(int i=0; i < strlen(msg); i++){
		printf("%c", *(msg+i));}
	printf("\n");
	system("pause");
	return 0;
}
