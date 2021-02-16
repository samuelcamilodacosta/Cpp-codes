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
    vector <int> v {4, 1, 4, 4, 1, 5, 7};
    sort(v.begin(), v.end(), [](const int& a, const int& b){ return a > b;});
    vector<int>::iterator unicos = unique(v.begin(), v.end(), [](int a, int b){ return a==b;});  
    printVector(v);
}
