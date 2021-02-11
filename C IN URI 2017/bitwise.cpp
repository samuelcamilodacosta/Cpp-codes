#include <iostream>
#include <cstdlib>
using namespace std;
int main(){
	unsigned char *pt;
	int i, aux;
	short num = 0x18AF;
	pt = (unsigned char *) &num;
	for(i = sizeof(short)-1; i >= 0; i--){
		aux = *(pt+i);
		printf("%c", (aux & 0x80)? ’1’ : ’0’);
		printf("%c", (aux & 0x40)? ’1’ : ’0’);
		printf("%c", (aux & 0x20)? ’1’ : ’0’);
		printf("%c", (aux & 0x10)? ’1’ : ’0’);
		printf("%c", (aux & 0x08)? ’1’ : ’0’);
		printf("%c", (aux & 0x04)? ’1’ : ’0’);
		printf("%c", (aux & 0x02)? ’1’ : ’0’);
		printf("%c", (aux & 0x01)? ’1’ : ’0’);
	}
	printf("\n");
	
	return 0;
}
