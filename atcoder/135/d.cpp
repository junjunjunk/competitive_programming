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

static const uint64_t MOD = 1000000007LL;

int main() {
    string s;
    cin >> s;

    int n = s.size();
    vector< vector<uint64_t> > dp(n+1,vector<u_int64_t>(13,0));

    dp[0][0]=1;

    for(int i=0;i<n;i++){
        int c;
        if(s[i]!='?') c = s[i]-'0';
        else c = -1;

        for(int j=0;j<=9;j++){
            if(c!=-1&&c!=j)continue;
            for(int k=0;k<13;k++)dp[i+1][(k*10+j)%13] = (dp[i+1][(k*10+j)%13]+dp[i][k])%MOD;
        }
       
    }

    cout << dp[n][5] << endl;

}

