/**
*    author:  Dooloper
*    created: 02.05.2020 20:53:40
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
    ll X;cin>>X;
    ll money = 100;
    ll cnt;
    for(int i = 0; ;i++){
        money *= 1.01;
        if(X<=money){
            cnt = i +1;
            break;
        }
    }
    cout<<cnt<<endl;
    return 0;
}