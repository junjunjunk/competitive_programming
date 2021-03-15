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

//  整数問題 全探索 約数 
int main() {
    ll N;
    cin >> N;
    ll ans = 0;


    for(ll r=1;r*r<N;r++){
        if(N%r==0){
            if(N>r*r+r)ans += (N-r)/r;
        }
    }

    // for (ll r = 1; r*r <= N; ++r) {
    //     if ((N-r) % r == 0 && (N-r)/r > r) ans += (N-r)/r;
    // }
    //N=k(m+1)かつk<mが満たされればいい


    cout << ans << endl;

}

/*
r<mということに気づけなかった
r<m であってこれは r2+r>N と同値である

あとは約数列挙も思いついたが実装できるか不安で手をつけなかった、ライブラリを作っておく。計算量はO(rootN)で住むので大丈夫だった
*/