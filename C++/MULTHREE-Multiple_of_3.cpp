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
  ll k, d0, d1;
  cin >> k >> d0 >> d1;
  ll sum = d0 + d1;
  // k -= 2;
  // while (k--) {
  //   sum += (sum % 10);
  // }
  // // cout << sum;
  // if (sum % 3 == 0) {
  //   cout << "YES" << ln;
  // } else {
  //   cout << "NO" << ln;
  // }
  ll tot = 0;
  ll c_num = (k - 3)/4;
  ll c_sum = ((2 * sum) % 10) + ((4 * sum) % 10) + ((8 * sum) % 10) + ((6 * sum) % 10);
  ll leftover = (k - 3) - (c_num * 4);

  if (k == 2) {
    tot = sum;
  } else {
    tot = sum + (sum % 10) + (c_num * c_sum);
    int p = 2;
    forn(i, leftover) {
      tot += ((p * sum) % 10);
      p = (p * 2) % 10;
    }
  }

  if ((tot % 3) == 0) {
    cout << "YES" << ln;
  } else {
    cout << "NO" << ln;
  }
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