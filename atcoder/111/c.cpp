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
int main() {
    int n;
    cin >> n;
    vi v(n);

    FOR(i,0,n){
        cin >> v[i];
    }

    map<int,int> even;
    map<int,int> odd;

    for(int i=0;i<n;i++){
        if(i%2==0)odd[v[i]]++;
        else even[v[i]]++;
    }

    even[-1]=0;
    odd[-1]=0;

    int e1,e2,o1,o2;
    e1=-1;
    e2=-1;
    o1=-1;
    o2=-1;

    int e_mn,o_mn;

    for(auto x:even){
        if(e1<x.second){
            e1=x.second;
            e_mn=x.first;
        }
    }


    for(auto x:odd){
        if(o1<x.second){
            o1=x.second;
            o_mn=x.first;
        }
    }

    int rep;

    if(e_mn!=o_mn){
        rep = n-e1-o1;
    }else{
        even.erase(e_mn);
        odd.erase(o_mn);

            for(auto x:even){
        if(e2<x.second){
            e2=x.second;
        }
    }


    for(auto x:odd){
        if(o2<x.second){
            o2=x.second;
        }
    }

        rep = min(n-e1-o2,n-o1-e2);
    }


    cout << rep << endl;

}

