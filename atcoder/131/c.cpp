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

long long gcd(long long A, long long B) {  // A>B
  if (A < B) swap(A, B);
  if (B == 0)
    return A;
  else {
    return gcd(B, A % B);
  }
}


 



int main() {
    ll A,B,C,D;
    cin >> A >> B >> C >> D;
    
    ll ac = (A+C-1)/C; //切り上げ
    ll bc = B/C; //切り下げ
    ll ad = (A+D-1)/D; //切り上げ
    ll bd = B/D; //切り下げ

    ll t = (C*D)/gcd(C,D);
    ll at = (A+t-1)/t;
    ll bt = B/t; 
    ll ans = (B-A+1) - (bc-ac+1) - (bd-ad+1) + (bt-at+1);

    cout << ans << endl;


}

