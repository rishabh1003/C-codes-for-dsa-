#include<iostream>
using namespace std;

int main(){
  /*  int n;
    cin>>n;

     // creating 2d array 
    int **arr= new int*[n];
 
    for(int i=0;i<n;i++){
       arr[i]=new int [n];

    }

    // creation done 
    
    // taking input
    
    for(int i=0;i<n;i++){
          for(int j=0;j<n;j++){
              cin>>arr[i][j];
          }cout<<endl;
    }

    cout<<endl;
    for(int i=0;i<n;i++){
          for(int j=0;j<n;j++){
              cout<<arr[i][j]<<" ";
          }cout<<endl;
    }

*/

   int row;
   cin>>row;

   int col;
   cin>>col;
  // creating 2d array 
    int **arr= new int*[row];
 
    for(int i=0;i<row;i++){
       arr[i]=new int [col];

    }

    // creation done 
    
    // taking input
    
    for(int i=0;i<row;i++){
          for(int j=0;j<col;j++){
              cin>>arr[i][j];
          }cout<<endl;
    }

    cout<<endl;
    for(int i=0;i<row;i++){
          for(int j=0;j<col;j++){
              cout<<arr[i][j]<<" ";
          }cout<<endl;
    }

// releasing memory

for(int i=0;i<row;i++){
    delete [] arr[i];
}

delete []arr;


}