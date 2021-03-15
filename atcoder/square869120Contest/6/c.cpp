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
int H,W;


int main() {
    cin >> H >> W;

    vector<vector<char> > c(H,vector<char>(W));
    REP(i,H){        
        REP(j,W){
            cin >> c[i][j];
        }
    }

    bool ok = false;

    REP(i,dfs(0,0,c)){        
        int count =0;
        REP(j,W){
            if(c[i][j]=='.')count++;
        }
        if(count==W){
            ok =true;
            break;
        }
    }

    if(ok){
        cout << "Yay!" << endl;
    }else{
        cout << ":(" << endl;
    }

}

