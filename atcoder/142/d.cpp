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

long long gcd(long long A, long long B) {  // A>B
  if (A < B) swap(A, B);
  if (B == 0)
    return A;
  else {
    return gcd(B, A % B);
  }
}
 

int main() {
    ll A,B;
    cin >> A >> B;
    ll G =  gcd(A,B); //最大公約数
    ll cnt = 1;

    for(ll p=2;p*p<=G;p++){
      if(G%p!=0) continue;
      while(G%p==0){
        G /= p;
      }
        cnt++;
    }

    if(G!=1)cnt++;

    cout << cnt << endl;

}

// Tips : p*p<=Gにすることで計算量をnからルートnまで落とせる
