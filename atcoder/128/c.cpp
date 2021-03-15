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
    vector< vector<int> > s(M);

    for(int i=0;i<M;i++){
        int k;
        cin >> k;
        for(int j=0;j<k;j++){
            int tmp;
            cin >> tmp;
            s[i].push_back(tmp);
        }
    }

    vector<int> p(M);
    for(int i=0;i<M;i++)cin >> p[i];
    
    int ans = 0;

    for(int bit = 0 ; bit<(1<<N);bit++){
        
        for(int i=0;i<M;i++){
            int onswitch = 0;
            for(int j=0;j<s[i].size();j++){
                if((1<<(s[i][j]-1))&bit)onswitch++;

            }
            if(onswitch%2!=p[i])break;
            if(i==M-1) ans++;
        }

    }

    cout << ans << endl;

}

