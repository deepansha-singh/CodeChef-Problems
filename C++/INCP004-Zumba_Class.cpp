#include <bits/stdc++.h>

using namespace std;

typedef long long ll;
typedef long double ld;
typedef vector<int> vi;
typedef pair<int, int> pi;

#define F first
#define S second
#define PB push_back
#define MP make_pair
#define REP(i, a, b) for(ll i = a; i <= b; i++)
#define SQ(a) (a)*(a)

// void solve() {
//   // solution
// }

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  // // test case input
  // ll t;
  // cin >> t;
  // while(t--) {
  //   solve();
  // }
  ll n;
  cin >> n;
  ll a[n];
  REP (i, 0, n - 1) {
    cin >> a[i];
  }
  sort(a, a + n);
  ll res = 0;
  ll j = 0;
  REP (i, 0, n - 1) {
    while ((j < n) && (a[j] - a[i]) <= 5) {
      j += 1;
      res = max(res, j - i);
    }
  }
  cout << res << "\n";
  return 0;
}