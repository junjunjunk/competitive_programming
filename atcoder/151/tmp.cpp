#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
using namespace std;

int main(int argc, char *argv[]) {
  int n,k;
  cin >> n >> k;
  string s;
  cin >> s;

  // 両端サボってる人に声がけすると３人改善 SSS..SS. -> .....SS.
  // 両端サボってる人がいなくなったらsを左から走査してる場合は右にサボってる人がいる場合に声がけする　2人改善
  // 両端どちらもサボってる人がいなくなったら 1人改善


  for(int i=1;i<n-1;i++){
    if(k<=0)break; //声掛けできる回数が無い
    if(s[i-1]=='S'&&s[i]=='S'&&s[i+1]=='S'){
      s[i-1]='.',s[i]='.',s[i+1]='.';
      k--;
    }
  }

  for(int i=0;i<n-1;i++){
    if(k<=0)break; 
    if(s[i]=='S'&&s[i+1]=='S'){
      s[i]='.',s[i+1]='.';
      k--;
    }
  }

  for(int i=0;i<n;i++){
    if(k<=0)break; 
    if(s[i]=='S'){
      s[i]='.';
      k--;
    }
  }

  int ans = count(s.begin(), s.end(), '.') ;

  cout << ans << endl;
  return 0;
}
