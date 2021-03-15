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
    // S+1にしとけば全部消える
    ll N,K,S;
    cin >> N >> K >> S;

    vector<int> ans(N);
    REP(i,K){
        ans[i] = S;
    }

    FOR(i,K,N){
        ans[i] = S+1;
        if(S==1000000000) ans[i]=S-1;
    }

    REP(i,N-1){
        cout << ans[i] << " ";
    }

    cout << ans[N-1] << endl;

}

