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
    int N;
    string S;
    cin >> N >> S;

    int W=0;

    vi white(N+1,0); //wの累積和

    //黒に出会うまでに白が多いか黒が多いか？
    REP(i,N){
        if(S[i]=='.')W++; //ここまでの白の数
        white[i+1]=W;
    }

    int ans=2*100000+1;

    REP(i,N+1){ //切り分け作業 //i以降が黒くなるとすると
        int change_black = white[N]-white[i]; 
        int change_white = i-white[i];
        ans = min(ans,change_black+change_white); //i番目まで白くすると
    }



    cout << ans << endl;
    
}

