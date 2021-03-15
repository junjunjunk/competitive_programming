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

bool is_palindrome(string s){
    int n = s.size();
    for(int i=0;i<n/2;i++){
        if(s[i]!=s[n-1-i]) return false;
    }

    return true;
}

int main(){
    string s;
    cin >> s;
    int n = s.size();

    bool a,b,c;
    int index_a,index_b;
    index_a = (n-1)/2 , index_b = ((n+3)/2)-1;
    a = is_palindrome(s);
    b = is_palindrome(s.substr(0,index_a));
    c = is_palindrome(s.substr(index_b));

    if(a&&b&&c) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}

