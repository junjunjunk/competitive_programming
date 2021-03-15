int binary_search(int key) {
  int ng = ;  //「index = 0」が条件を満たすこともあるので、初期値は -1
  int ok = ;  // 「index =
              // a.size()-1」が条件を満たさないこともあるので、初期値は
              // a.size()

  /* ok と ng のどちらが大きいかわからないことを考慮 */
  while (abs(ok - ng) > 1) {
    int mid = (ok + ng) / 2;

    if (isOK(mid, key))
      ok = mid;
    else
      ng = mid;
  }
  return ok;
}

// https://twitter.com/meguru_comp/status/697008509376835584