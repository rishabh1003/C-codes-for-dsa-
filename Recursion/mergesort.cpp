#include <iostream>
using namespace std;

void merge(int *arr,int s,int e){
    int mid=(s+e)/2;
    int len1=mid-s+1;
    int len2=e-mid;

    int *first=new int [len1];
    int *second = new int[len2];

    // copy values 
    int mainarrayindex=s;
    for(int i=0; i<len1;i++){
        first[i]=arr[mainarrayindex++];
    }

     mainarrayindex=mid +1;
    for(int i=0; i<len2;i++){
        second[i]=arr[mainarrayindex++];
    }

    // merge to sorted array 
    int index1=0;
    int index2=0;

    mainarrayindex=s;
    while(index1<len1 && index2<len2){
        if (first[index1]<second[index2]){
            arr[mainarrayindex++]=first[index1++];
        }
        else{
            arr[mainarrayindex++]=second[index2++];
        }
        }
        while(index1<len1){
            arr[mainarrayindex++]=first[index1++];
        }
        while(index2< len2){
             arr[mainarrayindex++]=second[index2++];
        }

        delete []first;
        delete[]second;
    }

    


void  mergesort(int *arr, int s, int e){
  // base case 
  if (s>=e){
    return ;
  }
    int mid=(s+e)/2;

    // left part sort karna ha 
    mergesort(arr,s,mid);
    // right part sort karna 
    mergesort(arr,mid+1,e);

    // merge 
    merge(arr,s,e);

}

int main(){
    int arr[15]={3,7,0,1,5,8,3,2,34,66,87,23,12,12,12};
    int n=15;

    mergesort(arr,0,n-1);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";

    }cout<<endl;
}