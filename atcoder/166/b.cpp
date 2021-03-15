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
  int N, K;
  cin >> N >> K;

  vi ans(N + 1, 0);
  REP(tmp, K) {
    int d;
    cin >> d;
    REP(i, d) {
      int p;
      cin >> p;
      ans[p]++;
    }
  }

  int ret = 0;
  for (int i = 1; i <= N; i++) {
    if (ans[i] == 0) ret++;
  }

  cout << ret << endl;
}
