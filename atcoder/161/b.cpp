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
    int n,m;
    cin >> n >> m;
    vi a(n);
    int sum = 0;
    REP(i,n){
        cin >> a[i];
        sum += a[i];
    }
    
    int count = 0;
    REP(i,n){
        if ( m*a[i]*4 >= sum) count++;
    }

    if(count>=m) cout << "Yes" << endl;
    else cout << "No" << endl;


}

