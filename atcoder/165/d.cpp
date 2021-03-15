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
  ll a, b, n;

  cin >> a >> b >> n;

  // floor(ax/b) - a*floor(x/b) を最大化

  //   for (int x = 0; x <= n; x++) {
  //     cout << x << " : " << (a * x / b) << "-" << a * (x / b) << " = "
  //          << (a * x / b) - a * (x / b) << endl;
  //   }

  // A>B 周期A
  // A<B 周期B？
  // 単調増加である
  // BもしくはAを超えない最大の

  ll ans = 0;

  for (ll x = max(0LL, n - 100); x <= n; x++) {
    if (x > n) continue;
    ans = max(ans, (a * x / b) - a * (x / b));
  }

  for (ll x = max(0LL, b - 100); x <= b + 10; x++) {
    if (x > n) continue;
    ans = max(ans, (a * x / b) - a * (x / b));
  }

  for (ll x = max(0LL, a - 100); x <= a + 10; x++) {
    if (x > n) continue;
    ans = max(ans, (a * x / b) - a * (x / b));
  }

  cout << ans << endl;
}
