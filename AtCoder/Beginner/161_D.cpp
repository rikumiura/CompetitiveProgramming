/**
*    author:  Dooloper
*    created: 17.04.2020 13:15:39
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
    int K;cin>>K;
    queue<int> Q;
    for(int i = 1; i < 10; i++){
        Q.push(i);
    }
    int take;
    for (int i = 0; i < K; i++)
    {
        take = Q.front();
        Q.pop();
        Q.push(take * 10 + take % 10 - 1);
        Q.push(take * 10 + take % 10);
        Q.push(take * 10 + take % 10 +1);
    }
    cout<<take<<endl;
    
    return 0;
}