#include<iostream>
using namespace std;
void reverse(int num[],int size){
    int start=0;
    int end=size-1;
     
     while(start<=end){
         swap (num[start],num[end]);
             start++;
             end--; 
    }
}
void printarray(int num[],int size){
     for (int i=0;i<size;i++){
         cout<<num[i]<<" ";

     }
     cout<<endl;
}



int main(){
     int arr[6] = {1,4,0,5,-2,15};
     int brr[5] = {2,6,3,9,4};

     reverse(arr, 6);
     reverse(brr, 5);

     printarray(arr, 6);
     printarray(brr, 5);

     return 0;
}