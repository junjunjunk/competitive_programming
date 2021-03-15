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

int main() {
    ll L,R;
    cin >> L >> R;
    //iorjが2019で割り切れるなら0

    ll l = L/2019,r = R/2019;

    if(l!=r){
        cout << 0 << endl;
        return 0;
    }

    ll ans = 2019;

    for(ll i=L;i<R;i++){
        for(ll j=i+1;j<=R;j++){
            ans = min(ans,(i*j)%2019LL);
        }
    }

    cout << ans << endl;
    return 0;

}