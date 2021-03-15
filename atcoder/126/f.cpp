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
    int M,K;
    //llであることに注意
    cin >> M >> K;

    string ans;

    if(M==1){
        if(K==0){
            ans = "0 0 1 1";
        }else{
            ans = "-1";
        }
            cout << ans << endl;
        return 0;
    }


    if(0<=K&&K<(1<<M)){
        for(int i=0;i<(1<<M);i++){
            if(i==K)continue;
            cout << i << " ";
        }
        cout << K << " ";

        for(int i=(1<<M)-1LL;0<=i;i--){
            if(i==K)continue;
            cout << i << " ";
        }

        cout << K << endl;
        return 0;

    }else{
        ans = "-1";
    }

    cout << ans << endl;

}

/*
X xor X = 0
0 xor .. xor 2^(M-1) = 0
つまり全部の数のxorをとると0になる、これに気付けるかが重要
立ってるビットを羅列すれば気付けるかな

0,1,2 .... , K , .... 2,1,0

小さいケースからやってこういうの発見してね



*/