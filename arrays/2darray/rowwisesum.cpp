#include<bits/stdc++.h>
using namespace std;

void printsum(int arr[][4], int row,int col){
    int maxsum=INT_MIN;
    for(int i=0;i<row;i++){
        int sum=0;
        
        for(int j=0;j<col;j++){
            sum+=arr[i][j];
           
        }

         maxsum=max(maxsum,sum);
    }

  cout<<maxsum<<endl;  
}

int main(){
int arr[3][4];
   // int arr[3][4]={{1,11,111,1111},{2,22,222,2222},{3,33,333,3333}};
   // taking row wise input 
  for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cin>>arr[i][j];
        }
    }

    

     for(int i=0;i<3;i++){
        for(int j=0;j<4;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
   printsum(arr,3,4);
return 0;
}