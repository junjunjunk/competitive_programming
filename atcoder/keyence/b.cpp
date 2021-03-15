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
    int N;
    cin >> N;
    // pairのスマートな書き方忘れてる
    //腕が長いロボットを殺したい
    vector<pair<ll,ll> > XL(N);
    vl left(N),right(N);

    REP(i,N){
        ll X,L;
        cin >> X >> L;
        XL[i] = pair<ll,ll>(X,L);
    }

    sort(XL.begin(),XL.end());

   for(int i=0;i<N;i++){
       for(int j=;j<n)
   }


}

