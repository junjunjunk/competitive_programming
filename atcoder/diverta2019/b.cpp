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
    int R,G,B,N;
    cin >> R >> G >> B >> N;

    int ans=0;
    
    FOR(r,0,((N+R-1)/R)+1){
        FOR(g,0,((N+G-1)/G)+1){
            int rest = (N-R*r-G*g);
            if(rest<0)break;
            if(rest%B==0){
                ans++;
            }
        }
    }


    cout << ans << endl;

}

