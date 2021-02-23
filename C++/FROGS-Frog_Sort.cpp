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

int index(vi v, int k) {
  auto i = find(v.begin(), v.end(), k);
  if (i != v.end()) {
    int ind = i - v.begin();
    return ind;
  } else {
    return -1;
  }
}

void solve() {
  // solution
  ll n;
  cin >> n;
  ll hits = 0;
  vi w;
  ll temp;
  REP (i, 0, n - 1) {
    cin >> temp;
    w.PB(temp);
  }
  vi position(n);
  REP (i, 0, n - 1) {
    position[i] = i;
  }
  vi l;
  REP (i, 0, n - 1) {
    cin >> temp;
    l.PB(temp);
  }
  vi x(n);
  REP (i, 0, n - 1) {
    x[i] = w[i];
  }
  sort(x.begin(), x.end());

  REP (i, 1, n - 1) {
    int ind = index(w, x[i]);
    int p = position[index(w, x[i - 1])];
    int c = ind;
    while (c <= p) {
      c += l[ind];
      position[ind] = c;
      hits++;
    }
  }
  cout << hits << "\n";
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