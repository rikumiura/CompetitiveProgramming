/**
*    author:  Dooloper
*    created: 03.05.2020 20:39:45
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
    vector<ll> keep(1000000100);

    for(int i = 0; i< 1000000100; i++){
        keep[i] = i*i*i*i*i;
    }
    for(ll i:keep){

        auto result = find(keep.begin(), keep.end(), i+X);
        if(result == keep.end()){
            if(*keep.end() == i + X){
                cout<<i<<" "<<*keep.end()<<endl;
                return 0;
            }
        }else {
            cout<<i<<" "<<*result<<endl;
            return 0;
        }
    }
    return 0;
}