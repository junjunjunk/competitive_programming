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
    string s;
    cin >> s;

    int tmp0=0;
    int tmp1=0;
    REP(i,s.length()){ 
        if(i%2==0&&s[i]=='1')tmp0++;
        if(i%2==1&&s[i]=='0')tmp0++;
        //0からスタート

        if(i%2==0&&s[i]=='0')tmp1++;
        if(i%2==1&&s[i]=='1')tmp1++;
        //1からスタート
    }


    cout << min(tmp0,tmp1) << endl;
}

