#include <iostream>
#include<limits.h>
using namespace std;
void update(int num[],int n){
    cout<<endl<<"inside the function"<<endl;
//updating the array
num[0]=120;
    //printing the array
    for (int i=0;i<n;i++){
        cout<<num [i] <<" ";
    }
    cout<<endl;

    cout<<"going back to the main function"<<endl;

}

int main(){
    int arr[3]={1,2,3};

    update(arr,3);

    cout<<endl<<"printing in main function"<<endl;
    for(int i=0;i<3;i++){
        cout<<arr[i]<<" ";

    }
    cout<<endl;
    return 0;
}