template <class T>
void bubbleSort(T A[], int N) {
  for (int i = 0; i < N - 1; i++) {
    for (int j = N - 1; i + 1 < j + 1; --j) {
      if (A[j] < A[j - 1]) {
        std::swap(A[j], A[j - 1]);
      }
    }
  }

  return;
}

template <class T>
void bubbleSort(vector<T> &A) {
  size_t N = A.size();

  for (int i = 0; i < N - 1; i++) {
    for (int j = N - 1; i + 1 < j + 1; --j) {
      if (A[j] < A[j - 1]) {
        std::swap(A[j], A[j - 1]);
      }
    }
  }

  return;
}

/*
--description--
泡が水面に上がっていくように配列の要素が動く。

配列をソート済みとそうでない部分に分ける。
末尾から、隣接する要素を比べ、大小関係が逆ならば交換する。

O(N^2) stable
交換回数は反転数もしくは転倒数と呼ばれて列の乱れ具合を表す。
*/