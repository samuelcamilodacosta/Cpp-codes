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

int solve(vector<int> &A) {
    unordered_map <int, int> map;
    for(int i = 0; i<A.size(); i++){
        map[A[i]]++;
    }
    for(int i = 0; i<A.size(); i++){
        if(map[A[i]] > 1) return A[i];
    }
    return -1;
}

int main(){
	vi A;
	int x;
	for(int i = 0; i < 10; i++){
		cin >> x;
		A.pb(x);
	}
	cout << "O primeiro elemento vetorial que encontra-se repetido no vetor é: " << solve(A) << endl;
}