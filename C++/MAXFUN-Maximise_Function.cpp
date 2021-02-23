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

// ll requiredSum (ll a1, ll a2, ll a3) {
//   return (abs(a1 - a2) + abs(a2 - a3) + abs(a3 - a1));
// }

void solve() {
  // solution
  ll n;
  cin >> n;
  ll a[n];
  REP (i, 0, n - 1) {
    cin >> a[i];
  }
  ll max = 0;
  sort(a, a + n);
//   REP (i, 0, n - 2) {
//     ll l = i + 1;
//     ll r  = n - 1;
//     while (l < r) {
//       cur = (abs(a[i] - a[l]) + abs(a[l] - a[r]) + abs(a[r] - a[i]));
//       if (cur > max) {
//         max = cur;
//       }
//       l++;
//       r--;
//     }
//   }
  cout << (abs(a[0] - a[n - 1]) + abs(a[n - 1] - a[n - 2]) + abs(a[n - 2] - a[0])) << "\n";
  
//   cout << max << "\n";
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  // test case input
  int t;
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}