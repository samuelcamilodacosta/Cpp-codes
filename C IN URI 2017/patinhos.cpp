#include <bits/stdc++.h>
using namespace std;

unsigned long long n;

int main () {
  while (cin >> n) {
    if (n == -1) break;
    if (n > 0) n--;
    cout << n << endl;
  }
  return 0;
}
