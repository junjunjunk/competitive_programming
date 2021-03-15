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
    vector<int> W(N);
    for(int i=0;i<N;i++)cin >> W[i];
    vector<int> sum(N+1);
    sum[0]=0;
    for(int i=1;i<N+1;i++){
        sum[i]+=sum[i-1]+W[i-1];
    }

    int ans = 100000000;

    for(int i=0;i<N+1;i++){
        int s1,s2;
        s1 = sum[i];
        s2 = sum[N]-sum[i];
        ans = min(ans,abs(s1-s2));
    }

    cout << ans << endl;


}

