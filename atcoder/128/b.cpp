#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef pair<int,string> pis;


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
    vector<pis> ps(N);
    set<string> vs;
    REP(i,N){
        string s;
        int p;
        cin >> s >> p;
        vs.insert(s);
        ps[i]=pis(p,s);
    }
    // sort(all(ps));
    vector<string> svec(vs.begin(), vs.end());
    // sort(all(setvec));
    // reverse(all(setvec));

    for(int i=0;i<svec.size();i++){
        string tmps  = svec[i];
        vector<pii> tmpv;
        for(int j=0;j<N;j++){
            if(tmps==ps[j].second){
                tmpv.push_back(pii(ps[j].first,j+1));
            }
        }
        sort(all(tmpv));
        reverse(all(tmpv));
        for(int j=0;j<tmpv.size();j++){
            cout << tmpv[j].second << endl;
        }
    }
}

