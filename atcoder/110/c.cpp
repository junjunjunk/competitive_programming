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
    string s,t;
    cin >> s;
    cin >> t;

    //azzel z<->p e<->l 
    //apple
    map<char,char> ms;
    map<char,char> mt;

    //aappa
    //ppaap に対応できない

    //入れ替えるものの個数が互いに同じか
    //aappa a3p2
    //ppaap p3a2
    //abcde
    //fghij

    //aaaacccc
    //cacacaca これに対応できない a<->c,a

    // bool ok = true;
    // FOR(i,0,s.length()){
    //     if(ms[s[i]]==mt[t[i]]&&ms[t[i]]==mt[s[i]])continue; 
    //     ok = false;
    //     break;
    // }
    //http://drken1215.hatenablog.com/entry/2018/09/23/232100
    //これがやりたかったんでしょ？
    bool ok = true;

    FOR(i,0,s.length()){
        if(!ms[s[i]])ms[s[i]]=t[i];
        else if(ms[s[i]]!=t[i]){
            ok = false;
            break;
        }
        if(!mt[t[i]])mt[t[i]]=s[i];
        else if(mt[t[i]]!=s[i]){
            ok = false;
            break;
        }
    }

    if(ok){
        PRINT("Yes");
    }else{
        PRINT("No");
    }

}

