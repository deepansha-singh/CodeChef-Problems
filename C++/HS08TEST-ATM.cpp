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
  // while(t--) {
  //   solve();
  // }
  int x;
  float y, withdraw;
  cin >> x >> y;
  if (x % 5 == 0) {
    withdraw = (x + 0.50);
    if (withdraw > y) {
      printf("%0.2f", y);
    } else {
      y -= withdraw;
      printf("%0.2f", y);
    }
  } else {
    printf("%0.2f", y);
  }
  return 0;
}