#include<bits/stdc++.h>
using namespace std;
int binarysearch(int arr[],int size , int key){
    int start = 0;
    int end=size-1;

    int mid = start+ (end -start)/2;
    
    while(start<=end){
        if (key == arr[mid]  ){
            return mid;
        }
        //go too right wala part 
        if (key>arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid =start+ (end -start)/2;
    }
     return -1;
}
int main(){
    int even[6]={2,4,6,8,12,18};
    int odd[5]={3,8,11,14,16};

     cout<<binarysearch(even,6,18)<<endl;
     cout<<binarysearch(odd,5,8)<<endl;
    
}
