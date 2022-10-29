#include<iostream>
using namespace std;

int main(){
    char name[20];
    cout<<"enter your name"<<endl;
    cin>>name;
    name[2]='\b0';

    cout<<"your name is "<<endl;
    cout<<name;


return 0;
}