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

int main() {
    int N;
    cin >> N;
    vector<long> A(N+1),B(N);
    REP(i,N+1)cin >> A[i];
    REP(i,N) cin >> B[i];

    ll ans = 0;
    long remain = 0;
    for(int i=0;i<N;i++){
        ans += min(A[i],remain+B[i]);
        remain = min(B[i],max(0L,remain+B[i]-A[i]) ) ;
    }

    ans += min(A[N],remain);
    cout << ans << endl;

}

