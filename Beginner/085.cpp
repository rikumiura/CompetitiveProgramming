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
typedef long long ll;

using namespace std;

int main() {
    int N;cin>>N;
    int Y;cin>>Y;

    int countTen;
    int countFive;
    int countOne;

    countTen = Y/10000;
    Y %= 10000;
    countFive = Y/5000;
    Y %= 5000;
    countOne = Y/1000;
    Y %= 1000;

    if(Y!=0){
        cout<<-1 -1 -1<<endl;
        return 0;
    }

    

    return 0;
}