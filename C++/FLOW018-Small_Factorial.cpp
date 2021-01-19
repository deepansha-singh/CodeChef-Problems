#include <bits/stdc++.h>
#include <boost/multiprecision/cpp_int.hpp>

using namespace boost::multiprecision;
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

void solve() {
  // solution
  int n;
  cpp_int fact = 1;
  cin >> n;
  REP(i, 2, n) {
    fact *= i;
  }
  cout << fact << "\n";
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