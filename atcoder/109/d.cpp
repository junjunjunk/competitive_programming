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


int main() {
    int H,W;
    vector<vi> a(H,vi(W)); //0-indexなので注意　出力時には+1する

    REP(i,H){
        REP(j,W){
            cin >> a[i][j];
        }
    }

    //偶数枚のコインが置かれたマスの数を最大化
    //0枚のコインが置かれているマスは「偶数枚のコイン」が置かれている場所として扱う

    /*
    0 2 8
    1 1 1
    0 0 0
    あるマスをみると減らせる数は最大１　増やせる数は最大４
    */



}

