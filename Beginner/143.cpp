#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <cstring>
#include <vector>
#include <set>
#include <map>
#include <unordered_map>
#include <queue>
#include <deque>
#include <stack>
#include <algorithm>
#include <bitset>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <numeric>
#include <functional>
#include <cctype>
#include <list>
#include <limits>
#include <cassert>
#include <random>
#include <time.h>
#include <unordered_set>

using namespace std;
typedef long long ll;

int main(){
    // int N;cin>>N;
    // for(int s = 0; s < (1<<N); s++){//for(int i = 0; i < N; i++)
    //     vector<int> ans;
    //     for(int i = 0; i<N; i++){
    //         //要素iを使うかどうか
    //         if(s &(1<<i))ans.push_back(i);
    //         // cout<<s<<endl;
    //     }
    //     cout<<"{";
    //     for (int i = 0; i < ans.size(); i++)
    //     {
    //         cout<<ans[i];
    //         //途中なら,を出力
    //         if(i < ans.size() - 1) cout<<",";
    //     }
    //     cout<<"}"<<endl;
        
    // }
    int N;cin>>N;
    vector<int> L(N);
    for(int i = 0; i < N; i++){
        cin>>L[i];
    }

    sort(L.begin(),L.end());

    ll ans=0;

    for(int i = 0; i < N; i++){
        int a = L[i];
        for(int j = i + 1; j < N; j++){
            int b = L[j];
            ans++;
            }
        }
    
    cout<<ans<<endl;
}