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

ll sum(ll n) {
  ll s = 0;
  REP(i, 1, n) {
    s += i;
  }
  return s;
}

void solve() {
  // solution
  int d;
  ll n;
  cin >> d >> n;
  ll s = sum(n);
  REP(i, 1, d-1) {
    s = sum(s);
  }
  cout << s << "\n";
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  // test case input
  ll t;
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}