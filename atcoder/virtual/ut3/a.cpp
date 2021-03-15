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
    int cntyah=0;
    int cnto =0;

    for(int i =0;i<s.size();i++){
        if(s[i]=='y')cntyah |= 1;
        if(s[i]=='a')cntyah |= 1<<1;
        if(s[i]=='h')cntyah |= 1<<2;
        if(s[i]=='o')cnto++;
    }

    if(cntyah==7&&cnto==2)cout << "YES" << endl;
    else cout << "NO" << endl;

}

