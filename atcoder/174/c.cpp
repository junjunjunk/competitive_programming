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
#define DEBUG_VEC(v)          \
  cerr << #v << ": ";         \
  REP(__i, (v).size())        \
  cerr << ((v)[__i]) << ", "; \
  cerr << endl
#define PRINT(x) cout << x << endl
#define all(x) x.begin(), x.end()
#define MM << " " <<
int main() {
  int K;
  cin >> K;
  int c = 7;
  int ans = -1;
  for (int i = 1; i <= K; i++) {
    if (c % K == 0) {
      ans = i;
      break;
    } else {
      c = c % K;
    }
    c = c * 10 + 7;
  }

  cout << ans << endl;
}
