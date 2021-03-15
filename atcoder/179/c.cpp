#include<iostream>
#include<vector>
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
#define DEBUG_VEC(v)                               \
  cerr << #v << ": ";                              \
  REP(__i, (v).size()) cerr << ((v)[__i]) << ", "; \
  cerr << endl
#define PRINT(x) cout << x << endl
#define all(x) x.begin(), x.end()
#define MM << " " <<
int main() {
    int N;
    cin >> N;
    // A,B,Cは自然数
    // A = N/B - C/B N/B > N/C x
    // N-1以下のABの解の個数
    int ans = 0;
    int a,b = 1;

    for (int a=1;a<=N;a++){
        for(int b=1;b<=N/a;b++){
            if(a*b<N) ans++;
        }
    }
    

    cout << ans << endl;
}
