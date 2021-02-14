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

//Very simple implementation with pair of values

int main(){
	pair<int, string> p; //declaring a pair of values
	//making a pair
	p = make_pair(23, "Samuel");
	//acessing the pair of values
	cout << p.st << endl;
	cout << p.nd << endl;
	return 0;
}