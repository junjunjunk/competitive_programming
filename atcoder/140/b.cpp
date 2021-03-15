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
    int N;
    cin >> N;
    vi A(N),B(N),C(N-1);
    REP(i,N) cin >> A[i];
    REP(i,N) cin >> B[i];
    REP(i,N-1) cin >> C[i];

    int ans = 0;

    FOR(i,0,N){
        ans += B[A[i]-1];
        if(i!=N-1&&A[i+1]-A[i]==1) ans += C[A[i]-1];
    }


    cout << ans << endl;
}

