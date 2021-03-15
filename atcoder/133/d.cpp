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
    vl A(N);
    REP(i,N)cin >> A[i];
    vl ans(N);

    ll e1 = 0 , e2 = 0;
    ll i;
    for(i=0;;i+=2){
        if(i>N)break;
        e1 += A[i];
    }

    for(i;;i+=2){
        if(i%N==0)break;
        e2 += A[i%N];
    }

    ans[0] = e1-e2;
    // ans[N-1] = A[i]*2-ans[0];
    for(int i=N-1;i>0;i--){
        ans[i] = A[i]*2-ans[(i+1)%N];
    }

    REP(i,N-1) cout << ans[i] << " ";

    cout << ans[N-1] << endl;


}