#include<bits/stdc++.h>
using namespace std;
void printingSubsequence(int i,vector<int> v, int isum,int sum, int *arr,int n ){
   if (i==n){
    if (isum==sum){
        for(auto it: v){
            cout<<it<<" ";

        }
        cout<<endl;
    }
    return;
   }

   v.push_back(arr[i]);
   isum+=arr[i];

   printingSubsequence(i+1,v,isum,sum,arr,n);      
   
   isum-=arr[i];
   v.pop_back();

   printingSubsequence(i+1,v,isum,sum,arr,n);
          
}


int main(){
    int arr[]={1,2,1};
    int n=3;
    int sum=2;
    vector<int> v;

    printingSubsequence(0,v,0,sum,arr ,n);

}