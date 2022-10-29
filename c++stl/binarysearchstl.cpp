#include<iostream>
#include <algorithm>
using namespace std;

int main(){
    int arr[]={1,10,40,40,40,50,60,100};
    int n= sizeof(arr)/sizeof(int);

    // search in a sorted array

    int key;
    //cin>>key;

    bool present = binary_search(arr,arr+n,key);

    /*if (present){
        cout<<"present";

    }
    else{
        cout<<"not present";
    }*/

    // two more things 
    // get a index of the element 
    //lower bound(s,e,key) and upper_key(s,e,key)

  auto lb=lower_bound(arr,arr+n,40);
  cout<<"lower bound of 40 is "<<lb-arr<<endl;

  auto ub=upper_bound(arr,arr+n,40);
  cout<<"upper bound of 40 is "<<ub-arr<<endl;

  cout<<"frequency of 40 is "<<ub-lb;

}