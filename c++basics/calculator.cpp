#include <iostream>
using namespace std;

int main(){
    int a,b;
    char op;
    cout<<"enter the value of a "<<endl;
    cin>>a; 
    cout<<"enter the value of b "<<endl;
    cin>>b;
    cout<<"enter the value of op "<<endl;
    cin>>op;

    switch(op){
        case '+' : cout<<(a+b)<<endl;
                   break;
        case '-': cout<<(a-b)<<endl;
                  break;
        case '*' : cout<<(a*b)<<endl;
                  break;
        case '/': cout<<(a/b)<<endl;
                  break;
        default :  cout<<"please enter the valid operator"<<endl;
    }
}
























               