#include<bits/stdc++.h>
using namespace std;
 void rearrange(long long *arr, int n) 
    {    vector< long long int>v;
         int N=n-1;
         
         if (n==1){
             cout<<arr[0]<<endl;
         }
        if (n%2==0){
    	for(int i=0;i<n/2;i++){
    	    v.push_back(arr[N]);
    	    v.push_back(arr[i]);
    	    N--;
    	}
      }
      
      else{
          for(int i=0;i<n/2;i++){
             v.push_back(arr[N]);
    	    v.push_back(arr[i]);
    	    N--;
          }
          v.push_back(N);
      }
      
      for(int i=0;i<n;i++){
          arr[i]=v[i];
      }
      
      
    }
 

 int main(){
    long long int  arr[8]={1969,2677,3142,4631,4764,5748,6476,6487};
    int size=8;
    rearrange(arr,size);
 }