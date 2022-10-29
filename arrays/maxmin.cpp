#include <iostream>
#include<limits.h>
using namespace std;
int getmax(int arr[],int n){
   
   int maxi=INT_MIN;
   for (int i=0;i<n;i++){
       //if (arr[i]>max){
         //  max=arr[i];
       //}


       /* this function take two argument and 
       return the maximum of it */ 
       maxi=max(maxi,arr[i]);
       
   }
   return maxi;


}

int getmin(int arr[],int n){
    int mini=INT_MAX;
   for (int i=0;i<n;i++){
       /* if (arr[i]<min){
            min=arr[i];
        }*/

        /* this function will return the minimum of it as 
        above max function*/
        mini=min(mini,arr[i]);
   }
   return mini;
}

int main(){
     int size;
     cin>>size;

     int num[100];
     for (int i=0;i<size;i++){
         cin>>num[i];
     }

     cout<<"printing the maximum number  "<<getmax(num,size)<<endl;
     cout<<"printing the minimum value   "<<getmin(num,size)<<endl;
}