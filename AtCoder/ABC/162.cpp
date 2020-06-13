/**
*    author:  Dooloper
*    created: 13.04.2020 22:15:49
**/

#include <iostream>
#include <vector>
#include <map>
#include <string>
#include <utility>
#include <algorithm>

using namespace std;
typedef unsigned long long ll;


ll count_num(char first, char second, char therd, int N,string S,vector<int> cnt){
   ll sum = 0;
   for(int i = 0; i < N; i++){
      if(S[i] == first){
         for(int j = i+1; j < N; j++){
            if(j+1 < N &&S[j] == second){
               sum += cnt[N-1] - cnt[j+1];
               if( 2*j -i < N &&S[2*j - i] == therd){
                  sum--;
               }
               if(j+1<N && S[j+1] == therd){
                  sum++;
               }
            }
         }
      }
   }
   // cout<<sum<<" ";
   return sum;
}

int main() {
   cin.tie(0);

   int N;cin>>N;
   string S;cin>>S;

   vector<int> cntR(N,0);
   vector<int> cntG(N,0);
   vector<int> cntB(N,0);

   char R = 'R';
   char G = 'G';
   char B = 'B';

   if(S[0] == R){
         cntR[0] = 1;
   }else if(S[0] == G){
         cntG[0] = 1;
   }else{
         cntB[0] = 1;
   }

   for(int i = 1; i < N; i++){
      if(S[i] == R){
         cntR[i] = 1;
      }else if(S[i] == G){
         cntG[i] = 1;
      }else{
         cntB[i] = 1;
      }
      cntR[i] += cntR[i-1];
      cntG[i] += cntG[i-1];
      cntB[i] += cntB[i-1];
   }

   ll sum = 0;

   // for(int i = 0;i<N;i++)
   //    cout<<cntG[i];

   sum += count_num(R,G,B,N,S,cntB);
   // cout<<sum<<endl;
   sum += count_num(R,B,G,N,S,cntG);
   // cout<<sum<<endl;
   sum += count_num(G,R,B,N,S,cntB);
   // cout<<sum<<endl;
   sum += count_num(G,B,R,N,S,cntR);
   // cout<<sum<<endl;
   sum += count_num(B,R,G,N,S,cntG);
   // cout<<sum<<endl;
   sum += count_num(B,G,R,N,S,cntR);
   // cout<<sum<<endl;

   cout<<sum<<endl;
   return 0;
}