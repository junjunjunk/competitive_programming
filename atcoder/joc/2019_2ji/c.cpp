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

ll digitSum(ll num){
    ll ans = 0;
    while(num!=0){
        ans += num%10;
        num /= 10;
    }
    return ans;
}

int main() {
    ll N;
    cin >> N;
    vl t(N+1,1);
    for(ll i=1;i<N;i++){
        ll n = i+digitSum(i);
        if(n<=N) t[n]+=t[i];
        // cout << i << " i " << t[i] << endl;
        // cout << n << " n " << t[n] << endl;

    }

    cout << t[N] << endl;

}   

