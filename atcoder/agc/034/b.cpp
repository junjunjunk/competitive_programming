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

ll count(string s){
    ll countx = 0;
    ll ans = 0;
    for(int i=s.size();i>=0;i--){
        if(s[i]=='X')countx++;
        if(s[i]=='A')ans+=countx;
    }

    return ans;
}


int main() {
    string s;
    cin >> s;

    int seqabc=0;
    char prev = 'z';
    int countbc = 0;
    ll ans=0;
    string tmps = "";

    for(int i=0;i<s.size();i++){
        if( (s[i]=='A'&&prev=='B') || (s[i]=='B'&&prev=='B') || (s[i]=='C'&&prev!='B')  ){
            ans += count(tmps);
            tmps ="";
        }

        if(s[i]=='A')tmps+='A';
        if(s[i]=='C'&&prev=='B')tmps+='X';
        prev = s[i];
    }

    ans += count(tmps);

    cout << ans << endl;



}

