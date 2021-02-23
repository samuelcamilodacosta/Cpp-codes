#include <bits/stdc++.h>
using namespace std;

int main(){
	vector<int> vec;
	int x;
	for (int i = 0; i < 3; i++){
		cin >> x;
		vec.push_back(x);
	}
	sort(vec.begin(), vec.end());
	if(vec[0]<vec[1]+vec[2] && vec[1]<vec[0]+vec[2] && vec[2]<vec[1]+vec[0]){
		if((vec[2]*vec[2]) == ((vec[1]*vec[1])+(vec[0]*vec[0]))){
			cout << "r" << endl;
		}else if((vec[2]*vec[2]) < ((vec[1]*vec[1])+(vec[0]*vec[0]))){
			cout << "a" << endl;
		}else{
			cout << "o" << endl;
		}
	}else{
		cout << "n" << endl;
	}
	return 0;
}