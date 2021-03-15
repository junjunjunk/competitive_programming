#include<iostream>
#include<vector>
#include <set>
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
#define DEBUG_VEC(v)                               \
  cerr << #v << ": ";                              \
  REP(__i, (v).size()) cerr << ((v)[__i]) << ", "; \
  cerr << endl
#define PRINT(x) cout << x << endl
#define all(x) x.begin(), x.end()
#define MM << " " <<
int main() {
    int N,K;
    cin >> N >> K;

    ll MOD = 998244353;
    
    set<int> s;
    vector<int> L(K);
    vector<int> R(K);
    vector<ll> val(K);
    for(int i=0;i<K;i++){
        cin >> L[i] >> R[i];
    }

    vector<ll> dp(N+1,0);
    dp[1] = 1;
    for(int i=2;i<=N;i++){
        for (int k=0;k<K;k++) {
            int l = L[k], r = R[k];
            if(i-l>0) val[k] += dp[i-l]%MOD;
            if(i-r-1>0) val[k] -= dp[i-r-1]%MOD;
            dp[i] = (dp[i]+val[k])%MOD;
        }
    }

    cout << dp[N]%MOD << endl;

}
