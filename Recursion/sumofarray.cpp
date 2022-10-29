#include<iostream>
using namespace std;

int sumation(int *arr,int size){
    if (size==0){
        return 0;
    }
    if(size==1){
        return arr[0];
    }    
   int remainingsum = sumation(arr+1,size-1);
   int sum=arr[0]+ remainingsum;
   return sum;
}
 int main(){
     int arr[5]={1,2,3,4,5};
     int size=5;

    cout<< sumation (arr,size)<<endl;
 }