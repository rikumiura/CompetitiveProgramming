/**
*    author:  Dooloper
*    created: 02.05.2020 20:53:47
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


using namespace std;
typedef unsigned long long ll;

int main() {
    cin.tie(0);
    ll A,B,N;
    cin>>A>>B>>N;
    ll x = min(B-1, N);
    ll ans = (ll)(A*x/B)-A*(ll)(x/B);
    cout<<ans<<endl;
    // cout<<(int)(5/2)<<endl;
    return 0;
}