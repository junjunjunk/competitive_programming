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

const ll MOD = 1000000007;
const ll MAX = 510000;
long long fac[MAX], finv[MAX], inv[MAX];


void COMinit() {
  fac[0] = fac[1] = 1;
  finv[0] = finv[1] = 1;
  inv[1] = 1;
  for (int i = 2; i < MAX; i++) {
    fac[i] = fac[i - 1] * i % MOD;
    inv[i] = MOD - inv[MOD % i] * (MOD / i) % MOD;
    finv[i] = finv[i - 1] * inv[i] % MOD;
  }
}

long long COM(ll n, ll k) {
  if (n < k) return 0;
  if (n < 0 || k < 0) return 0;
  return fac[n] * (finv[k] * finv[n - k] % MOD) % MOD;
}

int main() {
    ll N,K;
    cin >> N >> K;
    vl A(N);

    REP(i,N)cin>> A[i];
    sort(A.begin(),A.end());

    COMinit();
    ll ans = 0;


    ll prev_i = 10000000001;

    for(int i=0;i<N;i++){
        if(prev_i==A[i])continue;
        ll prev_j = 10000000001;
        for(int j=N-1;j>=i+K-1;j--){
            if(prev_j==A[j])continue;
            ll comb = COM(j-i-1,K-2);
            ans += ((abs(A[j]-A[i])%MOD)*comb)%MOD;
            prev_j = A[j];
        }
        prev_i = A[i];
    }

    cout << ans << endl;

}

