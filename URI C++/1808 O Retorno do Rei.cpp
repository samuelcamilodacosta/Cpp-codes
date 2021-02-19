#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	float media = 0;
	int div=0;
	cin >> s;
	int tam = s.length();
	for (int i = tam-1; i>=0 ; i--){
		if(s[i]=='1'){
			media+=1;
			div++;
		}else if(s[i]=='2'){
			media+=2;
			div++;
		}else if(s[i]=='3'){
			media+=3;
			div++;
		}else if(s[i]=='4'){
			media+=4;
			div++;
		}else if(s[i]=='5'){
			media+=5;
			div++;
		}else if(s[i]=='6'){
			media+=6;
			div++;
		}else if(s[i]=='7'){
			media+=7;
			div++;
		}else if(s[i]=='8'){
			media+=8;
			div++;
		}else if(s[i]=='9'){
			media+=9;
			div++;
		}else{
			media+=10;
			div++;
			i--;
		}
	}
	media = media/div;
	printf("%.2f\n", media);
	return 0;
}