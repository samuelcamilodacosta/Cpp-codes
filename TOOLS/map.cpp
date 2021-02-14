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

// About Map

int main(){
	//1rst mode to declaring map
	map<int, string> m; //Key, value
	map<int, string> m1 = {{25, "Samuel"}};
	//another mode to insert values on map;
	m[25] = "Samuel";
	cout << m[25] << endl;
	//insert pair of values on map
	m.insert(pair<int, string>(26, "Rock and Roll"));
	cout << m[26] << endl;
	map<int, string>::iterator it;
	for(it = m.begin(); it != m.end(); it++)
		cout << "Key: " << it->first << " Value: " << it->second << endl;
	//Checking if map is empty or no
	if(m.empty()){
		cout << "Map is empty!" << endl;
	}else{
		cout << "Map isn't empty!" << endl;
	}
	//Printing the size of map, return the number of pair values on map
	cout << "Size of the map: " << m.size() << endl;
	//Clear the map
	m.clear();
	cout << "New size of the map: " << m.size() << endl; // is 0.
	
	return 0;
}