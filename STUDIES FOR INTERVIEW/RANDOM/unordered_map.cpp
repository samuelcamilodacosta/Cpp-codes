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

//About Unordered Maps

int main(){
	unordered_map<int, string> uom; //Declaring key, value 
	uom[23] = "Samuel"; //insert Value Samuel to key 23
	uom[25] = "Jackson"; //insert Value Jackson to key 25
	//second form to insert elements
	pair<int, string> p(12, "Where?");
	uom.insert(p);
	cout << uom[23] << endl; // find and print Value of key 23
	cout << "The size of Unordered Map: " << uom.size() << endl;
	cout << uom[27] << endl; // Declare value "" to key 27, because search and  find nothing and print ""
	cout << "The new size of Unordered Map: " << uom.size() << endl;
	unordered_map<int, string>::iterator it; //Create the Iterator
	//Show the values
	for (it=uom.begin(); it != uom.end(); it++)
		cout << it->first << " " << it->second << endl; //First key, Second Value
	uom.erase(27); // Deleting the pair of elements 
	uom.erase(12);
	uom.erase(25);
	if(uom.count(23)>0){ //.count(key) returns booleam value to you know if have or not value inserted him
		cout << "Key 23 have value! > " << uom.count(23) << endl;
	}else{
		cout << "Key 23 haven't value inserted him!" << endl;
	}
	//Show the values
	for (it=uom.begin(); it != uom.end(); it++)
		cout << it->first << " " << it->second << endl; //First key, Second Value
	uom.clear(); // cleaning the values of unordered map
	cout << "The new size of Unordered Map: " << uom.size() << endl;
	return 0;
}
