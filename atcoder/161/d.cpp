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

bool is_runrun(ll num){
    string s = to_string(num);
    REP(i,s.size()-1){
        if(s[i+1]==s[i]-1||s[i+1]==s[i]+1||s[i+1]==s[i]) continue;
        else return false;
    }

    return true;
}

int main() {   
    int k;
    cin >> k;

    ll n = 1;
    vector<vl> dp(100,vl(10,0));

    FOR(i,1,10) dp[1][i] = 1;

    FOR(i,2,3){
        FOR(j,0,10){ //次の末尾j
            if(0<j) dp[i][j] += dp[i-1][j-1];
            dp[i][j] += dp[i-1][j];
            if(j<=8) dp[i][j] += dp[i-1][j+1];
        }
    }

    DEBUG_VEC(dp[2]);

}

