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

struct interval {
  ll start;
  ll end;
};

bool compareInterval(interval i1, interval i2) {
  return (i1.start < i2.start);
}

// void merge_overlapping(interval a[], int n) {
//     sort(a, a + n, compareInterval);
//     int ind = 0;
//     forsn(i, 1, n) {
//       if (a[ind].end >= a[i].start) {
//         a[ind].end = max(a[ind].end, a[i].end);
//         a[ind].start = min(a[ind].start, a[i].start);
//       } else {
//         ind++;
//         a[ind] = a[i];
//       }  
//     }
// }


void solve() {
  ll n, k, f;
  ll ctime = 0;
  cin >> n >> k >> f;
  interval a[n];

  // ll s[n], e[n];
  forn(i, n) {
    cin >> a[i].start >> a[i].end;
  }
  sort(a, a + n, compareInterval);
  int ind = 0;
  forsn(i, 1, n) {
    if (a[ind].end >= a[i].start) {
      a[ind].end = max(a[ind].end, a[i].end);
      a[ind].start = min(a[ind].start, a[i].start);
    } else {
      ind++;
      a[ind] = a[i];
    }  
  }
// cout << "-------------------" << ln;
//   cout << "\n The Merged Intervals are: ";
//     for (int i = 0; i <= ind; i++)
//         cout << "[" << a[i].start << ", " << a[i].end << "] ";

//   cout << ln << "-------------------" << ln;
  ctime += (a[0].start);
  ctime += (f - a[ind].end);
  if (ctime >= k) {
    cout << "YES" << ln;
    return;
  }
  // merge_overlapping(a, n);
  // // cout << ctime;
  // ctime += (f - e[n - 1]);
  // if (ctime >= k) {
  //   cout << "YES" << ln;
  //   return;
  // }
  forn(i, ind) {
    if (a[i].end < a[i + 1].start) {
      // cout << e[i] << " " << s[i + 1] << ln;
      ctime += (a[i + 1].start - a[i].end);
    }
    if (ctime >= k) {
      cout << "YES" << ln;
      return;
    }
  }
  // // cout << f << " " << e[n - 1] << ln;
  cout << "NO" << ln;
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