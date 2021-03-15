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
    string s;
    cin >> s;

    string a,b; 
    a =  s.substr(0,2);
    b = s.substr(2);
    bool MMYY = ("01"<=a&&a<="12");
    bool YYMM = ("01"<=b&&b<="12");
    if(YYMM&&MMYY){
        cout << "AMBIGUOUS" << endl;
    }else if(YYMM){
        cout << "YYMM" << endl;
    }else if(MMYY){
        cout << "MMYY" << endl;
    }else{
        cout << "NA" << endl;
    }
}

