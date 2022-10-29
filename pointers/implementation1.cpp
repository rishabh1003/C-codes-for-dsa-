#include<iostream>
using namespace std;

int main(){
    int num=5; 

    cout<<num<<endl;

    // address showing operator -->&

    cout<<"address of num is "<<&num<<endl;
       int *ptr=&num;

       cout<<"value is :"<<*ptr<<endl;
        cout<<"value is :"<<ptr<<endl;
        cout<<"value is :"<<*&num<<endl;
    double d=4.3;
    double *p=&d;
     
      cout<<"value is :"<<*p<<endl;
       cout<<"value is :"<<p<<endl;

       cout<< " size of integer is"<<sizeof (num)<<endl;
       cout<< " size of pointer  is"<<sizeof (ptr)<<endl;
       cout<< " size of pointer  is"<<sizeof (p)<<endl;
       




    return 0;

}