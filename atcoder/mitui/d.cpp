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

int cnt[10][10][10];

int main() {
    int N;
    string s;
    cin >> N;
    cin >> s;

    //高々1000通り
    // 0~9 0~9 0~9 のパターンしかないのでどれが作れるかを考える
    // tがSの部分列かどうか　カーソルが末尾に来てれば良い　貪欲に判定　できるだけ部分文字を最初の方から取る
    // 貪欲に前方からマッチング

    // 別解としてはそれぞれの文字のインデックスを持って配列を２分探索する
    // パターン数×(k*logN)+N
    int a,b,c;


}

