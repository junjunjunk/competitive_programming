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
int main() {
    string s;
    cin >> s;


    //111
    //114 -> 222
    //252 -> 333
    //321 -> 333

    if(s[0]>=s[1]&&s[0]>=s[2]){
        s[1]=s[0];
        s[2]=s[0];
    }else{
        s[0]+=1;
        s[1]=s[0];
        s[2]=s[0];
    }

    PRINT(s);

}

