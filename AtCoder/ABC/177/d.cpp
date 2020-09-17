/**
*    author:  Dooloper
*    created: 17.09.2020 23:37:37
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

int main() {
    cin.tie(0);
    int N, M;
    cin >> N >> M;

    vector<pair<int, int>> AB(M);
    int a, b;
    for (int i = 0; i < M; i++){
      cin >> a >> b;
      AB[i] = make_pair(a, b);
    }

    

    return 0;
}
