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
    int N,K,M;
    cin >> N >> K >> M;
    vi A(N-1);
    REP(i,N-1) cin >> A[i];

    int ans = 0;
    int sum = 0;
    REP(i,N-1) sum+=A[i];
    
    if(M*N-sum>100){
        ans = -1;
    }else{
        ans = max(0,M*N-sum);
    }

    if(ans>K) ans = -1;

    cout << ans << endl;
    return 0;


}

