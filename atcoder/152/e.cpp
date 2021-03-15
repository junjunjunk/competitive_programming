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

long long gcd(long long A, long long B) {  // A>B
  if (A < B) swap(A, B);
  if (B == 0)
    return A;
  else {
    return gcd(B, A % B);
  }
}

long long Euclid(vector<long long> A) {  //複数のものの最大公約数を求める
  long long ans = A[0];
  for (int i = 1; i < A.size(); i++) {
    ans = gcd(ans, A[i]);
  }

  return ans;
}
 


int main() {
    int N;
    cin >> N;
    vl A(N),B(N);
    REP(i,N) cin >> A[i];

    ll MOD = 1000000000+7;
    
    ll tmp = A[0]; //最小公倍数
    ll ans = 0;
    FOR(i,1,N){
        ll g = gcd(tmp,A[i]);
        tmp *= (A[i]/g)%MOD;
    }



    cout << ans%MOD << endl;

}

