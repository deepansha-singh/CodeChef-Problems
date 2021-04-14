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

void solve() {
  // solution
  ll n, k;
  cin >> n >> k;
  ll a[k];
  pREP (i, 0, k - 1) {
    cin >> a[i];
  }
  while (n--) {
    string s;
    cin >> s;
    ll score = 0;
    pREP (i, 0, k - 1) {
      if (s[i] == '1') {
        score += a[i];
      }
    }
    cout << score << "\n";
  }
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