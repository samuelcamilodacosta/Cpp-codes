#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL,"");
	int x, y;
	while(scanf("%d:%d", &x,&y)!=EOF){
		if(x<=9 && x>=5){
			if(x>=5 && x<7){
				printf("Atraso maximo: 0\n");
			}else if(x==7){
				printf("Atraso maximo: %d\n",y);
			}else if(x==8){
				printf("Atraso maximo: %d\n",(y+60));
			}else if(x==9){
				printf("Atraso maximo: %d\n",(y+120));			
			}
		}
	}
	return 0;
}

