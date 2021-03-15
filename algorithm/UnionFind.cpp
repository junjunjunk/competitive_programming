#include <vector>

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