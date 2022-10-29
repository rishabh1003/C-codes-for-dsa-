#include<iostream>
using namespace std;

bool iseven (int a){
    //odd
    if (a&1){
        return 0;
    }
    //even
    return 1;

}

int main(){
int num;
cin>>num;

if (iseven(num)){
    cout<<"number is even"<<endl;

}
cout<<"number is odd"<<endl;




}