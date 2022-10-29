#include<iostream>
using namespace std;

int main(){ 
    int n;
   cin>>n;

   
// creating the jagged array
   int **arr= new int*[n];
    for(int i=0;i<n;i++){
       arr[i]=new int [i+1];

    }
   //taking the input 
   for(int i=0;i<n;i++){
          for(int j=0;j<n;j++){
              cin>>arr[i][j];
          }cout<<endl;
    }
     cout << "============= " << endl;

// printing the 2d array 
     for(int i=0;i<n;i++){
          for(int j=0;j<n;j++){
              cout<<arr[i][j]<<" ";
          }cout<<endl;
    }
   // releasing the memory 
    for (int i = 0; i < n; i++)
    {
        delete []arr[i];
    }

    delete []arr;
}