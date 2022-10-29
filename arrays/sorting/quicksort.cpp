#include<bits/stdc++.h>
using namespace std;

int partition(int arr[],int s,int e){
  int pivot=arr[s];

  int cnt=0;
  for(int i=s+1;i<e;i++){
    if (arr[i]<=pivot){
        cnt++;
    }
  }
 // place pivot element at right index
  int pivotIndex=s+cnt;

  swap(arr[s],arr[pivotIndex]);



 // left and right part sambhalna ha 

 int i=s, j=e;

 while(i<pivotIndex and j>pivotIndex){
    while(arr[i]<=pivot){
        i++;
    }

    while(arr[j]>pivot){
        j--;
    }
    
    if (i<pivotIndex and j>pivotIndex){
        swap(arr[i++],arr[j--]);
    }
  
 }

return pivotIndex;


}
void quickSort(int arr[],int s,int e){
   if (s>=e){
    return;
   }

   //partition kareg
  int  p=partition(arr,s,e);

   // left part sort karo
   quickSort(arr,s,p-1);

   // right part sort karo
   quickSort(arr,p+1,e);
}



int main(){

int arr[5]={2,4,1,6,9};
int n=5;

quickSort(arr,0,n-1);

for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
   
} cout<<endl;
    return 0;
}