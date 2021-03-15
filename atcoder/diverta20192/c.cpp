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
    cin>> N;
    vector<int> A(N);
    for(int i=0;i<N;i++)cin >> A[i];
    sort(A.begin(),A.end());

    vector<pii> ans;
    while(A.size()!=2){
        int tmp = A[0]-A[A.size()-1];
        ans.push_back(pii(A[0],A[A.size()-1]));
        A.erase(A.begin()+0);
        A.erase(A.begin()+A.size()-1);
        A.insert(A.begin()+0,tmp);
    }


    cout << A[1]-A[0] << endl;
    ans.push_back(pii(A[A.size()-1],A[0]));


    for(int i=0;i<ans.size();i++){
        cout << ans[i].first << " " << ans[i].second << endl;
    }

}

