#include <iostream>
#include <vector>
#include <map>
using namespace std;

struct UnionFind {
    vector<int> par;
    
    UnionFind(int n) : par(n, -1) { }
    void init(int n) { par.assign(n, -1); }
    
    int root(int x) {
        if (par[x] < 0) return x;
        else return par[x] = root(par[x]);
    }
    
    bool issame(int x, int y) {
        return root(x) == root(y);
    }
    
    bool merge(int x, int y) {
        x = root(x); y = root(y);
        if (x == y) return false;
        if (par[x] > par[y]) swap(x, y); // merge technique
        par[x] += par[y];
        par[y] = x;
        return true;
    }
    
    int size(int x) {
        return -par[root(x)];
    }
};

const long long MAX = 110000;
long long N;
vector<long long> x, y;

long long solve() {
    UnionFind uf(MAX * 2);
    x.resize(N); y.resize(N);
    for (int i = 0; i < N; ++i) cin >> x[i] >> y[i], uf.merge(x[i], y[i] + MAX);

    // 連結成分ごとに、左ノードと右ノードの個数を数える
    map<int, long long> mx, my;
    for (int i = 0; i < MAX; ++i) mx[uf.root(i)]++;
    for (int i = MAX; i < MAX*2; ++i) my[uf.root(i)]++;
    long long res = 0;
    for (int r = 0; r < MAX*2; ++r) res += mx[r] * my[r];
    return res - N;
}

int main() {
    cin >> N;
    cout << solve() << endl;
}
