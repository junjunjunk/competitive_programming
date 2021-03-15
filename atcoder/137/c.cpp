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
    int N;
    cin >> N;

    unordered_map<string,ll> M;
    REP(i,N){
        string s;
        cin >> s;
        sort(s.begin(),s.end());
        M[s]++;
    }

    ll ans = 0;
    for(auto m:M){
        if(m.second==1)continue;
        ll tmp = m.second-1;
        ans += (tmp*(tmp+1))/2;
    }

    cout << ans << endl;


}

