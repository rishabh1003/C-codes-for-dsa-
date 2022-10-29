#include<iostream>
#include<vector>

using namespace std;

void merge (int arr1[],int n,int arr2[],int m,int arr3[]){
   int i=0,j=0;

   int k=0;

   while(i<n && j<m){
      if (arr1[i]< arr2[j]){
         arr3[k]=arr1[i];
         i++;k++;
      }
      else{
         arr3[k]=arr2[j];
         k++;
         j++;
      }

   }
   // copy first element k ko
   while(i<n){
      arr3[k++]=arr1[i++];
   }
   // copy the second array k reamining ko
   while(j<m){
      arr3[k++]=arr2[j++];
   }
      


   
}

void print (int arr3[],int k){
   for(int i=0;i<k;i++){
      cout<<arr3[i]<<endl;
   }
}




int main(){

 int arr1[5]={1,3,5,7,9};
 int arr2[3]={2,4,6};

  int arr3[8]={0};

  merge(arr1,5,arr2,3,arr3);

  print(arr3,8);




   return 0; 
}

/*class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
     int i=0,j=0;
     vector<int> result;
     while(i<m && j<n)
     {
         if(nums1[i] < nums2[j])
         {
             result.push_back(nums1[i]);
             i++;
         }
         else
         {
             result.push_back(nums2[j]);
             j++;
         }
     }
    
    while(i<m)
    {
        result.push_back(nums1[i]);
        i++;
    }
    while(j<n)
    {
        result.push_back(nums2[j]);
        j++;
    }
        
    for(int i=0; i<result.size(); i++)
    {
         nums1[i] = result[i];
    }
    
    }
};*/