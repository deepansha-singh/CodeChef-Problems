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
  // test case input
  // ll t;
  // cin >> t;
  // while(t--) {
  //   solve();
  // }
  ll n;
  cin >> n;
  ll s, t;
  ll cum_s = 0, cum_t = 0;
  // ll l1, l2;
  unordered_map<int, ll> lead;
  lead[1] = 0;
  lead[2] = 0;
  REP(i, 0, n-1) {
    cin >> s >> t;
    cum_s += s;
    cum_t += t;
    if ((cum_s > cum_t) && (cum_s - cum_t > lead[1])) {
      lead[1] = cum_s - cum_t;
    } else if ((cum_t > cum_s) && (cum_t - cum_s > lead[2])) {
      lead[2] = cum_t - cum_s;
    }
  }
  if (lead[1] > lead[2]) {
    cout << 1 << " " << lead[1];
  } else {
    cout << 2 << " " << lead[2];
  }
  return 0;
}