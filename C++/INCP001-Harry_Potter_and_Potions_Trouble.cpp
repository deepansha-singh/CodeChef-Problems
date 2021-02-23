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
  ll n;
  cin >> n;
  // ll a[n];
  int temp;
  set<int> s;
  REP (i, 0, n - 1) {
    cin >> temp;
    s.insert(temp);
  }
  ll a[s.size()];
  vector<int> v(s.begin(), s.end());
  sort(v.begin(), v.end()); 
  // sort();
  REP(i, 0, v.size() - 1) {
    cout << v.at(i) << " ";
  }
  cout << "\n";
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