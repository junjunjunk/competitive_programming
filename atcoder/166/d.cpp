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
#define MM << " " <<
int main() {
  ll x;
  cin >> x;

  ll a, b;

  while (true) {
    a == 0
  }

  for (ll bb = 0; b * b < 1000000000; b++) {
    for (ll a = 0; a * a <= (x + b * b); a++) {
      if (a * a * a * a * a - b * b * b * b * b == x) {
        cout << a MM b << endl;
        return 0;
      }
    }
  }
}
