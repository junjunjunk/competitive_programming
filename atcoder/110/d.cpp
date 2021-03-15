// #include <bits/stdc++.h>
// using namespace std;

// typedef long long ll;
// typedef vector<int> vi;
// typedef vector<ll> vl;
// typedef pair<int, int> pii;
// typedef pair<ll, ll> pll;

// #define REP(i, n) for (int i = 0; i < (int)(n); i++)
// #define FOR(i, a, b) for (int i = (int)(a); i < (int)(b); i++)
// #define FORR(i, a, b) for (int i = (int)(b)-1; i >= (int)(a); i--)

// #define CHMIN(a, b) (a) = min((a), (b))
// #define CHMAX(a, b) (a) = max((a), (b))

// #define DEBUG(x) cout << #x << ": " << (x) << endl
// #define PRINT(x) cout << x << endl
// #define all(x) x.begin(),x.end()

// //素因数分解

// int main() {

//     int N; //約数
//     ll M; //積
//     cin >> N >> M;



// }


// /*
// もしかしてDP？
// 状態を考えてみよう・・・
// いやでも違うよなぁ

// 解説を読んで
// http://drken1215.hatenablog.com/entry/2018/09/23/224100
// まずは素数べきで考える



// */

#include <iostream>
#include <vector>
using namespace std;

vector<pair<long long, long long> > prime_factorize(long long n) {
    vector<pair<long long, long long> > res;
    for (long long p = 2; p * p <= n; ++p) {
        if (n % p != 0) continue;
        int num = 0;
        while (n % p == 0) { ++num; n /= p; }
        res.push_back(make_pair(p, num));
    }
    if (n != 1) res.push_back(make_pair(n, 1));
    return res;
}

const int MAX = 210000;
const int MOD = 1000000007;

long long fac[MAX], finv[MAX], inv[MAX];
void COMinit(){
    fac[0] = fac[1] = 1;
    finv[0] = finv[1] = 1;
    inv[1] = 1;
    for(int i = 2; i < MAX; i++){
        fac[i] = fac[i-1] * i % MOD;
        inv[i] = MOD - inv[MOD%i] * (MOD/i) % MOD;
        finv[i] = finv[i-1] * inv[i] % MOD;
    }
}
long long COM(int n, int k){
    if(n < k) return 0;
    if (n < 0 || k < 0) return 0;
    return fac[n] * (finv[k] * finv[n-k] % MOD) % MOD;
}

int main() {
    int N, M;
    COMinit();
    cin >> N >> M;
    auto vec = prime_factorize(M);
    long long res = 1;
    for (auto pa : vec) {
        int num = pa.second;
        long long tmp = COM(num+N-1, N-1);
        res = (res * tmp) % MOD;
    }
    cout << res << endl;
}          