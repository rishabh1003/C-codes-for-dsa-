#include<iostream>
using namespace std;

bool binarysearch( int *arr,int s, int e, int k){
      // base cases

      // basecase1 element not found 
      if (s>e){
          return false;
      }
    int mid=s+(e-s)/2;
      if (mid==k){
          return true;
      }

          if (arr[mid]<k){
              return binarysearch(arr,mid+1,e,k);
          }
          else{
              return binarysearch(arr,s,mid-1,k);
          }
      }

int main(){
    int arr[6] = {2,4,6,10,14,18};
    int size = 6;
    int key = 8;

    if (binarysearch(arr,0,5,key)){
        cout<<"element present "<<endl;
    }
    else{
        cout<<"not present "<<endl;
    }


}