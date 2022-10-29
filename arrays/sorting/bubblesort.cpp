#include<bits/stdc++.h>
using namespace std;

int main(){
   /*int arr[6]={3,6,4,7,2,9};
   int n=6;

   for(int i=1;i<n;i++){
       // round 1 to n-1
       for (int j=0;j<n-i;j++){
          // process element to the n-i index  
          if (arr[j]>arr[j+1]){
              swap(arr[j],arr[j+1]);
          } 
       }
   }

   for(int k=0;k<n;k++){
       cout<<arr[k]<<" ";
   }
   cout<<endl;*/

   //more optimised 

   int arr[6]={3,6,4,7,2,9};
   int n=6;

   for(int i=1;i<n;i++){
       // round 1 to n-1
       bool swapped=false;
       for (int j=0;j<n-i;j++){
          // process element to the n-i index  
          if (arr[j]>arr[j+1]){
              swap(arr[j],arr[j+1]);
              swapped =true;
          } 
       }
       if (swapped=false){
           // already sorted
           break;
       }
   }

   for(int k=0;k<n;k++){
       cout<<arr[k]<<" ";
   }
   cout<<endl;

} 