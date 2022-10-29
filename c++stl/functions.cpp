#include<iostream>
#include <algorithm>
using namespace std;

int main(){
    int arr[]={1,10,11,9,100};
    int n= sizeof(arr)/sizeof(int);

    // search

    int key=1;
    cin>>key;
    auto it = find(arr,arr+n,key);
    int index=it-arr;
     
     if (index==n){
         cout<<key<<"not present";
     }
     else{
           cout<<key <<"present";
     }

}