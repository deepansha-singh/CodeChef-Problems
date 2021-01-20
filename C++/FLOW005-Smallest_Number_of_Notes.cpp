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

void solve() {
  // solution
  int n;
  cin >> n;
  int count = 0;
  int denom[] = {100, 50, 10, 5, 2, 1};
  REP(i, 0, 5) {
    count += n / denom[i];
    n %= denom[i];
  }
  cout << count << "\n";
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