#include<iostream>
using namespace std ;

int main (){
   /* int arr [10]={2,3,54,6};

    cout<<"address of first memory block"<<arr<<endl;
    cout<<arr[0]<<endl;
    cout<<"address of first memory block"<<&arr[0]<<endl;
    
    cout<<"4th "<<*arr<<endl;
    cout<<"4th "<<*arr + 1<<endl;

     */

    int arr[10]={1,23,4,5};

    // error
   // arr=arr+1;
   // you can't do the cahnges in the name in above code 

   int *p = &arr[0];

   p=p+1;

   cout<<*p<<endl;
    
    

    
}