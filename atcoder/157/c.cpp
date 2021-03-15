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
    int N,M;
    cin >> N >> M;

    string ans = "";
    REP(i,N) ans += "-";

    REP(i,M){
        int s;
        char c;
        cin >> s >> c;
        if(ans[s-1]!='-'&&ans[s-1]!=c){
            cout << "-1" << endl;
            return 0;
        }
        ans[s-1] = c;
    }


    REP(i,N){
        if(N!=1&&i==0&&ans[i]=='-') ans[i]='1';
        if(ans[i]=='-')ans[i]='0';
    }

    if(ans.size()!=1&&ans[0]=='0') ans = "-1";
    cout << ans << endl;
    return 0;

}

