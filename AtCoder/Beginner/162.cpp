/**
*    author:  Dooloper
*    created: 12.04.2020 22:03:09
**/

#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <utility>
#include <algorithm>

using namespace std;
typedef unsigned long ll;
   
   
   string S;cin>>S;
   vector< vector<int>> cnt (S.size(),vector<int>(3,0));

ll countPair( char first, char second, char therd, int N){
    ll sum = 0;
    
    for(int i = 0;i < N, i++){
        if(S[i] == first){
            for(int j = i+1; j < N; j++){
                if(S[j] == second){
                    switch (therd)
                    {
                    case 'R':
                        sum += cnt[N-1][0] - cnt[j + 1][0];
                        if(S[j+1] == therd) sum++;
                        if(S[2*j - i] == therd) sum--;
                        break;
                    case 'G':
                        sum += cnt[N-1][1] - cnt[j + 1 ][1];
                        if(S[j+1] == therd) sum++;
                        if(S[2*j - i] == therd) sum--;
                        break;
                    case 'B':
                        sum += cnt[N-1][2] - cnt[j + 1][2];
                        if(S[j+1] == therd) sum++;
                        if(S[2*j - i] == therd) sum--;
                        break;
                    default:
                        break;
                    }
                }
            }
        }
    }
    return sum;
}

int main() {
   cin.tie(0);

   int N;cin>>N;

    if(S[0] == 'R') cnt[0][0]++;
    else if(S[0] == 'G') cnt[0][1]++;
    else cnt[0,2]++;

   for(int i = 1; i < S.size(); i++){
       if(S[i] == 'R') {
           cnt[i,0] = cnt[i-1][0]++;
           cnt[i,1] = cnt[i-1 ][1];
           cnt[i,2] = cnt[i-1 ][2];
       }
       else if(S[i] == 'G'){
           cnt[i,0] = cnt[i-1 ][0];
           cnt[i,1] = cnt[i-1 ][1]++;
           cnt[i,2] = cnt[i-1 ][2];
       } 
       else {
           cnt[i,0] = cnt[i-1 ][0];
           cnt[i,1] = cnt[i-1 ][1];
           cnt[i,2] = cnt[i-1 ][2]++;
       }
   }

   ll sum = 0;

   sum += countPair('R','G','B',N);
   sum += countPair('R','B','G',N);
   sum += countPair('G','R','B',N);
   sum += countPair('G','B','R',N);
   sum += countPair('B','R','G',N);
   sum += countPair('B','G','R',N);
   
cout<<sum<<endl;


   return 0;
}