#include<iostream>
using namespace std;

int main(){
    //int *p;
   // cout<<*p<<endl;

    // above code  point to some garbage address 
    
 /*   int i=5;

    int *p =0;
    p=&i;

    cout<<p<<endl;
    cout<<*p<<endl;
*/
int num=5;
//int a=num;
//cout<<"a before "<<endl;
//a++;
//cout<<"a after "<<num<<endl;


int *p=&num;
//cout<<"before "<<endl;
//(*p)++;
//cout<<"after "<<num<<endl;
cout<<p<<endl;
//copying the pointer 
int *q = p;
cout<<*q<<endl;
cout<<q<<endl;
//cout<<q<<endl;


}
