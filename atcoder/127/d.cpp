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
    int N,M;
    cin >> N >> M;
    priority_queue<ll,vector<ll>,greater<ll> > que;

    REP(i,N){
        ll tmp;
        cin >> tmp;
        que.push(tmp);
    }
    

    priority_queue<pll,vector<pll>> cb;
    for(int i=0;i<M;i++){
        ll c,b;
        cin >> b >> c;
        cb.push(pll(c,b));
    }


    for(int i=0;i<M;i++){
        pll tmp_cb = cb.top();
        cb.pop();
        for(int j=0;j<tmp_cb.second;j++){
            ll tmp = que.top();
            que.pop();
            if(tmp>=tmp_cb.first){
                que.push(tmp);
                break;
            }
            tmp = tmp_cb.first;
            que.push(tmp);
        }
    }

    ll sum=0;
    while(!que.empty()){
        sum += que.top();
        que.pop();
    }

    cout << sum << endl;

}

//貪欲法？

