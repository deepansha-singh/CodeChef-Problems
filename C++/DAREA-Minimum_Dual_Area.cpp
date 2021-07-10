#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>  
#include <complex>
#include <queue>
#include <set>
#include <unordered_set>
#include <list>
#include <chrono>
#include <random>
#include <iostream>
#include <algorithm>
#include <cmath>
#include <string>
#include <vector>
#include <map>
#include <unordered_map>
#include <stack>
#include <iomanip>
#include <fstream>

using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;
typedef pair<double,double> pdd;
typedef vector<ll> vl;
typedef vector<int> vi;
typedef vector<vector<int> > vvi;
typedef vector<vector<ll> > vvl;
typedef vector<vector<pll> > vvpll;
typedef vector<pll> vpll;
typedef vector<pii> vpii;

ll MOD = 998244353;
double eps = 1e-12;

#define forn(i,e) for(ll i = 0; i < e; i++)
#define forsn(i,s,e) for(ll i = s; i < e; i++)
#define rforn(i,s) for(ll i = s; i >= 0; i--)
#define rforsn(i,s,e) for(ll i = s; i >= e; i--)
#define ln "\n"
#define dbg(x) cout<<#x<<" = "<<x<<ln
#define mp make_pair
#define pb push_back
#define fi first
#define se second
#define INF 2e18
#define fast_cin() ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
#define all(x) (x).begin(), (x).end()
#define sz(x) ((ll)(x).size())


void solve() {
  int n;
  cin >> n;
  vpll x;
  vpll y;
  multiset<ll> X;
  multiset<ll> Y;
  int temp1, temp2;
  forn(i, n) {
    cin >> temp1 >> temp2;
    x.pb({temp1, temp2});
    y.pb({temp2, temp1});
    X.insert(temp1);
    Y.insert(temp2);
  }
  sort(x.begin(), x.end());
  sort(y.begin(), y.end());
  ll h1_max = 0, h1_min = LONG_MAX;
  ll h1 = 0, h2 = 0;
  ll ar = LONG_MAX;
  forn(i, n - 1) {
    h1_max = max(h1_max, x[i].se);
    h1_min = min(h1_min, x[i].se);
    h1 = h1_max - h1_min;
    auto it = Y.find(x[i].se);
    Y.erase(it);
    h2 = *(Y.rbegin()) - *(Y.begin());
    ll new_ar = (x[i].fi - x[0].fi) * h1 + (x[n - 1].fi - x[i + 1].fi) * h2;
    ar = min(ar, new_ar);
  }
  ll w1_max = 0, w1_min = LONG_MAX;
  ll w1 = 0, w2 = 0;
  forn(i, n - 1) {
    w1_max = max(w1_max, y[i].se);
    w1_min = min(w1_min, y[i].se);
    w1 = w1_max - w1_min;
    auto it = X.find(y[i].se);
    X.erase(it);
    w2 = *(X.rbegin()) - *(X.begin());
    ll new_ar = (y[i].fi - y[0].fi) * w1 + (y[n - 1].fi - y[i + 1].fi) * w2;
    ar = min(ar, new_ar);
  }
  if (ar == LONG_MAX) {
    ar = 0;
  }
  cout << ar << ln;
}

int main() {
  fast_cin();
  ll t;
  cin >> t;
  for(int it = 1; it <= t; it++) {
    solve();
  }
  return 0;
}