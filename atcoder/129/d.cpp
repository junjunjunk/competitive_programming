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
    int H,W;
    cin >> H >> W;

    vector< vector<char> > yx(H,vector<char>(W));
    for(int y=0;y<H;y++){
        for(int x=0;x<W;x++){
            cin >> yx[y][x];
        }
    }

    vector< vector<int> > column(H,vector<int>(W,0));
    vector< vector<int> > row(H,vector<int>(W,0));

    int y=0;
    int x=0;
    int score = 0;

    for(int y=0;y<H;y++){
        int score = 0;
        for(int x=0;x<W;x++){
            if(yx[y][x]=='#'){
                score=0;
            }else score++;
            column[y][x]=max(score,column[y][x]);
        }
        int x = W-1;
        score = 0;
        while(x>=0){
            score = max(score,column[y][x]);
            if(column[y][x]==0){
                score = 0;
                x--;
                continue;
            }
            column[y][x]=score;
            x--;
        }

    }

    for(int x=0;x<W;x++){
        int score = 0;
        for(int y=0;y<H;y++){
            if(yx[y][x]=='#')score=0;
            else score++;
            row[y][x]=max(score,row[y][x]);
        }

        int y = H-1;
        score = 0;
        while(y>=0){
            score = max(score,row[y][x]);
            if(row[y][x]==0){
                score = 0;
                y--;
                continue;
            }
            row[y][x]=score;
            y--;
        }
    }

    int ans = 0;
    for(int y=0;y<H;y++){
         for(int x=0;x<W;x++){
            ans = max(ans,column[y][x]+row[y][x]-1);
         }
    }
    
    cout << ans << endl;
   
    

}

