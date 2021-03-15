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
    cin >> N;
    //B-Aで始めなければいけない時間がわかる

    vector<ll> A(N);
    vector<ll> st(N);
    for(int i=0;i<N;i++){
        ll a,b;
        cin >> a >> b;
        A[i]=a;//かかる時間
        st[i]=b;//simekiri時間
        // cout << i << " : " << st[i] << endl;
    }

    vector<int> ord(N);
    iota(ord.begin(),ord.end(),0);
    //始めるべき時間順にソート、始めるべき時間が同じ場合はかかる時間が多いものから行う
    sort(ord.begin(),ord.end(),[&](int x,int y){
        if(st[x]==st[y]) return A[x]>A[y];
        else return st[x]<st[y];
    });

    ll sum=0;//累積じかん
    for(int i=0;i<N;i++){
        int ci = ord[i];
        // cout << sum << " " << st[ci] << " " << A[ci] << endl;
        if(sum+A[ci]>st[ci]){
            cout << "No" << endl;
            return 0;
        }
        sum += A[ci]; //累積時間をたす
    }

    cout << "Yes" << endl;

    return 0;

}

