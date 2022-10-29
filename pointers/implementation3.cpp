#include<iostream>
using namespace std;

int main(){
    // pointer arithmatic 
   int i=3;
   int *t=&i;
   *t=*t+1;

   cout<<*t<<endl;
   cout<<"before t"<<t<<endl;
   t=t+1;
   cout<<"after increamenting t"<<t<<endl;
     return 0;


}