#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[7]={2,5,1,8,2,9,1};
    int k=3;
    int n=7;

int i=0,j=0;
int sum=0;
int msum=INT_MIN;

 while(j<n){
      sum=sum+arr[j];

      if (j-i+1 <k){
        j++;
      }

      else if (j-i+1 ==k){
          msum=max(msum,sum);
          sum=sum-arr[i];
          i++;j++;
      }



 }
 cout<<msum<<endl;
 

}