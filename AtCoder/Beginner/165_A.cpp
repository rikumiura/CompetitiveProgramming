/**
*    author:  Dooloper
*    created: 02.05.2020 20:53:33
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
    int K,A,B;
    cin>>K>>A>>B;
    for(int i = A; i <= B; i++){
        if(i%K ==0){
            cout<<"OK"<<endl;
            return 0;
        }
    }
    cout << "NG" <<endl;
    return 0;
}