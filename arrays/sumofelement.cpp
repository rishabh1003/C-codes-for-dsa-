#include<iostream>
using namespace std;

int main(){
    int size;
    cin>>size;
    int sum=0;
    int arr[100];
    for (int i=0;i<size;i++){

        cin>>arr[i];
        sum+=arr[i];
    }

    cout<<sum<<endl;

}