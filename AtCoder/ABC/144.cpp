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
double unit_r = 180.0/ M_PI;

int main() {
    int A,B,X;cin>>A>>B>>X;
    double bDush = (double)B-(double)X/(A*A);
    double b2Dush = 2*bDush;
    if(A*bDush <= A*B/2){
        double ans = atan(b2Dush/A);
        printf("%.16f",ans*unit_r);
        return 0;
    }
    else {
        double aDush = (2*A*((double)B-bDush))/(double)B;
        double ans = atan(aDush/B)*unit_r;
        printf("%.16f",90-ans);
    }
    return 0;
}