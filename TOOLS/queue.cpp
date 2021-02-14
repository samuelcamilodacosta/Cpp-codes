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
	queue<int> q; //Declaring of the queue
	q.push(1); //adding element to the queue
	q.push(2);
	q.push(3);
	//Show the element at front of queue with front()
	cout << q.front() << endl;
	//Show the element at the end of queue with back()
	cout << q.back() << endl;
	q.pop(); //removing the 1rst element from the queue
	cout << q.front() << endl;
	//check if queue is empty
	if(q.empty()){
		cout << "Queue is empty!" << endl;
	}else{
		cout << "Queue isn't empty!" << endl;
	}
	//getting the size of the queue
	cout << q.size() << endl;
	return 0;
}