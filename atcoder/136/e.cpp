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
#define PRINT(x) cout << x << endl
#define all(x) x.begin(),x.end()
#define DEBUG_VEC(v) cerr<<#v<<": ";REP(__i,(v).size())cerr<<((v)[__i])<<", ";cerr<<endl

int main() {
    int N,K;
    cin >> N >> K;
    vi A(N);
    REP(i,N) cin >> A[i];

    //和を求める
    ll sum = 0;
    REP(i,N) sum += A[i];


    //約数を求める
    set<ll> candidates;
    for(int i=1;i*i<=sum;i++){
        if(sum%i==0){
            candidates.insert(i);
            candidates.insert(sum/i);
        }
    }

    ll ans = 1;
    for(ll x : candidates){
        ll need = 0;
        {
            vector<ll> r(N);
            REP(i,N) r[i] = A[i]%x;
            sort(all(r));

            ll rSum = 0; //足す場合
            REP(i,N) rSum += x-r[i]; 

            ll lSum = 0; //引く場合
            need = 1e18;
            REP(i,N){
                lSum += r[i];
                rSum -= x-r[i];
                need = min(need,max(lSum,rSum));
            }

        }

        if(need<=K)ans = max(ans,x);
    }

    cout << ans << endl;

    return 0;

}

