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
    int N;
    cin >> N;
    vl A(N);
    FOR(i,0,N){
        cin >> A[i];
    }
    
    ll cnt = 0;
    ll m = abs(A[0]);
    ll sum = 0;
    FOR(i,0,N){

        if(A[i]<0){
            cnt++;
        }

        sum += abs(A[i]);
        m = min(m,abs(A[i]));

    }

    if(cnt%2==1){
        sum -= 2*m;
    }

    cout << sum << endl;

}

