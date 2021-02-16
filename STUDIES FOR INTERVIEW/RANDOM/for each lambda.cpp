#include <bits/stdc++.h>
using namespace std;

void printVector(vector<int> v){
    for_each(v.begin(), v.end(), [](int i) {
		cout << i << endl; 
		});
    cout << endl;
}
int main(){	
	setlocale(LC_ALL,"");
    vector <int> v {6,1,4,3,4,1,5,7};
    cout << "Original:" << endl;
    printVector(v);
    cout << "maior que 3: " << endl;
    vector<int>::iterator result = find_if(v.begin(), v.end(), [](int i){ return i>3;});    
    cout << "primeiro maior que 3: " << *result << endl;
    return 0;
}
