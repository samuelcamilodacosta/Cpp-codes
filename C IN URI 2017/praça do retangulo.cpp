#include <bits/stdc++.h>
using namespace std;
 
#define st first
#define nd second
#define mp make_pair
#define pb push_back
#define cl(x, v) memset((x), (v), sizeof(x))
#define db(x) cerr << #x << " == " << x << endl
#define dbs(x) cerr << x << endl
#define _ << ", " <<
 
typedef long long ll;
typedef long double ld;
typedef pair<int, int> pii;
typedef pair<int, pii> piii;
typedef pair<pii, pii> pp;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<vi> vii;
 
const int INF = 0x3f3f3f3f, MOD = 1e9+7, EPS = 1e-6, N = 3e3+10;
 
long int n, a, b, m[N][N], ans;
vector <pii> pt, py;
map <pii, int> x, y;
 
int main () {
	do{
    scanf("%d", &n);
	}while(n>3000 && n<1);
	// pt = pts ordered by x,
    // py = pts ordered by y
    for (int i = 0; i < n; i++) scanf("%d%d", &a, &b),
                                pt.pb(mp(a,b)),
                                py.pb(mp(-b,a));
 
    // sort by x and by negative y (for visual simplicity),
    // then adjust back py[i] (-b,a) > (a,b)
    sort(pt.begin(), pt.end());
    sort(py.begin(), py.end());
    for (int i = 0; i < n; i++) swap(py[i].st, py[i].nd),
                                py[i].nd = -py[i].nd;
 
    // writing the coordinates into the map
    for (int i = 0; i < n; i++) x[pt[i]] = i+1,
                                y[py[i]] = i+1;
 
    // drawing point inside the matrix
    for (int i = 0; i < n; i++) m[x[pt[i]]][y[pt[i]]]++;
 
    // prefix sum
    for (int i = 1; i < N; i++) for (int j = 1; j < N; j++)
        m[i][j] += m[i-1][j] + m[i][j-1] - m[i-1][j-1];
 
    // checking if another point between every 2 pts
    for (int i = 0; i < n; i++) for (int j = i+1; j < n; j++) {
        pii u = pt[i];
        pii v = pt[j];
        int a = max(x[u], x[v]);
        int b = max(y[u], y[v]);
        int da = abs(x[u]-x[v]) + 1;
        int db = abs(y[u]-y[v]) + 1;
        if (m[a][b] - m[a-da][b] - m[a][b-db] + m[a-da][b-db] == 2) ans++;
    }
    printf("%d\n", ans);
    return 0;
}
