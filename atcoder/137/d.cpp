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
    int N,M;
    cin >> N >> M;

    auto comp = [](pii a, pii b) { 
        if(a.second!=b.second) return a.second < b.second;
        else return a.first < b.first;
    };

    priority_queue<pii,vector<pii>,decltype(comp)> PQ(comp);
    REP(i,N){
        pii tmp = pii(0,0);
        cin >> tmp.first >> tmp.second;
        PQ.push(tmp);
    }

    vector<int> ok(N+1,0);
    for(int i=1;i<=M;i++){
        ok[i]=M-i+1;
    }

    ll ans = 0;

    while(!PQ.empty()){
        pii tmp = PQ.top();
        PQ.pop();

        if(M<tmp.first)continue;
        
        for(int i=1;i<=M;i++){
            cout << ok[i] << " ";
        }
        cout << endl;

        DEBUG(tmp.first);

        if(ok[tmp.first]>0){
            ans += tmp.second;
            for(int i=tmp.first;i>0;i--) ok[i]--;
        }
 
    }

    cout << ans << endl;

}

