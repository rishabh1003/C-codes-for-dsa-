#include<iostream>
using namespace std;
void saydigit(int n, string arr[]){
    // base case 

    if (n==0){
        return;

    }

    // processing 

    int digit= n%10;
    n=n/10;
// due to this statement we are printing thr value first 
//and then call the function thats why it is printing the
// reverse which is head recursion or we can say non tail recursion
    //cout<<arr[digit]<<endl;

    // recursive call
    saydigit(n,arr);
   cout<<arr[digit]<<endl;
 
}

 int main(){

     string arr[10] = {"zero", "one", "two", "three",
                         "four", "five", "six"
                        , "seven", "eight", "nine"};
     int n;
     cin>>n;

     saydigit(n,arr);
 }