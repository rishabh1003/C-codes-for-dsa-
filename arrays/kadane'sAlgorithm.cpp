#include<bits/stdc++.h>
using namespace std;

int maxsumsubarray(int *arr, int n){
    int maxsum=INT_MIN;
    int cursum=0;

    for(int i=0;i<n;i++){
        cursum+=arr[i];

        if (cursum>maxsum){
            maxsum=cursum;
        }

        if (cursum<0){
            cursum=0;
        }

    }

    return maxsum;
}

int main(){
    int arr[]={5,-4,-2,6,-1};
    int n=sizeof(arr)/sizeof(arr[0]);


}