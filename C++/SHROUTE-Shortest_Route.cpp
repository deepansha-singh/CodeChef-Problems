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

// ll left_dist(ll a[], ll n, ll b) {
//   rforsn (i, b - 2, 0) {
//     if (a[i] == 1) {
//       return (b - i - 1);
//     }
//   }
//   return -1;
// }

// ll right_dist(ll a[], ll n, ll b) {
//   forsn(i, b, n) {
//     if (a[i] == 2) {
//       return (i - b + 1);
//     }
//   }
//   return -1;
// }

#define maxn 3E5+5;

void solve() {
  ll n, m;
  cin >> n >> m;
  ll a[n];
  forn(i, n) {
    cin >> a[i];
  }
  ll b[m];
  forn(i, m) {
    cin >> b[i];
  }
  ll i, j;
  // ll c[m] = {-1};
  ll left = -1;
  ll right = -1;

  ll maxi = maxn;
  ll temp[n];
  
  forn(i, n) {
    if (i == 0) {
      temp[i] = 0;
    } else if(a[i] != 0) {
      temp[i] = 0;
    } else {
      temp[i] = maxi;
    }
  }

  forn(i, n) {
    if (a[i] == 1) {
      right = i;
    }
    if (right != -1) {
      if (a[i] == 0) {
        temp[i] = min(temp[i], i - right);
      }
    }
  }

  rforn(i, n - 1) {
    if (a[i] == 2) {
      left = i;
    }
    if (left != -1) {
      if (a[i] == 0) {
        temp[i] = min(temp[i], left - i);
      }
    }
  }

  forn(i, m) {
    j = b[i] - 1;
    if (temp[j] != maxi) {
      cout << temp[j] << " ";
    } else {
      cout << -1 << " ";
    }
  }
  // forn(i, m) {
  //   if (b[i] == 1) {
  //     cout << "0 ";
  //     continue;
  //   }
  //   ll left = -1;
  //   ll right = -1;
  //   rforsn (j, b[i] - 2, 0) {
  //     if (a[j] == 1) {
  //       left = (b[i] - j - 1);
  //     }
  //   }
  //   // ll left = left_dist(a, n, b[i]);
  //   // ll right = right_dist(a, n, b[i]);
    
  //   forsn(j, b[i], n) {
  //     if (a[j] == 2) {
  //       right = (j - b[i] + 1);
  //     }
  //   }

  //   if ((left == -1) && (right == -1)) {
  //     cout << "-1 ";
  //   } else if ((left == -1) && (right != -1)) {
  //     cout << right << " ";
  //   } else if ((left != -1) && (right == -1)) {
  //     cout << left << " ";
  //   } else {
  //     cout << min(left, right) << " ";
  //   }
  //   // ll dist = min(, );
  //   // if (dist == 0) {
  //   //   cout << "-1 ";
  //   // } else {
  //   //   cout << dist << " ";
  //   // }
  // }
  cout << ln;
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