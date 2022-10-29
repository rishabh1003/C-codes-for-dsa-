#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[7]={4,1,1,1,2,3,5};
    int k=5;
    int n=7;
    long long int sum=0;
    int maxi=INT_MIN;

    int i=0;int j=0;
    while(j<n){
        sum+=arr[j];
         if (sum<k){
            j++;
         }
         else if (sum==k){
              maxi=max(maxi,j-i+1);
              j++;
            
         }
         else{
            while(sum>k){
                sum=sum-arr[i];
                i++;
            }
            j++;
         }
    }
    cout<<maxi<<endl;
}