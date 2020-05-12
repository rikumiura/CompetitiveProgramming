/**
*    author:  Dooloper
*    created: 12.05.2020 15:45:57
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
    string S;cin>>S;
    string T;cin>>T;
    S += T.back();
    if(equal(S.begin(), S.end(), T.begin(),T.end()))
        cout<<"Yes"<<endl;
    else 
        cout<<"No"<<endl;
    return 0;
}