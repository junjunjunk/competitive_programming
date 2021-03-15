#include<vector>
#include<iostream>
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
    int cnt = 0;

    for(int i=0;i<N;i++){
        int a,b;
        cin>> a>> b;
        if( a==b ){
            cnt++;
            if(cnt==3)break;
        }else{
            cnt = 0;
        }
    }

    if (cnt == 3) cout<< "Yes"<< endl;
    else cout << "No" << endl;

}
