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
    int N;
    cin >> N;
    string s;
    cin >> s;
    //それぞれの文字の最初に出現した位置をとる
    //  a b c d e
    // 0 1 2 3 4 5

    vector<int> kind(N+1,0);
    
    set<char> alpha;
    map<char,int> M; //char first_index

    for(char c='a';c<='z';c++){
        M[c] = N;
    }

    REP(i,N){
        alpha.insert(s[i]);
        kind[i+1] = alpha.size();
        M[s[i]]= min(i,M[s[i]]);
    }


    int Q;
    cin >> Q;
    REP(dummy,Q){
        int type;
        cin >> type;
        if(type==1){
            int i;
            char c;
            cin >> i >> c;
            i--;

            char before = s[i];
            char after = c;

            s[i] = c;
            kind[i+1]--;

            int end = M[before];
            if(i==end){
                FOR(j,i+1,N){
                    if(s[i]==before){
                        M[before] = j;
                        break;
                    }
                    kind[j+1]--;
                }
            }else{
                int tmp=N;
                FOR(j,i+1,end){
                kind[j+1]--;
            }
            M[before] = end;
            }


            end =  M[after];
            

            FOR(j,i,end){
                kind[i+1]++;
            }
            if(i<end) M[after]=i;
        }

        if(type==2){
            int l,r;
            cin >>  l >> r;
            l--,r--;

            cout << kind[r+1]-kind[l] << endl;
        }
    }



}

