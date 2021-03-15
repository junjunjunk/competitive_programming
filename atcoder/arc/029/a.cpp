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
    int N;
    cin >> N;

    vi t(N);
    REP(i,N){
        cin >> t[i];
    }

    int ans=50*4+1;
    int m1,m2;
    for(int mask=0; mask< (1<< N )  ;mask++){
        m1 = m2 = 0;
        for(int i=0;i<N;i++){
            if(mask&(1<<i)){
                m1 += t[i];
            }else{
                m2 += t[i];
            }
        }
        ans = min(ans,max(m1,m2));
    }

    cout << ans << endl;

}

