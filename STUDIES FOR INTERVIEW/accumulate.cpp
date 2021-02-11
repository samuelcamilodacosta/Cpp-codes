#include <stdlib.h>
#include <bits/stdc++.h>
using namespace std;
int main(){
	setlocale(LC_ALL,"");
	
    int values[15] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    int acumulado = accumulate(values, values + 9, 1, [](int i, int j){return i * j;});
    cout << "acumulado:  " << acumulado << endl;
    return 0;
}
