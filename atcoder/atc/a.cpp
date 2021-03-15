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

pii dir[4]={pii(-1,0),pii(1,0),pii(0,1),pii(0,-1)};

int H,W;
char c[500][500];
bool reached[500][500];
string ans = "No";

//深さ優先　dfs

void dfs(int x,int y){
    if(x<0||y<0||W<=x||H<=y||c[y][x]=='#'||reached[y][x]==true) return;

    reached[y][x]=true;
    if(c[y][x]=='g'){
        ans = "Yes";
        return;
    }

    FOR(i,0,4){
        dfs(x+dir[i].first,y+dir[i].second);
    }

}

int main() {
    cin >> H >> W;

    int sx,sy;

    REP(h,H){
        REP(w,W){
            cin >> c[h][w];
            if(c[h][w]=='s'){
                sx = w;
                sy = h;
            }
        }
    }


    dfs(sx,sy);

    cout << ans << endl;
}

