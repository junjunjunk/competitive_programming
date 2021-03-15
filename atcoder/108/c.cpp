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
        int N,K;
        cin >> N >> K;

        vl V(((2*N)/K)+1,0);
        FOR(i,1,(2*N)/K){
            V[i] = (i*K)-1;
        }


}

/*
a+b,b+c,c+kは全てkの倍数、ということは
(a+b,b+c,c+k)の組み合わせになる。

２つの数字でのKの倍数の作り方は
K-1<=Nの場合　(1,K-1),(2,K-2)...(K-1,1)    K-1個

K-1>N (K>N+1)の場合　　... (N-1,K-(N-1)),(N,K-N) 
(1)(K-1)-N=0であれば セーフ
(2)(K-1)-N=1であれば 
(1,K-1)と（K-1,1）はアウト
となるから (K-1)-{(K-1)-N}*2=2*N-(K-1)
という考察は無駄

*/

/*
K が奇数の時、a, b, c を K で割ったあまりはすべて 0 である必要があります。K が偶数の時、a, b, c を
K で割ったあまりはすべて 0 であるか、あるいはすべて K/2 である必要があります。このような組の個数
は、N 以下で K で割って 0 あまるものの個数と K/2 あまるものの個数から求めることができるので、この
問題を解くことができました。
http://drken1215.hatenablog.com/entry/2018/09/02/011000
*/

