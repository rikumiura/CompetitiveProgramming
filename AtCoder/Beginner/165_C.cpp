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

int N,M,Q;
vector<int> a,b,c,d;
int ans;

void dfs(vector<int> A){
    if(A.size() == N+1){
        int now = 0;
        for(int i = 0; i < Q; i++){
            if(A[b[i]] - A[a[i]] == c[i])now += d[i];
        }
        ans = max(ans, now);
        return;
    }

    A.push_back(A.back());
    while(A.back() <= M){
        dfs(A);
        A.back()++;
    }
}

int main() {
    cin.tie(0);
    cin>>N;cin>>M;cin>>Q;
    a = b = c = d = vector<int> (Q);
    for(int i = 0; i < Q; i++){
        cin>>a[i] >> b[i] >>c[i] >>d[i];
    }

    dfs(vector<int> (1,1));
    cout << ans << endl;
   return 0;
}