#include<bits/stdc++.h>
using namespace std;
int flipbits(int *arr, int n){
    int count=0; int maxcount=0; int count1=0;
     for(int i=0;i<n;i++){
        if (arr[i] == 0){
           count ++;
           if (count>maxcount){
            maxcount=count;
           }
        }

        else{
            count=0;
            count1++;
        }


     }

     return maxcount+count1;
}

int main(){
    int arr[]={0,0,1,1,0,0};
    int n=sizeof(arr)/sizeof(arr[0]);
    cout<<flipbits(arr,n)<<endl;

}