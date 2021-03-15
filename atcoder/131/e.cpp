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
    int N,K; cin >> N >> K;

    int ma = (N-1)*(N-2)/2;
    if(ma<K){
        cout << -1 << endl;
        return 0;
    }

    int cnt = ma-K; //何個のノードの最小距離を変更しなければいけないのか

    cout << (N-1)+cnt << endl; //star + 新しく設置する辺　辺を一つ設置すると1個のノードの最小距離がへる
    for(int i=2;i<=N;i++){
        cout << 1 << " " << i << endl;
    }
    //starを構築

    for(int i=2;i<=N;i++){
        for(int j=i+1;j<=N;j++){
            if(cnt==0)return 0;
            cout << i << " " << j << endl;
            cnt--;
        }
    }


    return 0;

}

//drkenさんの方が綺麗　http://drken1215.hatenablog.com/entry/2019/06/22/232000