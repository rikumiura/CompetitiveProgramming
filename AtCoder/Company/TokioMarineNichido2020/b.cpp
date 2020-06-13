/**
*    author:  Dooloper
*    created: 13.06.2020 21:01:53
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
    ll A, V, B, W, T;
    cin>>A>>V>>B>>W>>T;
    if(abs(B-A) <= (V-W)*T){
        cout << "YES"<<endl;
    }else {
        cout << "NO" << endl;
    }
    return 0;
}