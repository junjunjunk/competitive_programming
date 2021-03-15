#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  string s;
  cin >> N >> s;

  int R_right = 0;
  int W_left = 0;
  for (int i = 0; i < N; i++) {
    if (s[i] == 'R') R_right++;
  }

  int b = 0;
  int min_ans = N;
  for (int i = 0; i < N + 1; i++) {
    min_ans = min(min_ans, max(R_right, W_left));
    if (i == N) continue;
    if (s[i] == 'R')
      R_right -= 1;
    else
      W_left += 1;
  }

  cout << min_ans << endl;
}
