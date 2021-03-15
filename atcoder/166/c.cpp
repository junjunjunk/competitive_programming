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
  int N, M;
  cin >> N >> M;

  vl H(N);
  vector<vi> edge(N);

  REP(i, N) cin >> H[i];

  REP(i, M) {
    int a, b;
    cin >> a >> b;
    --a, --b;

    edge[a].push_back(b);
    edge[b].push_back(a);
  }

  int ans = 0;
  REP(node_id, N) {
    // if(H[node_id]==-1)continue;
    int ch = H[node_id];
    bool ok = true;
    for (auto neighbor_id : edge[node_id]) {
      if (ch <= H[neighbor_id]) {
        ok = false;
        break;
      }
    }
    if (ok) {
      ans++;
    }
  }

  cout << ans << endl;
}
