#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;

#define REP(i, n) for (int i = 0; i < (int)(n); i++)
#define FOR(i, a, b) for (int i = (int)(a); i < (int)(b); i++)
#define FORR(i, a, b) for (int i = (int)(b)-1; i >= (int)(a); i--)

#define DEBUG(x) cout << #x << ": " << (x) << endl
#define DEBUG_VEC(v)                               \
  cerr << #v << ": ";                              \
  REP(__i, (v).size()) cerr << ((v)[__i]) << ", "; \
  cerr << endl
#define PRINT(x) cout << x << endl
#define all(x) x.begin(), x.end()

int main() {
  int X, Y, A, B, C;
  cin >> X >> Y >> A >> B >> C;

  vector<pair<ll, char>> pqr;
  REP(i, A + B + C) {
    char type;
    if (i < A)
      type = 'A';
    else if (i < A + B)
      type = 'B';
    else
      type = 'C';
    ll tmp;
    cin >> tmp;
    pqr.emplace_back(tmp, type);
  }

  sort(pqr.rbegin(), pqr.rend());

  int XY = X + Y;
  ll ans = 0;
  for (int i = 0; i < A + B + C; i++) {
    ll val = pqr[i].first;
    char type = pqr[i].second;

    if (XY == 0) break;

    if (type == 'A') {
      if (X == 0) continue;
      X--;
      XY--;
    } else if (type == 'B') {
      if (Y == 0) continue;
      Y--;
      XY--;
    } else {
      XY--;
    }

    ans += val;
  }

  cout << ans << endl;
}
