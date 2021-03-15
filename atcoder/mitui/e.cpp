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
    vi A(N);
    int cpattern=1;
    int tmpcnt = 0; //0の数
    ll ans =0;
    for(int i=0;i<N;i++){
        cin >> A[i];
        if(A[i]==0)tmpcnt++;
    }

    for(int i=3;i>=1;i--){ //色のパターン
        if(tmpcnt==0)break;
        cpattern *= i;
        tmpcnt--;
    }

    vi can_color(N+1,0); //使える色
    can_color[0]=3;

    ll cnt = 1;
    for(int i=0;i<N;i++){
        int ai = A[i];
        cnt *= can_color[ai];
        can_color[ai]--;
        can_color[ai+1]++;
        cnt %= 1000000007;
    }

    cout << cnt << endl;


}
/*
０じゃない限り自分より数字が１小さいやつが前に絶対いる
1の数が0より少なかったら　-> 001 -> ABAorAAB
1の数と0の数が同じであれば 0011 -> ABBAorAAAB
0の数が３-> 3色使っている 2-> ２色使っている　1 -> 一色使っている
*/
