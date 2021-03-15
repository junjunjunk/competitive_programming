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

int main() {
  int n;
  cin >> n;
  vector<string> s(n);

  REP(i, n) cin >> s[i];

  unordered_map<string, int> M;
  int ans = 0;
  REP(i, n) {
    if (M.count(s[i]) == 0) ans++;
    M[s[i]]++;
  }

  cout << ans << endl;
}
