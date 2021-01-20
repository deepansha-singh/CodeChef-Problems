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

bool is_prime(ll n) {
  if (n <= 1) {
    return false;
  } else if (n == 2 || n == 3 || n == 5 || n == 7) {
    return true;
  } else if (n % 3 == 0 || n % 2 == 0) {
    return false;
  } else {
    ll r;
    r = 5;
    while (r * r <= n) {
      if (n % r == 0) {
        return false;
      }
      r += 2;
      if (n % r == 0) {
        return false;
      }
      r += 4;
    }
    return true; 
  }
  }

void solve() {
  // solution
  ll n;
  cin >> n;
  if (is_prime(n)) {
    cout << "yes\n";
    return;
  }
  cout << "no\n";
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