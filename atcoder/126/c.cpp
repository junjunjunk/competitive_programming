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

    vector<long double> bw(21);
    bw[0]=1;
    for(int i=1;i<21;i++){
        bw[i] = bw[i-1] * 2;
    }

    double ans =0;

    FOR(i,1,N+1){ //サイコロのどの面が出たのか
        FOR(j,0,21){
            if(K<=i*bw[j]){
                ans += (long double)1.0/ ((long double)bw[j]);
                break;
            }
        }
    }

    cout << fixed << setprecision(10) << (ans)/N << endl;

}

//敗因浮動小数点の扱い方を知らなかった
//https://qiita.com/a4rcvv/items/05febcf410c51009a29a


/*
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    long long N, K;
    cin >> N >> K;
    
    double res = 0.0;
    for (long long n = 1; n <= N; ++n) {
        double tmp = 1.0;
        long long nn = n;
        while (nn < K) nn *= 2, tmp /= 2.0;
        res += tmp;
    }
    res /= N;
    cout << fixed << setprecision(10) << res << endl;
}

こっちの方が綺麗

*/