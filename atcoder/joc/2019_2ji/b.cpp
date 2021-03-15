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
    int N;
    cin >> N;
    vector<pair<ll,ll> > AT(N);
    REP(i,N){
        ll a,t;
        cin >> a >> t;
        AT[i] = make_pair(a,t);
    }

    //最奥との往復時間か（入り口との距離)+収穫時間の最大値
    ll m = 0;
    REP(i,N){
        m = max(m,AT[i].first*2);
        m = max(m,AT[i].first+AT[i].second);
    }

    cout << m << endl;

}

