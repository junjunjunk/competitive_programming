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
    int a,b;
    cin >> a >> b;
    a--,b--;
    bool ans[3] = {true,true,true};

    ans[a] = false;
    ans[b] = false;

    for(int i=0;i<3;i++){
        if(ans[i]){
            cout << (i+1) << endl;
            break;
        }
    }
    
    

}
