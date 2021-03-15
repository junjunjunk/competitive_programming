#include<iostream>
#include<vector>
#include<queue>

using namespace std;

int main(){
    int N;
    cin >> N;
    vector < vector<int> > to(N),cost(N);
    for(int i=0;i<N-1;i++){
        int a,b,w;
        cin >> a >> b >> w;
        a--,b--;
        to[a].push_back(b); cost[a].push_back(w);
        to[b].push_back(a); cost[b].push_back(w);
    }

    vector<int> ans(N,-1);
    queue<int> q;

    ans[0]=0;
    q.push(0);

    while(!q.empty()){
        int v= q.front();
        q.pop();

        for(int i=0;i<to[v].size();i++){
            int u = to[v][i];
            int w = cost[v][i];
            if(ans[u]!=-1)continue;
            ans[u]=(ans[v]+w)%2;
            q.push(u);
        }

    }

    for(int i=0;i<N;i++){
        cout << ans[i] << endl;
    }



}