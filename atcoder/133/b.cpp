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
    int N,D;
    cin >> N >> D;
    vector<vi> X(N,vi(D,0));

    REP(i,N) REP(j,D) cin >> X[i][j];
    int ans = 0;
    for(int i=0;i<N;i++){
        for(int j=i+1;j<N;j++){
            int dist = 0;
            for(int k=0;k<D;k++) dist += (X[i][k]-X[j][k])*(X[i][k]-X[j][k]);
            for(int k=0;k*k<=dist;k++){
                if(k*k==dist){
                    ans++;
                    break;
                }
            }
        }
    }

    cout << ans << endl;
    return 0;

}