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
    //矛盾意見をなくすために消すべき人数
    vector<vi> A(N+1,vi(N+1,0));

    for(int i=1;i<=N;i++){
        int a;
        cin >> a;
        for(int j=0;j<a;j++){
            int s,t;
            cin >> s >> t;
            A[i][t] = s;
        }
    }

    int ans = N+1;
    for(int i=1;i<=N;i++){
        for(int j=1;j<=N;j++){
            for(int k=1;k<=N;k++){
                if(A[i][k]*A[j][k]==-1){
                    ans++;
                    break;
                }
            }
            ans = N
        }
    }

}

