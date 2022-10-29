#include<bits/stdc++.h>
using namespace std;

void sortarray(int arr[],int n){
    int count[100]={},k=0;
    for (int i=0;i<n;i++){
        if (arr[i]==0){
            count[k++]=arr[i];
        }
    }
    for (int j=0;j<n;j++){
        if (arr[j]==1){
            count[k++]=arr[j];
        }
    }
    for (int l=0;l<n;l++){
        cout<<count[l]<<" ";
        
    }
    cout<<endl;
}
  int main(){
   
   int arr[10]={0,1,0,0,0,1,1,1,0,0};
      
    sortarray(arr,10);
     
  }

  // optimised approch
  /*void printArray(int arr[], int n) {
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void sortOne(int arr[], int n) {

    int left = 0, right = n-1;

    while(left < right) {

        while(arr[left] == 0 && left < right )  {
            left++;
        }

        while(arr[right]==1 && left < right){
            right--;
        }

        //agar yha pohoch gye ho, iska matlab
        //arr[left]==1 and arr[right]==0
        if(left<right)
        {
            swap(arr[left], arr[right]);
            left++;
            right--;
        }
    }

}

int main() {

    int arr[8] = {1,1,0,0,0,0,1,0};

    sortOne(arr, 8);
    printArray(arr, 8);


    return 0;
}*/