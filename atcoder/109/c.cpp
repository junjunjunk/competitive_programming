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

//最大公約数　gcd euclid 

// ll Euclid(ll A,ll B){
//     ll r=-1;
//     if(A<B){
//         swap(A,B);
//     }
    
//     while(r!=0){
//         r = A%B;
//         A = B;
//         B = r;
//     }

//     return A; GCDの実装の方が綺麗
// }

long long GCD(long long a, long long b) {
    if (b == 0) return a;
    else return GCD(b, a % b);
}

int main() {
    int N;
    ll X;

    cin >> N >> X;

    vl x(N);
    vl dist(N);

    REP(i,N){
        cin >> x[i];
        dist[i] = abs(X-x[i]);
    }

    //input end

    ll D;  //距離の最大公約数を求めれば良い？

    D = dist[0];
    REP(i,N){
        D = GCD(D,dist[i]);
    }

    cout << D << endl;



}

