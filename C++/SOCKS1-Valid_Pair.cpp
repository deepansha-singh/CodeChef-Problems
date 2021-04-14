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
#define pREP(i, a, b) for(ll i = a; i <= b; i++)
#define nREP(i, a, b) for(ll i = a; i >= b; i--)

#define SQ(a) (a)*(a)
#define MID(left, right) (left + (right - left) / 2)

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
  int a, b, c;
  cin >> a >> b >> c;
  if ((a == b) || (a == c)) {
    cout << "YES";
  } else if (b == c) {
    cout << "YES";
  } else {
    cout << "NO";
  }
  return 0;
}