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
  // ll duration = 180;
  int n, p;
  cin >> n >> p;
  ll duration = 180 - p;
  int count = 0;
  int p_id = 1;
  int reqd;
  while (true) {
    reqd = p_id * 9;
    // cout << reqd << "\n";
    if ((duration - reqd) >= 0 && p_id <= n) {
      count += 1;
    } else {
      break;
    }
    p_id += 1;
    // cout << p_id << "\n";
    duration -= reqd;
  }
  cout << count;
  return 0;
}