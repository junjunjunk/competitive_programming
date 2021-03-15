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
#define all(x) x.begin(),x.end()

//幅優先　ツリー　木　無効グラフ　重み付き　二部グラフ

using Edge = pair<int,int>; 
using Graph = vector<vector<Edge> >; //隣接リスト to
int N;
Graph G;

vector<int> res;

// v は現在見ている頂点, p は v の親
void dfs(int v, int p ,int c) {
    res[v]=c;
  for (auto e : G[v]) {
    if (e.first == p) continue;  // これがツリー探索で一般的な書き方
    if(e.second&1) dfs(e.first,v,1-c);
    else dfs(e.first, v,c);
  }
}

int main() {
  cin >> N;
  G.assign(N,vector<Edge>()); //GをN個のエッジで初期化
  for(int i=0;i<N-1;i++){
      int u,v,w;
      cin >> u >> v >> w;
      --u,--v;
      G[u].push_back(Edge(v,w));
      G[v].push_back(Edge(u,w));
  }
  res.assign(N,0);
  dfs(0,-1,1);
  for(auto v:res)cout<< v << endl;

}

/*
特定の点とのグループをとれば自ずと偶奇は別れることはわかっていたがそれぞれの点との距離の全探索ができなかった。


*/
