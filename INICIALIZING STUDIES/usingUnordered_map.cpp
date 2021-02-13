#include <bits/stdc++.h>
using namespace std;

#define st first
#define nd second
#define mp make_pair
#define pb push_back
#define cl(x, v) memset((x), (v), sizeof(x))

typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<int, pii> piii;
typedef pair<ll, ll> pll;
typedef pair<ll, pll> plll;
typedef vector<int> vi;
typedef vector<vi> vii;

int main(){
	unordered_map <string, int> map;  //key, value
	//insert
	pair<string, int> p("abc", 1);
	map.insert(p);
	map["def"] = 2;
	//find or acess
	cout << map["abc"] << endl;
	cout << map["def"] << endl;
	//cout << map.at("ghi) << endl;
	cout << "Size: " << map.size() << endl;
	cout << map["ghi"] << endl;
	cout << "Size: " << map.size() << endl;
	//check Presense
	if (map.count("ghi") > 0) { //map.count returns value boolean
		cout << "ghi is present." << endl;
	}else{
		cout << "ghi isn't present." << endl;
	}
	//erase
	map.erase("ghi");
	cout << "Size: " << map.size() << endl;
	if (map.count("ghi") > 0) { //map.count returns value boolean
		cout << "ghi is present." << endl;
	}else{
		cout << "ghi isn't present." << endl;
	}
	return 0;
}