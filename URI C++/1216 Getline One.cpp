#include <bits/stdc++.h>
using namespace std;

int main(){
	string s;
	double dist, media=0, cont=0;
	while(getline(cin, s)){
	    cin >> dist;
	    cont++;
	    media += dist;
		cin.ignore();
	}
	media = media/cont;
	printf("%.1lf\n", media);
	return 0;
}