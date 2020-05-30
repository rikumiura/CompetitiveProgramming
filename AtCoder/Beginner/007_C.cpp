/**
*    author:  Dooloper
*    created: 30.05.2020 02:26:02
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
typedef unsigned long long ll;

int main() {
    cin.tie(0);
    int N;cin>>N;
    vector<int>A(N+1);
    for(int i = 0; i < N+1; i++){
        cin>>A[i];
    }
    int node = 0;
    int nextNode;
    if(A[N] > pow(2,N)*2){
        cout<<-1<<endl;
        return 0;
    }else{
        node += A[N];
        nextNode = node;
    }
    for(int i = N-1; i > 0; i--){
        if(nextNode > pow(2,i-1)*2 || pow(2,i-1)-A[i-1]*2 <= 0){
            node = -1;
            break;
        }
        nextNode = min( (int)(pow(2,i-1)-A[i-1]*2) , nextNode);
        nextNode += A[i-1];
        node += nextNode;
    cout<<node<<endl;
    }
}

