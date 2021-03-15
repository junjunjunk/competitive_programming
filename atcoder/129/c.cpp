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

    ll MOD = 1000000007;

    vector<int> dp(N+1,0); //0段目からN段目
    dp[0]=1;

    vector<int> a(N+2,1);
    for(int i=0;i<M;i++){
        int tmp;
        cin >> tmp;
        a[tmp] = -1;
    }

    a[N+1]=-1;

    for(int i=0;i<N;i++){
        if(a[i+1]!=-1)dp[i+1]+=dp[i]%MOD;
        if(a[i+2]!=-1)dp[i+2]+=dp[i]%MOD;
    }

    cout << dp[N]%MOD << endl;


}

