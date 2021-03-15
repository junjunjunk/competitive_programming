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
    vl A(N),B(N);
    REP(i,N){
        cin >> A[i] >> B[i];
    }

    ll res= 30*1000000000LL+1;

    REP(in,N){
        REP(out,N){
            ll tmp=0;
            if(A[in]>B[out])continue;

            REP(d,N){
                tmp+=B[out]-A[in];

                if(A[d]<A[in]){
                    tmp += (A[in]-A[d])*2;
                    if(B[d]>B[out]){
                        tmp+=(B[d]-B[out])*2;
                    }

                }else if(A[d]<=B[out]){

                    if(B[d]>B[out]){
                        tmp+=(B[d]-B[out])*2;
                    }

                }else{
                    tmp+=(B[d]-B[out])*2;
                }
            }
            CHMIN(res,tmp);
        }
    }

    cout << res << endl;

}

