#include <bits/stdc++.h>
using namespace std;

vector<int> rotLeft(vector<int> a, int d) {
	int tam = a.size(), cont = 0, c=0;
	vector<int> b;
	if(d<tam){
		for(int i = d; c < tam; i++,c++){
			b.push_back(a[i]);
			if(i==(tam-1) && cont == 0){
				i = -1;
				cont++;
            }
        }
    }
    return b;
}

int main(){
	
	return 0;
}
