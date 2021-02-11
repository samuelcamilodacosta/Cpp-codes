#include <stdio.h>
#include <stdlib.h>
int main(){
	int year, ano;
	int a, b, c, d, x;
	scanf("%d", &ano);
	ano = ano+1;
	while(1001<=ano<=9000){
	year = ano;
	a = year / 1000;
	year = year % 1000;
	b = year / 100;
	year = year % 100;
	c = year / 10;
	year = year % 10;
	d = year;
	if(a!=b && a!=c && a!=d){
		if(b!=a && b!=c && b!=d){
			if(c!=a && c!=b && c!=d){
				x = (a*1000)+(b*100)+(c*10)+d;
				printf("%d", x);
				break;
			}
		}
	}
	ano++;
	}
	return 0;
}
