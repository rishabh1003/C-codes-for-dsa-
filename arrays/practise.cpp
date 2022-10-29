#include <iostream>
using namespace std;

void printarray ( int arr[],int size){
    cout<<"printing the array"<<endl;
    for (int i=0;i<size;i++){
        cout<<arr[i]<<" ";

    }
    cout<<endl;
    cout<<"printing done "<<endl;
}

int main(){
  //  int number [15];
    //acessing an array
   // cout<<"value at zero index "<<number[0]<<endl;
  // int second[3]={5,7,11};
   //cout<<"value at zero index "<<second[2]<<endl;

   int third[15]={4,7};
   /* cout<<"printing the array"<<endl;
   for(int i=0;i<15;i++){
       cout<<third[i]<<" ";
   }*/

   /*int fourth[10]={0};

for (int i=0;i<10;i++){
    cout<< fourth[i] <<" ";
}*/
printarray(third,15);
}
   