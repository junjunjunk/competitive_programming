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

int main() {
    int N;
    cin >> N;

    string s = to_string(N);
    int digit = s.size();

    vector<vi> P(10,vi(10,0));
    //P[head][tail]=何パターンあるか

    for(int i=1;i<=N;i++){
        int head,tail;
        tail = i%10;
        int digit = floor(log10(i))+1;
        if(i<10) head = tail;
        else head = i/int(pow(10,digit-1));
        P[head][tail]++;
    }

    ll ans =0;

    for(int i=1;i<=9;i++){
        for(int j=1;j<=9;j++){
           ans+=P[i][j]*P[j][i];
        }
    }

    cout << ans << endl;

}

