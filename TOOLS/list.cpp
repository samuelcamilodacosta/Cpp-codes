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

//About Lists

int main(){
	list<int> list1{1, 3, 4, 2, 5}; //first method for declaration of the list
	list<int> list2; //second method ...
	list<int>::iterator it;
	//Adding elements
	list1.push_front(0); // adding element to front
	list1.pb(10); // adding element to end
	//Show List
	for (it = list1.begin(); it != list1.end(); it++)
		cout << *it << " ";
	cout << endl;
	//Deleting elements
	list1.pop_back(); //Removing element from the end
	list1.pop_front();// . . . . . . . . . . . .  front
	cout <<"Size of the list: " << list1.size() << endl; //list size
	list1.sort(); //sorting the list
	//show sorted list
	for (it = list1.begin(); it != list1.end(); it++)
		cout << *it << " ";
	cout << endl;
	list1.remove(4); //Removing element
	//Show list after remove element
	for (it = list1.begin(); it != list1.end(); it++)
		cout << *it << " ";
	cout << endl;
	list1.clear(); //clear list
	cout << "New size of the list: " << list1.size() << endl; // is 0.
	return 0;
}