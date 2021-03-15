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

vector<vector<char> > rotate(vector<vector<char> > S,int angle){
    int N = S.size();
    vector<vector<char> > ret(N,vector<char>(N));
    if(angle==-90){
        REP(i,N){
            REP(j,N){
                ret[N-(j+1)][i] = S[i][j];
            }
        }
    }

    if(angle==90){
        REP(i,N){
            REP(j,N){
                ret[j][N-(i+1)] = S[i][j];
            }
        }
    }

    return ret;
}

int main() {
    int N;
    cin >> N;
    vector<vector<char> > s(N,vector<char>(N)),t(N,vector<char>(N));
    REP(i,N){
        REP(j,N){
            cin >> s[i][j];
        }
    }

    REP(i,N){
        REP(j,N){
            cin >> t[i][j];
        }
    }

    vector<vector<char> > a,b,c;
    int diff_a,diff_b,diff_c,diff_s;
    diff_a = 1 ,diff_b = 2, diff_c = 1 ,diff_s = 0;
    a = rotate(s,90);
    b = rotate(a,90);
    c = rotate(s,-90);

    REP(i,N){
        REP(j,N){
            if(t[i][j]!=a[i][j]) diff_a++;
            if(t[i][j]!=b[i][j]) diff_b++;
            if(t[i][j]!=c[i][j]) diff_c++;
            if(t[i][j]!=s[i][j]) diff_s++;
        }
    }


    cout << min(min(diff_a,diff_b),min(diff_c,diff_s)) << endl;
}

