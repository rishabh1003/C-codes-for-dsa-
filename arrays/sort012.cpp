#include<bits/stdc++.h>
using namespace std;

void sortarray(int arr[],int n){
    int  count[100000]={},k=0;
    for (int i=0;i<n;i++){
        if (arr[i]==0){
            count[k++]=arr[i];
        }
    }
    for (int j=0;j<n;j++){
        if (arr[j]==1){
            count[k++]=arr[j];
        }

    }
    for (int w = 0; w < n; w++)
    {
        if (arr[w]==2){
            count[k++]=arr[w];
        }
    }
    
    for (int l=0;l<n;l++){
        cout<<count[l]<<" ";
        
    }
    cout<<endl;
}
  int main(){
   
   int arr[7]={2,2,2,1,1,1,0};
      
    sortarray(arr,7);
     
  }