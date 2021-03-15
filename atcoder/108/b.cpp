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
    int x1,x2,y1,y2;
    cin >> x1 >> y1 >> x2 >> y2;
    int dx = (x2-x1); //xの変化
    int dy = (y2-y1); //yの変化
    int x3,x4,y3,y4;
    x3 = x2-dy;
    y3 = y2+dx; 
    x4 = x1-dy;
    y4 = y1+dx;

    cout << x3 << " " << y3 << " " << x4 << " " << y4 << endl;

}

