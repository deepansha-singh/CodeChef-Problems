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
  char id;
  cin >> id;
  if (id == 'b' || id == 'B') {
    cout << "BattleShip\n";
    return;
  } 
  if (id == 'c' || id == 'C') {
    cout << "Cruiser\n";
    return;
  }
  if (id == 'd' || id == 'D') {
    cout << "Destroyer\n";
    return;
  }
  if (id == 'f' || id == 'F') {
    cout << "Frigate\n";
    return;
  }
}

int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
  // test case input
  // unordered_map <char, string> sc;
  // sc['b'] = "BattleShip";
  // sc['B'] = "BattleShip";
  // sc['c'] = "Cruiser";
  // sc[''] = "Cruiser";
  ll t;
  cin >> t;
  while(t--) {
    solve();
  }
  return 0;
}