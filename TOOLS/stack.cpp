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
	stack<int> s; //Declaring a stack
	s.push(1); //Adding element to the stack
	s.pop(); //Removing the element from stack
	//pop() just remove the last element that was add in the stack
	s.push(3); //add 3
	s.push(2); //add 2
	s.push(1); //add 1
	cout << "Top element of stack: "<< s.top() << endl;
	s.pop(); //removing top element
	cout << "New top element of stack: " << s.top() << endl;
	//Check if stack is empty
	if(s.empty()){
		cout << "Stack is empty!" << endl;
	}else{
		cout << "Stack isn't empty!" << endl;
	}
	//Getting the size of stack with size()
	cout << s.size() << endl;
	return 0;
}