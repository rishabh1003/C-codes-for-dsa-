#include<bits/stdc++.h>
using namespace std;

int main(){
  int arr[]={2,3,6,7};
  int target =7;
  int n=sizeof(arr)/sizeof(arr[0]);
  int sum=0;
  vector<vector<int>> ans;
  vector<int>v;

  for(int i=0;i<n;i++){
   


    if (arr[i]==target){
        v.push_back(arr[i]);
        ans.push_back(v);

    }

             
     
  }

  
}