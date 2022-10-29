#include<bits/stdc++.h>
using namespace std;
void swapAlternate(int arr[],int size){
    int temp;
    for(int i=0;i<size;i+=2){
        if (i+1 <size){
            //swap(arr[i],arr[i+1]);
            temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
           //manually done above code

        }
    }
}
void printarray(int arr[],int size){
      for (int i=0;i<size;i++){
          cout<<arr[i]<<" ";
      }
      cout<<endl;
}
int main(){
    int even[8]={5,2,9,4,7,6,1,0};
    int odd[5]={11,33,9,76,43};

    swapAlternate(even,8);
    swapAlternate(odd,5);

    printarray(even,8);
    printarray(odd,5);

    
}