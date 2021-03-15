#include <vector>
#include <iostream>
#include<map>
#include<algorithm>

using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;




int main() {
    ll N,X,M;
    cin >> N >> X >> M;
    // **2 **2 **2 ... どこかで%mで値が小さくなって再スタート
    // どこかで割り切れたらそれ以降ずっと0
    // どこかで１になったらそれ以降ずっと１
    ll ai = X;
    ll sum = 0;
    for(int i=2;i<=N;i++){
        ai = (ai*ai)%M;
        cout << i << " : " << ai << endl;
        sum += ai;
        if(ai==0) break;
    }
}
