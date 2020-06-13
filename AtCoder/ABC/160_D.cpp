/**
*    author:  Dooloper
*    created: 30.04.2020 21:17:32
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

int cnt(int K, int N, vector<vector<int>> G){
    int cnt = 0;
    queue<int> Q;
    vector<int> hoge(N,0);
    bool flag = true;
    while (flag){
        for(int i = 0;i < Q.)
        Q.push()
    }
    
    return -1;
}

int main() {
    cin.tie(0);

    int N,X,Y;
    cin>>N>>X>>Y;

    vector<vector<int>> G(N);
    G.at(0).push_back(1);
    if (X-1==0){
        G.at(0).push_back(Y-1);
    }

    for(int i = 1; i < N; i++){
        G.at(i).push_back(i-1);
        G.at(i).push_back(i+1);
        if(X-1 == i){
            G.at(i).push_back(Y-1);
        }else if(Y-1 == i){
            G.at(i).push_back(X-1);
            }
    }


    


    return 0;
}