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
    vector<vector<int> >  A(3,vector<int>(3,0));
    REP(i,3){
        REP(j,3){
            cin >> A[i][j];
        }
    }

    int N;
    cin >> N;

    vector<int> b(N,0);
    REP(i,N) cin >> B[i];

    vector<vector<bool> >  A(3,vector<bool>(3,false));


    REP(i,N){
        int num = B[i];
        REP(j,3){
            REP(k,3){
                if(a[j][k]==num) a[j][k] = true;
            }
        }
    }


    bool bingo  = false;

    REP(i,3){
        if(a[i][0]&&a[i][1]&&a[i][2]) bingo = true;
        if(a[0][i]&&a[1][i]&&a[2][i]) bingo = true;

    }

    if(a[0][0]&&a[1][1]&&a[2][2]) bingo = true;

    if(bingo) cout << "Yes" << endl;
    else cout << "No" << endl;

}

