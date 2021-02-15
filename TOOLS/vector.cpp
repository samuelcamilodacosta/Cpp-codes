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

//About Vectores

int main(){
	//Start an int vector
	vi v1{1, 2, 3};
	//Start a char vector
	vector<char> v2{'a','b','c'};
	//Start an empty vector and after add values or no
	vi v3;
	// Capacity() return the total capacity of the vector
	cout << "The capacity of v1 is: " << v1.capacity() << endl;
	cout << "The capacity of v2 is: " << v2.capacity() << endl;
	cout << "THe capacity of v3 is: " << v3.capacity() << endl;
	//Size() return the total size of the vector
	cout << "The size of v1 is: " << v1.size() << endl;
	cout << "The size of v2 is: " << v2.size() << endl;
	cout << "The size of v3 is: " << v3.size() << endl;
	//printing the vector
	for (int i = 0; i < v1.size(); i++)
		cout << v1[i] << " ";
	cout << endl;
	v1.pb(5); //Adding element in the end of vector
	//printing the vector after adding element 
	for (int i = 0; i < v1.size(); i++)
		cout << v1[i] << " ";
	cout << endl;
	//Adding element at a specific index insert(iterator, data)
	vector<int>::iterator it = v1.begin(); //Initializing Iterator
	v1.insert(it, 2);
	for (int i = 0; i < v1.size(); i++)
		cout << v1[i] << " ";
	cout << endl;
	//pop_back() removing element from the back of the vector
	v1.pop_back();
	for (int i = 0; i < v1.size(); i++)
		cout << v1[i] << " ";
	cout << endl;
	sort(vec.begin(), vec.end()); // sorting elementos of the vector
	//at(index) getting the element at index
	cout << "The element at index 1 is: " << v1.at(1) << endl;
	//back() return the last element of the vector
	cout <<"The last element on v1 is: " << v1.back() << endl;
	//return the first element of the vector
	cout << "The first element of the vector: " << v1.front() << endl;
	//v1.pop() delete element of the vector;
	v1.clear(); //Cleaning vector v1
	cout << "New size of the vector: " << v1.size() << endl; // is 0.
	return 0;
}
