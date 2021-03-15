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
    string s;
    cin >> s;

    int series = 0;
    char c = s[0];
    int sw = 0;

    vi V;

    V.push_back(0);

    REP(i,N){ //累積和
        if(s[i]==c){
            series++;
        }else{
            V.push_back(series);
            c = s[i];
            series++;
        }
        if(i==N-1)V.push_back(series);
    }


    int vsize =V.size();
    int d=1;
    if(s[0]=='1')d=0;
    int m=-1;
    for(int i=0;;i++){ //1と1の間にある0はK個1にできる。
        if(i%2==d)m = max(V[min(i+K*2+1,vsize-1)]-V[i],m); //1から始まる時
        else m = max(V[min(i+K*2,vsize-1)]-V[i],m); 

        // max = V[min(i+2*K-1)]
        if((i+K+1)>=vsize-1) break;
    }

    cout << m << endl;


}

