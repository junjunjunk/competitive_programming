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

    vector<string> v(N);
    REP(i,N){
        cin >> v[i];
    }


    bool ok =true;

    FOR(i,1,N){
        if(v[i][0]!=v[i-1][v[i-1].length()-1]){
            ok = false;
        }
    }
    
    FOR(i,0,N){
        FOR(j,i+1,N){
            if(v[i]==v[j]) ok = false;
        }
    }

    if(ok)PRINT("Yes");
    else PRINT("No");

}

