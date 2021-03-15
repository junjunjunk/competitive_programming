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
    ll N,K;
    cin >> N >> K;
    vi A(N);
    vi F(N);
    REP(i,N) cin >> A[i];
    REP(i,N) cin >> F[i];

    //Ai*Fiの最大を最小化するa
    //AiとFiの組み合わせとして最適なものは何か？→Kによって変わるのでは？
    //Aiを降順,Fiを昇順にした組み合わせが最大がもっとも小さくなる。なぜならAiを左右交換すると必ず最大値が大きくなる

    sort(A.begin(),A.end());
    sort(F.begin(),F.end());
    reverse(F.begin(),F.end());

    priority_queue<pll> pq;
    REP(i,N) pq.push(pll(A[i]*F[i],F[i]) );
    
    pll p = pq.top();
    
    while(p.first!=0&&K>=1){
        pq.pop();
        p.first -= p.second;
        pq.push(p);
        K--;
        p = pq.top();
    }

    cout << p.first << endl;

}

