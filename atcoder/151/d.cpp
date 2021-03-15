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
#define DEBUG_VEC(v) cerr<<#v<<": ";REP(__i,(v).size())cerr<<((v)[__i])<<", ";cerr<<endl
#define PRINT(x) cout << x << endl
#define all(x) x.begin(),x.end()

int main() {

    int  H,W;
    cin >> H >> W;
    vector<vector<char> > S(H,vector<char>(W));

    REP(i,H){
        REP(j,W){
            cin >> S[i][j];
        }
    }

  const int dy[] = {0, 1, 0, -1};
  const int dx[] = {1, 0, -1, 0};


        int max_dist = 0;

REP(i,H){
    REP(j,W){
        if(S[i][j]=='#')continue;

        queue<pair<int, int> > q;
        vector<vector<int> > dist(H, vector<int>(W, -1));  //二次元ベクターを定義
        dist[i][j] = 0;
        q.emplace(i,j);

        while (!q.empty()) {
            int y = q.front().first;
            int x = q.front().second;
            q.pop();
            for (int k = 0; k < 4; k++) {
            int yy = y + dy[k];
            int xx = x + dx[k];
            if (yy < 0 || xx < 0 || yy >= H || xx >= W) continue;  //はみ出た場合
            if (S[yy][xx] == '#') continue;    //塗りつぶされている場合
            if (dist[yy][xx] != -1) continue;  //訪問済みの場合
            dist[yy][xx] = dist[y][x] + 1;     //初期位置からの移動距離
            max_dist = max(max_dist,dist[yy][xx]);
            q.emplace(yy, xx);
            }
        }

        queue<pair<int,int> > empty;
        swap( q, empty );
    }
}
cout << max_dist << endl;

}

