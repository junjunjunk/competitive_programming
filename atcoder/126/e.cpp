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

struct UnionFind {
  // parentの番号を格納する。親だった場合は-(その集合のサイズ)
  vector<int> Parent;

  //作成時は全て-1なので木が全て独立している状態
  UnionFind(int N) { Parent = vector<int>(N, -1); }

  // Aがどのグループに属しているか調べる
  int root(int A) {
    if (Parent[A] < 0)
      return A;
    else {
      return Parent[A] = root(Parent[A]);
    }
  }

  //自分のいるグループの頂点数を調べる
  int size(int A) { return -Parent[root(A)]; }

  // AとBをくっつける
  bool merge(int A, int B) {
    // AとBを繋げるのではなくroot(A)とroot(B)を繋げる
    A = root(A);
    B = root(B);
    if (A == B) {
      //すでに繋がれているので繋がない
      return false;
    }

    //大きい方（A）に小さい方（B）をくっつけたい
    if (size(A) < size(B)) swap(A, B);

    // Aのサイズを変更する
    Parent[A] += Parent[B];
    // Bの親をAに変更する
    Parent[B] = A;

    return true;
  }
};

int main() {
    int N,M;
    cin >> N >> M;
    vi X(M),Y(M),Z(M);

    REP(i,M){
        cin >> X[i] >> Y[i] >> Z[i];
        X[i]--,Y[i]--;
    }

    UnionFind uf(N);
    REP(i,M){
        uf.merge(X[i],Y[i]);
    }

    set<int> se;
    //setを使うという思考が抜けてる  

    REP(i,N){
        se.insert( uf.root(i) );
    }

    cout << se.size() << endl;

}

