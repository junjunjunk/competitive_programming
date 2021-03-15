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

//累積和　ユークリッド　gcd 最大公約数

ll gcd(ll a,ll b){
    if(a<b)swap(a,b);
    if(b==0){
        return a;
    }
    return gcd(b,a%b);
}

int main() {
    int N;
    cin >> N;
    vl A(N);
    REP(i,N) cin >> A[i];

    //累積gcdを作成
    vl forward(N+1),backward(N+1);
    forward[0]=0;
    backward[N]=0;

    FOR(i,0,N){
        forward[i+1]= gcd(forward[i],A[i]);
    }

    FORR(i,0,N){
        backward[i]=gcd(backward[i+1],A[i]);
    }

    ll ans=0;

    FOR(i,0,N){
        ans = CHMAX(ans,gcd(forward[i],backward[i+1]));
    }

    cout << ans << endl;





}

/*
考えたこと

それぞれの1つを除いた最大公約数を求める

全部についての最大公約数を求めて、そこから1つ抜いたものを考えられれば楽なんだけど…
gcd(7,6,8)=1
gcd(6,8)=2
gcd(7,8)=1
gcd(7,6)=1

無理そう


正解
知識を適用するための前提条件を完全に固定してしまうのではなく、柔軟に活用できるようになると強くなれる」が試されている
累積和ならぬ累積 GCD を前処理で求めておくと、高速にわかる




*/