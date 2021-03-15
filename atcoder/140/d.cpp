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
//変更範囲部分の幸福度は変わらない、境目のみに影響がある
//LR or RL を変えても意味がない
//L|R ---- R|L  もしくは R|L --- L|Rのみ変えられる？
//最大増える幸福度は２
    int N,K;
    cin >> N >> K;
    string s;
    cin >> s;

    int r2l = 0, l2r = 0; 
    int happiness = 0;
    //L...R であれば RL...LR と捉える
    REP(i,s.size()-1){
        if(s[i]==s[i+1])happiness++;
    }

    REP(i,s.size()-1){
        if(s[i]=='L'&&s[i+1]=='R'){
            l2r++;
        }
        if(s[i]=='R'&&s[i+1]=='L'){
            r2l++;
        }
    }
    int times = min(K,min(r2l,l2r));
    happiness += times*2;
    K -= times;
    r2l -= times;
    l2r -= times;

    if(r2l>0&&K>0){
        happiness++;
        K-= 1;
    }

    if(l2r>0&&K>0){
        happiness++;
        K-=1;
    }

    cout << happiness << endl;



}

