/**
*    author:  Dooloper
*    created: 02.05.2020 20:53:44
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
    int N;cin>>N;
    int M;cin>>M;
    int Q;cin>>Q;
    vector<int>a(Q);
    vector<int>b(Q);
    vector<int>c(Q);
    vector<int>d(Q);
    int keep1, keep2,keep3,kee4;

    for(int i = 0; i < Q; i++){
        cin>>keep1>>keep2>>keep3>>kee4;
        a.at(i)=keep1;
        // cin>>hoge;
        b.at(i)=keep2;
        // cin>>hoge;
        c.at(i)=keep3;
        // cin>>hoge;
        d.at(i)=kee4;
    }


    vector<int>A(N,1);
    ll cnt = 0;
    ll max = 0;

    

   return 0;
}