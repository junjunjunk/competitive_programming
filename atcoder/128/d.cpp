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
    int N,K;
    cin >> N >> K;
    vl V(N);
    priority_queue<ll,vector<ll>,greater<ll> > pq;

    //手に入れる＋戻す回数でたかだかK回
    //K-i回取り出してi回戻す時、両端からK-iのものは入手可能　ただし手に入ったものを戻すのはi回まで
    //戻すのは最後でもいい　取り出すのはコスト１　戻すのはコスト１　よってまいないすのものを戻したかったら２回行動消費
    for(int i=0;i<N;i++){
        cin >> V[i];
    }

    //とる宝石の回数を決める K通り　宝石の戻し方はpqでO(1) 宝石のとり方はK+1通り
    ll ans = -10000000000;
    for(int k=0;k<=min(K,N);k++){ //どのKで行くか
        for(int popleft=0;popleft<=k;popleft++){ //左から何回とるか
            vector<bool> tmpv(N,false);
            for(int i=0;i<popleft;i++){
                pq.push(V[i]);
                tmpv[i]==true;
            }
            for(int i=0;i<k-popleft;i++){ //右からとる
                if(tmpv[N-1-i])break;
                pq.push(V[N-1-i]);
            }
            int canpop = K-k;
            while(!pq.empty()&&canpop>0){
                if(pq.top()<0){
                    pq.pop();
                    canpop--;
                }
                else break;
            }
            ll tmp = 0;
            while(!pq.empty()){
                tmp += pq.top();
                pq.pop();
            }   

            ans = max(ans,tmp);
        }
    }

    cout << ans << endl;

}

