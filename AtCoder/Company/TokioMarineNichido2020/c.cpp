/**
*    author:  Dooloper
*    created: 13.06.2020 21:07:04
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
#include <cmath>
#include <functional>
#include <cassert>


using namespace std;
typedef unsigned long long ull;
typedef long long ll;
#define PI 3.14159265358979323846264338327950L

vector<int> sumlight(vector<int> A){
    vector<int> light(A.size(), 0);
    
    int N = A.size();
    for (int i = 0; i < A.size(); i++){
        light[max(i - A[i], 0)]++;
        if(i + A[i] +1< N)
        light[i + A[i] + 1]--;
    }
    for (int i = 1; i < A.size();i++){
        light[i] += light[i - 1];
    }
    
    return light;
}
int main() {
    cin.tie(0);
    int N, K;
    cin >> N >> K;
    vector<int> A(N, 0);
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    for (int i = 0; i < K; i++){
        A = sumlight(A);
    }
    for(int i: A){
        cout << i << " ";
    }
    cout << endl;
    return 0;
}