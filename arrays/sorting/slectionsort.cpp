#include<bits/stdc++.h>
using namespace std;

int main(){
   int arr[6]={3,6,4,7,2,9};
   int n=6;
   for(int i=0;i<n-1;i++){
       int minindx=i;

       for (int j=i+1;j<n;j++){
           if (arr[j]<arr[minindx]){
               minindx=j;
           }
       }
       swap(arr[minindx],arr[i]);

   }
   for(int k=0;k<n;k++){
       cout<<arr[k]<<" ";
   }
   cout<<endl;
}