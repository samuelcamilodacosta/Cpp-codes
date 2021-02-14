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

// About Set

int main(){
	set<int> s; //Declaration of set
	s.insert(5); //Inserting element in set
	s.insert(3);
	s.insert(2);
	s.insert(8);
	set<int>:: iterator it; //Creating Iterator it
	//Show elements in set, look carefully  at values
	for (it=s.begin(); it != s.end(); it++)
		cout << *it << " ";
	cout << endl;
	s.insert(5); //Set doesn't accept repeated elements
	//Show elements again
	for (it=s.begin(); it != s.end(); it++)
		cout << *it << " ";
	cout << endl;
	cout << "The size of the set is: " << s.size() << endl; //size() return the number of elements in the set
	s.erase(3); //removing element from a set
	for (it=s.begin(); it != s.end(); it++)  //show elements
		cout << *it << " ";
	cout << endl;
	if(s.empty()){ //s.empty returns a boolean value to say if set is empty or no 
		cout << "Set is empty!" << endl;
	}else{
		cout << "Set isn't empty!" << endl;
	}
	s.clear();
	cout << "New size of the set: " << s.size() << endl; // is 0.
	return 0;
}