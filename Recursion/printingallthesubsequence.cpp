#include<bits/stdc++.h>
using namespace std;
void print(int i,vector<int> &v, int arr[],int n){
   if (i==n){
    for(auto it: v){
        cout<<it<<" ";
    }
    if (v.size()==0){
        cout<<"{}"<<endl;
    }
    cout<<endl;
    return;
   }
  v.push_back(arr[i]);
  print(i+1,v,arr,n);
  v.pop_back();
  print(i+1,v,arr,n);


}

int main(){
  int arr[]={3,1,2};
  int n=3;
 vector<int>v;
  print(0,v,arr,n);
}