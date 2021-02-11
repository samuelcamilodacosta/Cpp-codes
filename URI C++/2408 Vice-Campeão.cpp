#include <bits/stdc++.h>
using namespace std;

int main(){
	setlocale(LC_ALL,"");
	list <int> vetor;
	int i=0, x;
	for(i=0; i<3; i++){
		cin >> x;
		vetor.push_front(x);
	}
	vetor.sort();
	vetor.pop_front();
	cout << vetor.front() << endl;
	return 0;
}

