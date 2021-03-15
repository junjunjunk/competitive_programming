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


void dfs(vector<vi>& children,int p,ll val,vl &ans){
    ans[p] += val;
    
    for(int i=0;i<children[p].size();i++){
        dfs(children,children[p][i],val,ans);
    }

    return ;

}

void dfsinit(vector<vi>& children,vector<bool> &visited,int p){
    visited[p]=true;
    for(int i=children[p].size()-1;i>=0;i--){
        if (visited[children[p][i]]) children[p].erase(children[p].begin()+i);
        else dfsinit(children,visited,children[p][i]);
    }
    visited[p]=false;
    
    return ;

}

int main() {
    int N,Q;
    cin >> N >> Q;

    vector<vi> children(N);

    REP(i,N-1){
        int a,b;
        cin >> a >> b;
        
        children[a-1].push_back(b-1);
        children[b-1].push_back(a-1);
    }

    vector<bool> visited(N,false);
    vl ans(N,0LL);



    dfsinit(children,visited,0);

    for(int i=0;i<Q;i++){
        int p,x;
        cin >> p >> x;
        dfs(children,p-1,x,ans);
    }

    for(int i=0;i<N-1;i++){
        cout << ans[i] << " ";
    }

    cout << ans[N-1] << endl;
}

