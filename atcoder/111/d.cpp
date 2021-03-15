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

//復習必要 600点
int main() {
    map<char,pii> mp;
    //x0,y0=0,0

    int N;
    cin >> N;

    vector<pll> pos(N);
    FOR(i,0,N){
        cin >> pos[i].first >> pos[i].second;
    }

    int par = (abs(pos[0].first) + abs(pos[0].second)) % 2; //パリティ

    for (int i = 0; i < N; ++i) { //パリティチェック
        int par2 = (abs(pos[i].first) + abs(pos[i].second)) % 2;
        pos[i] = pll(pos[i].first + pos[i].second, pos[i].first - pos[i].second);//
        if (par2 != par) {
            cout << -1 << endl;
            return 0;
        }
    }

    vector<long long> d;
    for (int i = 30; i >= 0; --i) d.push_back(1LL<<i); //２のべき乗項

    if (par % 2 == 0) d.push_back(1);
    cout << d.size() << endl; //何回移動するか
    for (int j = 0; j < d.size(); ++j) cout << d[j] << " ";
    cout << endl;
    

        for (int i = 0; i < N; ++i) {
        int xdir, ydir;
        long long xsum = 0, ysum = 0;
        for (int j = 0; j < (int)d.size(); ++j) {
            if (xsum <= pos[i].first) xdir = 1, xsum += d[j];
            else xdir = -1, xsum -= d[j];
            if (ysum <= pos[i].second) ydir = 1, ysum += d[j];
            else ydir = -1, ysum -= d[j];
            
            if (xdir == 1 && ydir == 1) cout << "R";
            else if (xdir == 1 && ydir == -1) cout << "U";
            else if (xdir == -1 && ydir == -1) cout << "L";
            else cout << "D";
        }
        cout << endl;
    }

}

/*
全ての座標（X,Y）に到達可能かどうか
X,Yの全探索は時間的に無理、dも無理
mを固定して40通りも無理

終了地点から逆算する形式はどうだろう、意味ないか

移動量dは全員共通、移動方向のみ各々自由に選択できる

移動量最大がx_max+y_max
その移動量の差分で取れる値にも移動可能にはなる
*/

