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
  ll p;
  cin >> p;
  ll count = 0;
  while(p) {
    int j = 1, k = 1;
    while(k) {
      if (j > 11) {
        j++;
        break;
      }
      k = p / pow(2, j);
      j++;
    }
    j -= 2;
    p = p - pow(2, j);
    count++;
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