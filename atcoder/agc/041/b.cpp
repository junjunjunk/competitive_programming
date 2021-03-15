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
    ll N,M,V,P;
    cin >> N >> M >> V >> P;
    vl A(N);
    vector<bool> choosable(N,false);
    REP(i,N) cin >> A[i];

    //M人がV回投票できる
    //そして降順でP選択
    sort(A.begin(),A.end(),greater<ll>());

    // 上からP番目までは必ず大丈夫
    // 並び順を変えられるか・横並びに出来るかが鍵
    // 下からVすべてに投票してPを超えられるか？ではない
    // 1..P a,b,c,d,e V=3

    // 閾値を超えたかったら閾値以外の数にスコアを与えるべき
    //　その与える最大スコア数がM スコアを与える数字の数がV
    //  自分より小さい数がV未満だったらとりあえず上からP-1個までに数字を与える
    // 　それでも数字が余るなら無理

    // M...最大足されうる値 V...他にも足されることが重要
    // N-V...差を発生させられる他の数字数 V...差が発生しない数字の数
    // V...自分より大きい奴がN-V個以上いると無理？
    // N-iは自分以下の数字に加算したときの残りのV

    ll threshold = A[P-1]; //これより大きくならないと選ばれない
    for(int i=0;i<N;i++){
        if(i!=0&&A[i-1]==A[i]){
            choosable[i]=choosable[i-1];
            continue;
        }
        if((A[i]+M>=threshold)&&V-(N-i)<=0)choosable[i]=true;
    }

    ll cnt = 0;
    for(int i=0;i<N;i++){
        if(choosable[i])cnt++;
    }

    cout << cnt << endl;

}

