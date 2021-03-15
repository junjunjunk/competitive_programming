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

int c[10][1005];

int main() {
  //要するにホワイトチョコレートの切り分け
  //たとえホワイト同士が離れていようと分断すれば別ブロック
  //グリッドの直線通りにしか折れない
  //状態数 2^((10-1)*(1000-1))通り
  // 全部割ったら 9*999
  int H, W, K;
  cin >> H >> W >> K;

  vector<string> S(H);
  REP(i, H) { cin >> S[i]; }
  int ans = (H - 1) * (W - 1);
  for (int div = 0; div < (1 << (H - 1)); ++div) {  // 2^h-1乗通りの切り方
    int g = 0;
    vi id(H);  //それぞれの列がどのグループに属するのか
    REP(i, H) {
      id[i] = g;
      if (div >> i & 1)
        ++g;  // shiftしてから&1をとればオーバーフローしずらいし結果が１か０になる
    }
    ++g;  //３回きればグループ数は４つ

    REP(i, g) {
      REP(j, W) c[i][j] = 0;  //初期化 0初期化はされてるけどループするので
    }
    REP(i, H) { REP(j, W) c[id[i]][j] += S[i][j] - '0'; }
    bool ok = true;
    REP(i, g)
    REP(j, W)
    if (c[i][j] > K) ok = false;  //ある1列でホワイトチョコがK個を超える
    if (!ok) continue;

    int local_ans = g - 1;
    vi now(g);  //各グループで合計何個のチョコがあるか

    auto add = [&](int j) {  // j列目のチョコを考えた時K個内で収まっているか
      REP(i, g) now[i] += c[i][j];  //その縦列でのグループごとに集計を行う
      REP(i, g) if (now[i] > K) return false;
      return true;
    };

    REP(j, W) {
      if (!add(j)) {  //失敗したらその前の位置で切る
        ++local_ans;
        now = vector<int>(g);  //初期化
        add(j);
      }
    }

    ans = min(ans, local_ans);
  }

  cout << ans << endl;
}
