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
//文字列　数え上げ　ペアリングする

int main() {
    int N;
    cin >> N;  
    vector<string> s(N);
    int ans = 0;
    int cntA,cntB,cntBA;
    cntA=0;
    cntB=0;
    cntBA=0;

    FOR(i,0,N){
        cin >> s[i];

        FOR(j,0,s[i].size()-1){
            if(s[i][j]=='A'&&s[i][j+1]=='B')ans++;
        }

        char start = s[i][0];
        char end = s[i][s[i].size()-1];
        if(start=='B'&&end=='A')cntBA++;
        else if(end=='A')cntA++;
        else if(start=='B')cntB++;

    }
    


    if(cntA|cntB){
        ans += cntBA+min(cntA,cntB);
    }else{
        ans += max(0,cntBA-1);
    }

    cout << ans << endl;

}

/*
敗因

cntA=cntB=0の時、とちゃんと場合分けしてやれなかったせいでごちゃごちゃに。
もっと丁寧に。

http://drken1215.hatenablog.com/entry/2019/05/12/002400
*/