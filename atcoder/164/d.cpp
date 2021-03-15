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

int main() {
  string s;
  cin >> s;
  int n = s.size();

  // nlogn以下じゃないと無理
  // 2019 = 1 * 3 * 673

  vl cumsum(n + 1, 0);  // 累積和
  FOR(i, 1, n + 1) {
    cumsum[i] = (10 * cumsum[i - 1] + (s[i - 1] - '0')) % 2019;
  }
  DEBUG_VEC(cumsum);

  ll ans = 0;
  for (int i = 0; i < n; i++) {
    int num = 0;
    for (int j = i; j < n; j++) {
      num = (num * 10) + (s[j] - '0');
      num %= 2019;
      if (num % 2019 == 0) ans++;
    }
  }

  cout << ans << endl;
}
