// bfs atcoder088-d
//queueを用いるのが通常
//最短手数や迷路の正解を求めたりするのに適している
#include <algorithm>
#include <iostream>
#include <queue>
#include <string>
#include <vector>

using namespace std;

int main() {
  int h, w;
  cin >> h >> w;

  vector<string> g(h);
  int black = 0;

  for (int i = 0; i < h; i++) {
    cin >> g[i];
    for (int j = 0; j < w; j++) {
      black += g[i][j] == '#';  //塗りつぶされているところをカウント
    }
  }

  queue<pair<int, int>> q;
  q.emplace(0, 0);

  vector<vector<int>> dist(h, vector<int>(w, -1));  //二次元ベクターを定義
  dist[0][0] = 0;

  const int dy[] = {0, 1, 0, -1};
  const int dx[] = {1, 0, -1, 0};

  while (!q.empty()) {
    int y = q.front().first;
    int x = q.front().second;
    q.pop();
    for (int k = 0; k < 4; k++) {
      int yy = y + dy[k];
      int xx = x + dx[k];
      if (yy < 0 || xx < 0 || yy >= h || xx >= w) continue;  //はみ出た場合
      if (g[yy][xx] == '#') continue;    //塗りつぶされている場合
      if (dist[yy][xx] != -1) continue;  //訪問済みの場合
      dist[yy][xx] = dist[y][x] + 1;     //初期位置からの移動距離
      q.emplace(yy, xx);
    }
  }

  if (dist[h - 1][w - 1] == -1) {
    cout << -1 << endl;
  } else {
    cout << (h * w) - dist[h - 1][w - 1] - black - 1 << endl;
  }
}
