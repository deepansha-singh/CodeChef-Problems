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
#define REP(i, a, b) for(ll i = a; i < b; i++)
#define SQ(a) (a)*(a)

// void solve() {
//   // solution
// }

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  // test case input
  // ll t;
  // while(t--) {
  //   solve();
  // }
  ll n, k;
  ll t;
  ll count = 0;
  cin >> n >> k;
  REP(i, 0, n) {
    cin >> t;
    if (t % k == 0) {
      count += 1;
    }
  }
  cout << count;
  return 0;
}