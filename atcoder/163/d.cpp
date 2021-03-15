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

#include <iostream>
using namespace std;

ll sum(ll l, ll r) { return (l + r) * (r - l + 1) / 2; }

int main() {
  ll n, k;
  cin >> n >> k;
  ll MOD = 1000000000 + 7;
  // n+1
  // k,k+1 ... n-1,n
  ll ans = 0;

  for (int i = k; i <= n + 1; ++i) {
    ll l, r;
    l = sum(0, i - 1);
    r = sum(n - (i - 1), n);
    ans = (ans + (r - l + 1)) % MOD;
  }

  cout << ans << endl;
}
