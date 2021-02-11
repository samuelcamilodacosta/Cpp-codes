#include <bits/stdc++.h>
using namespace std;

int main(){	
    int n, m, troco;
    do{
        troco=0;
        cin >> n >> m;
        troco = m-n;
        if(m==0 && n==0){
            break;
        }
        if(troco==200 || troco==150 || troco==120 || troco==110 || troco==105 || troco==102 || troco==100 || troco==70 || troco==60 || troco==55 || troco==52 || troco==40 || troco==30 || troco==25 || troco==22 || troco==20 || troco==15 || troco==12 || troco==10 || troco==7 || troco==4){
            cout << "possible" << endl;
        }else{
            cout << "impossible" << endl;
        }
    }while(m!=0 && n!=0);
	return 0;
}
