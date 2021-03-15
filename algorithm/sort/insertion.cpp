template <class T>
void insertionSort(T A[], int N) {
  for (int i = 1; i < N; ++i) {
    T v = A[i];
    int j = i - 1;
    while (j >= 0 && A[j] > v) {
      A[j + 1] = A[j];
      j--;
    }
    A[j + 1] = v;
  }

  return;
}

template <class T>
void insertionSort(vector<T> &A) {
  size_t N = A.size();

  for (int i = 1; i < N; ++i) {
    T v = A[i];
    int j = i - 1;
    while (j >= 0 && A[j] > v) {
      A[j + 1] = A[j];
      j--;
    }
    A[j + 1] = v;
  }

  return;
}

/*
--description--
手持ちのトランプを並び替えるようなソートアルゴリズム。上記コードは昇順。

1.先頭要素をソート済みとする。
2.未ソート部分の先頭要素vを抜き出し、ソート済みの部分に挿入する。
    挿入方法はソート済み部分の最大値a[j]から順にvと比較する。
        vの方が大きい場合 -> j+1のインデックスにvを代入
        vの方が小さい場合 ->
j+1のインデックスにはjのインデックス値を代入し、j-1のインデックスとvを比較

O(N^2) StableSort.
ある程度整列されたデータに対しては高速に動作する。
*/