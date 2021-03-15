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
#define PRINT(x) cout << x << endl
#define all(x) x.begin(),x.end()

int main() {
    string s;
    cin >> s;

    int N = s.size();

    vector<bool> R(N,false);
    vector<bool> L(N,false);
    vector<int> ans(N,1);

    for(int i=0;i<N-1;i++){
        if(s[i]=='R'&&s[i+1]=='L'){
            R[i]=true , L[i+1]=true;
        }
    }
    int series = 0;
    for(int i=0;i<N;i++){
        if(R[i]){
            if(series&1) ans[i+1]+=1;
            ans[i] += series/2 , ans[i+1]+=series/2;
            series = 0;
        }else{
            if(s[i]=='R'){
                series++;
                ans[i]=0;
            }
        }
    }


    for(int i=N;i>=0;i--){
        if(L[i]){
            if(series&1) ans[i-1]+=1;
            ans[i] += series/2 , ans[i-1]+=series/2;
            series = 0;
        }else{
            if(s[i]=='L'){
                series++;
                ans[i]=0;
            }
        }
    }

    for(int i=0;i<N-1;i++){
        cout << ans[i] << " ";
    }

     cout << ans[N-1] << endl;

    return 0;

}

