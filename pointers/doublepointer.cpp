#include<iostream>
using namespace std ;
int main(){
    int i=5;
    int *p=&i;

    int ** p2 =&p;

    cout<<endl<<endl<<"sab sahi chal raha ha "<<endl;
    cout<<"printing p"<<p<<endl;
    cout<<"address of p"<<&p <<endl;

    cout<<*p2<<endl;

    // printing the value of i in different
    // ways using pointers 

    cout<<i<<endl;
    cout<<*p<<endl;
    cout<<**p2<<endl;

    // printing the value of &p which is stored in the *p
     cout<<&i<<endl;
     cout<<p<<endl;
     cout<<*p2<<endl;

     // printing the address of the double pointer pointing 
     // to the &p

     cout<<&p<<endl;
     cout<<p2<<endl;

    return 0;
}