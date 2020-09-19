/*
  GCD は 最大公約数
  lcm は 最小公倍数
*/

/**
*    author:  Dooloper
*    created: 19.09.2020 00:39:40
**/

#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <utility>
#include <algorithm>
#include <queue>
#include <deque>
#include <stack>
#include <cmath>
#include <functional>
#include <cassert>


using namespace std;
typedef unsigned long long ull;
typedef long long ll;
#define PI 3.14159265358979323846264338327950L



ll GCD(ll x, ll y){
  if( y == 0){
    return x;
  }else{
    return GCD(y, x % y);
  }
}

ll LCM(ll x, ll y){
  return x / GCD(x, y) * y;
}



int main() {
    cin.tie(0);
    /**
     * ABC109 C
     * この問題は初期値Xと各地点の距離の最大公約数を求めるといい．
     */
    int N, X;
    cin >> N >> X;
    vector<int> x(N, 0);

    for (int i = 0; i < N; i++){
      cin >> x[i];
    }

    /*
     * 3つ以上の値の最大公約数を求めるには
     * ある2つの最大公約数と別の一個の最大公約数
     * という操作を全ての値に適応すれば良い
     */
    ll res = 0;
    for (int i = 0; i < N; i++){
      res = GCD(res, abs(X - x[i]));
    }
    cout << res << endl;

    /*
      ABC148 C
      最小公倍数を求めるだけ
    */
    int A, B;
    cin >> A >> B;
    cout << LCM(A, B) << endl;
    return 0;
}
