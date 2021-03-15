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
    int N,X;
    cin >> N >> X;

    vector<int> b(N);//得られるアド
    vector<int> l(N),u(N);
    vector<int> al(N),au(N); //bがそれでとりうる最大スコア、最小スコア

    vector<int> bl(N),bu(N); //得られるアドの最大値と最小値

    int sumb = 0;
    for(int i=0;i<N;i++){
        cin >> b[i] >> l[i] >> u[i];
        b[i]=X-b[i];
        al[i]=b[i]*l[i];
        au[i]=b[i]*u[i];

        bl[i] = b[i]*l[i];
        sumb += b[i]*l[i];
        bu[i] = b[i]*u[i];
    }

    //bのアドを最低にしつつ。他でそのbのアドを超える得点を稼ぐ
    //それが無理ならbのアドがあるところも勉強してアドを減らす
    //bの得点によってはアドを得られるタイミングが変わってしまう

    vector<int> ord(N);
    iota(all(ord),0);
    sort(all(ord),[&](int x,int y){
        return u[x]>u[y];
    });

    int myscore = 0;
    for(auto e:ord){
        int cangain = b[i]*
        myscore += min(100-X*)
    }

}

