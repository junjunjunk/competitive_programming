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
    int N,M; //problems submit
    cin >> N >> M;
    vector<bool> acd(N,false);
    vector<int> pena(N,0);

    int ok,penalty;
    ok = 0 , penalty = 0;
    
    REP(i,M){
        int problem;
        string result;
        cin >> problem >> result;
        if(acd[problem-1])continue;

        if(result=="WA"){
            pena[problem-1]++;
        }else{
            acd[problem-1] = true;
            ok++;
            penalty += pena[problem-1];
        }
    }
    cout << ok << " " << penalty << endl;

}

