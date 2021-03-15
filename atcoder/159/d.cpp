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
#define DEBUG_VEC(v)                               \
  cerr << #v << ": ";                              \
  REP(__i, (v).size()) cerr << ((v)[__i]) << ", "; \
  cerr << endl
#define PRINT(x) cout << x << endl
#define all(x) x.begin(), x.end()

#include <iostream>
using namespace std;

long long comb2(long long n) {
  return n * (n - 1) / 2;  // int*intだとオーバーフローする
}

int main() {
  int N;
  cin >> N;

  vector<int> A(N);
  unordered_map<int, int> M;

  REP(i, N) {
    cin >> A[i];
    M[A[i]]++;
  }

  ll sum = 0;
  for (auto pair : M) {
    sum += comb2(pair.second);
  }

  for (int i = 0; i < N; i++) {
    ll tsum = sum;
    tsum -= comb2(M[A[i]]);
    tsum += comb2(M[A[i]] - 1);
    cout << tsum << endl;
  }

  return 0;
}
