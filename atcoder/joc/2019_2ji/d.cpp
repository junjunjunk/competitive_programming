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
    int M,R;
    cin >> M >> R;
    string rs = to_string(R);

    vector<vector<int> > mp(10,vector<int>(10,1)); //押すコストを追加しておく
    for(int j=1;j<=9;j++){
        if(j%3==1){
            mp[0][j]+= 1 + int((j+2)/3)-1;
        }
        if(j%3==2){
            mp[0][j]+= 2 + int((j+2)/3)-1;
        }
        if(j%3==0){
            mp[0][j]+= 3 + int((j+2)/3)-1;
        }

        mp[j][0] = mp[0][j];
    }

    for(int i=1;i<=9;i++){
        for(int j=1;j<=9;j++){
            if(i==j)continue;
            mp[i][j] += abs(int((i+2)/3)-int((j+2)/3)); //縦の移動
            int a,b;
            a = i%3 , b = j%3;
            if(a==0) a+=3;
            if(b==0) b+=3;
            mp[i][j] += abs(a-b); //横の移動
        }
    }

    int current = 0;
    ll ans = 10e11;
    ll tmpans = 0;
    for(ll a=R;a<=100000000;a+=M){
        tmpans = 0;
        string t = to_string(a);
        current = 0;
        for(int i=0;i<t.size();i++){
            int n = t[i]-'0';
            tmpans += mp[current][n];
            current = n;
        }

        ans = min(ans,tmpans);

    }
    cout << ans << endl;

}

