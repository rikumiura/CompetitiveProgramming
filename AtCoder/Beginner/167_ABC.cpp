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
    int A,B,C,K;
    cin>>A>>B>>C>>K;
    int cnt = 0;
    int card = K;
    cnt += min(card,A)*1;
    card -= min(card,A);
    card -= min(card,B);
    cnt += min(card,C)*(-1);
    cout<<cnt<<endl;
    return 0;
}