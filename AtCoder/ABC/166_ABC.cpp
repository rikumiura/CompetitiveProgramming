/**
*    author:  Dooloper
*    created: 05.05.2020 20:40:04
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
#define N 100010

int main() {
    cin.tie(0);
    int n,m,h[N],ma[N];
    cin>>n>>m;
    // cout<<n<<" "<<m;
    // vector<int> h(N);
    // vector<int> ma(N);
    int a,b;
    for(int i = 1; i <= n; i++){
        cin>>h[i];
        ma[i]=0;
    }
    for(int i = 0;i < m; i++){
        cin>>a>>b;
        ma[a] = max(ma[a],h[b]);
        ma[b] = max(ma[b],h[a]);
    }
    int ans = 0;
    for(int i = 1; i <= n; i++){
            ans+=h[i]>ma[i];
    }
    cout<<ans<<endl;
    return 0;
}