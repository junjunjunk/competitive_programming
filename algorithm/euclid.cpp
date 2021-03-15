long long gcd(long long A, long long B) {  // A>B
  if (A < B) swap(A, B);
  if (B == 0)
    return A;
  else {
    return gcd(B, A % B);
  }
}

long long Euclid(vector<long long> A) {  //複数のものの最大公約数を求める
  long long ans = A[0];
  for (int i = 1; i < A.size(); i++) {
    ans = gcd(ans, A[i]);
  }

  return ans;
}
 
