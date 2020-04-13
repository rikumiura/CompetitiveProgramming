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

int main() {
    int N;cin>>N;
    vector<int> A(N);
    for(int i = 0; i < N ; i++){
        cin>>A[i];
    }

    vector<int> evenNum(N);

    for(int i = 0 ; i < N; i++){
        if(A[i] % 2== 0)evenNum[i] = 1;
        else evenNum[i] = 2;
    }
    ll ans = 0;
    for(int i = 0; i < N ; i++){
        int a = 1;
        for(int j = 0; j < N; j++){
            if(j < i) a *= (3-evenNum[j]);
            else if( j == i) a *= evenNum[j];
            else a *= 3;
        }
        ans += a;
    }

    cout<< ans << endl;

    return 0;
}