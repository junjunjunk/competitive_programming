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
    int N,A,B,C,D;
    cin >> N >> A >> B >> C >> D;
    A--,B--,C--,D--;
    string s;
    cin >> s;

    bool ans = true;

    if(C==D){
        cout << "No" << endl;
        return 0;
    }

    if(C<D){
        int seq_rock = 0;

        for(int i=A;i<s.size();i++){ //石が2つ以上連続してないかチェック
          if(i==C)break;
          if(s[i]=='#'){
              seq_rock++;
              if(seq_rock>1){
                  ans = false;
                  break;
              }
          }
          else seq_rock=0;
        }

        seq_rock = 0;
        for(int i=B;i<s.size();i++){ //石が2つ以上連続してないかチェック
          if(i==D)break;
          if(s[i]=='#'){
              seq_rock++;
              if(seq_rock>1){
                  ans = false;
                  break;
              }
          }
          else seq_rock=0;
        }
    }

    if(C>D){
        int seq_rock = 0;

        for(int i=A;i<s.size();i++){ //石が2つ以上連続してないかチェック
          if(i==C)break;
          if(s[i]=='#'){
              seq_rock++;
              if(seq_rock>1){
                  ans = false;
                  break;
              }
          }
          else seq_rock=0;
        }

        seq_rock = 0;
        bool throughble = false;
        for(int i=B;i<s.size();i++){ //石が2つ以上連続してないかチェック
          if(i+1>=s.size())break;
          if(s[i-1]=='.'&&s[i+1]=='.'&&s[i]=='.'){
              throughble = true;

          }
          if(i==D)break;
          if(s[i]=='#'){
              seq_rock++;
              if(seq_rock>1){
                  ans = false;
                  break;
              }
          }
          else seq_rock=0;
        }

        if(!throughble)ans= false;

    }

    if(ans)cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}

