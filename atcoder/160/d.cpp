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
    int N,X,Y;
    cin >> N >> X >> Y;

    vector<vi> G(N);
    for(int i=0;i<N-1;i++){
        G[i].push_back(i+1);
        G[i+1].push_back(i);
    }

    G[X-1].push_back(Y-1);
    G[Y-1].push_back(X-1);


    vector<int> ans(N,0);
    queue<int> que;

    for(int i=0;i<N;i++){

        vector<int> dist(N,-1);
        dist[i] = 0;
        que.push(i);

        while(!que.empty()){
            int v = que.front();
            que.pop();
            ++ans[dist[v]];
            for(int edge=0;edge<G[v].size();edge++){
                if(dist[G[v][edge]]!=-1) continue;
                que.push(G[v][edge]);
                dist[G[v][edge]] = dist[v]+1;
            }
        }

    }

    for(int i=1;i<N;i++){
        cout << ans[i]/2 << endl;
    }

}

