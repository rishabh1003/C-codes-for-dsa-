#include<bits/stdc++.h>
using namespace std;
void reverse(int *arr,int n,int i,int j){
       if (i>j){
        return;
       }

       swap(arr[i],arr[j]);
       reverse(arr,n,i+1,j-1);
}

int main(){
    int arr[]={1,2,3,4,5};
    int n= sizeof(arr)/sizeof(arr[0]);
    int i=0;int j=n-1;
    reverse(arr,n,i,j);

    for(int k=0;k<n;k++){
        cout<<arr[k]<<" ";
    }
    cout<<endl;
}