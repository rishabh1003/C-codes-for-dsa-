#include<bits/stdc++.h>
using namespace std;
bool ispossible(int arr[], int n, int k,int mid ){
    int scount =1;
    int bordsum=0;

    for(int i=0;i<n;i++){
        if(bordsum+arr[i]<mid){
            bordsum+=arr[i];
        }
        else{
            scount++;
            if (scount<=k && arr[i]<=mid){
               bordsum=arr[i];
            }
            else{
                return false;
            }
        }
    }
    return true;
}
int allocateboard(int  arr[], int n, int k){
    int s=0;
    int sum=0;

    for(int i=0;i<n;i++){
        sum+=arr[i];
    }
    int e=sum;
    int mid=s+(e-s)/2;
    int ans=-1;

    while(s<=e){
        if (ispossible(arr,n,k,mid)){
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=s+(e-s)/2;
    }
    return ans;
}

int main(){
 int arr[4]={5,5,5,5};
 cout<< allocateboard(arr,4,2)<<endl;
}