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



int main() {
    int N,M;
    cin >> N >> M;
    int left,right;
    left=1;
    right = N;

    for(int i=0;i<M;i++){
        int tmpleft,tmpright;
        cin >> tmpleft >> tmpright;
        left = max(tmpleft,left);
        right = min(tmpright,right);
    }

    cout <<  max(0,right-left+1) << endl;

}

