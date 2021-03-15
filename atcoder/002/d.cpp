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

#define CHMIN(a, b) (a) = min((a), (b))
#define CHMAX(a, b) (a) = max((a), (b))

#define DEBUG(x) cout << #x << ": " << (x) << endl
#define PRINT(x) cout << x << endl
#define all(x) x.begin(), x.end()

int N, M;
int ans = 1;

vi x(100), y(200);
//全探索　部分和

void dfs(int d, vi& t) {
  if (d == N) {
    int p = 0;
    FOR(i, 0, N) {
      if (t[i] == 0) continue;
      p++;
      FOR(j, 0, N) {
        if (i == j) continue;
        if (t[j] & 1) {
          bool ok = false;
          FOR(k, 0, M) {
            if (x[k] == i + 1 && y[k] == j + 1) {
              ok = true;
              break;
            }
            if (y[k] == i + 1 && x[k] == j + 1) {
              ok = true;
              break;
            }
          }
          if (!ok) return;
        }
      }
    }
    ans = max(ans, p);

    return;
  }

  t[d] = 1;
  dfs(d + 1, t);
  t[d] = 0;
  dfs(d + 1, t);

  return;
}

int main() {
  cin >> N >> M;

  REP(i, M) cin >> x[i] >> y[i];

  vi t(N, 0);
  dfs(0, t);

  cout << ans << endl;
}
