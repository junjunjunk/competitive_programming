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

void tree_search(vi& distance,vector<pair<int,int> > edge,vector<bool>& visited,int node,int current_distance){
    if (visited[node-1]) return;

    visited[node-1]=true;
    distance[node-1]=current_distance;

    REP(i,visited.size()){
        int f,s;
        f = edge[i].first , s=edge[i].second;
        if(f==node) tree_search(distance,edge,visited,s,current_distance+1);
        if(s==node) tree_search(distance,edge,visited,f,current_distance+1);
    }

    return;

}

int main() {
    int N,u,v;
    cin >> N >> u >> v;
    vi distance(N,0);
    vector<pair<int,int> > edge(N-1);
    vector<vi> next_node(N+1);

    REP(i,N-1){
        int A,B;
        cin >> A >> B;
        edge[i]=make_pair(A,B);
        next_node[A].push_back(B);
        next_node[B].push_back(A);
    }
     
    vector<bool> visited(N,false);
    tree_search(distance,edge,visited,v,0);
    auto cmp = [&](const int &a, const int &b) {
        return distance[a] < distance[b];
    };

    for(int i=1;i<N+1;i++){
        sort(next_node[i].begin(),next_node[i].end(),cmp);
    }


    int moved = 0;
    int uflag = 1;
    while(true){
        if(u==v)break;
        if(uflag){
            u = next_node[u][0];
        }else{
            int tmp = next_node[v].size();
            v = next_node[v][tmp-1];
            moved++;
        }
        uflag^=1;
    }

    cout << moved << endl;

}

