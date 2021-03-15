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
    vl H(N);
    REP(i,N)cin >> H[i];
    H[0] = max(1LL,H[0]-1LL);

    for(int i=1;i<N;i++){
        if(H[i]<H[i-1]){
            cout << "No" << endl;
            return 0;
        }

        if(H[i]==H[i-1])continue;

        H[i] = max(1LL,H[i]-1);
    }

    cout << "Yes" << endl;
    return 0;

}

