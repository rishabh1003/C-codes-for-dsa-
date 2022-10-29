#include<bits/stdc++.h>
using namespace std;

int main(){
    priority_queue<int> pq;
    vector<int> v;
 int n=8;
 int arr[n]={1,3,-1,-3,5,3,6,7};
 int k=3;

 int i=0;int j=0;int maxi=INT_MIN;
  while(j<n){
      pq.push(arr[j]);
      if (j-i+1 <k){
        j++;
      }
      else if(j-i+1 ==k) {
           v.push_back(pq.top());
          if (pq.top()==(arr[i])){
            pq.pop();
          }
          i++;j++;

      }
  }

  for(auto i:v){
    cout<<i<<" ";
  }
  cout<<endl;
}