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
    ll N,A,B;
    cin >> N >> A >> B;

    if((B-A)%2==0){
        cout << (B-A)/2 << endl;
    }else{
        ll tmp = min(N-B,A-1); //片方が寄り切るまでの時間

        if(N-B<A-1){
            A += tmp;
            B = N; 
        }else{
            A = 1;
            B -= tmp;
        }
        cout << tmp+(B-A+1)/2 << endl;
    }


}

