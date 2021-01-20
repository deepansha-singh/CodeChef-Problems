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
  int n;
  cin >> n;
  int a[n];
  // unordered_map <string, int> weapon;
  // weapon["odd"] = 0;
  // weapon["even"] = 0;
  int odd = 0, even = 0;
  REP(i, 0, n - 1) {
    cin >> a[i];
    if (a[i] & 1) {
      odd += 1;
    } else {
      even += 1;
    }
  }
  if (even > odd) {
    cout << "READY FOR BATTLE\n";
    // return;
  } else {
    cout << "NOT READY\n";
  }
  return 0;
}