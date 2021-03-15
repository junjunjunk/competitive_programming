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
    int N,Q;
    cin >> N >> Q;
    vector<ll> kukan(1000000000LL,-1);

    for(int i=0;i<N;i++){
        ll s,t,x;
        cin >> s >> t >> x;
        for(int i=s;i<=t;i++){
            if(x-1-i<0)break;
            if(kukan[x-1-i]!=-1)break;
            kukan[x-1-i]=x;
        }
    }

    for(int i=0;i<Q;i++){
        ll D;
        cin >> D;
        cout << kukan[D] << endl;
    }
}

