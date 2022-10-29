#include<iostream>
using namespace std;
void reverse(char name[],int n){
    int s=0;
    int e=n-1;

    while(s<=e){
        swap(name[e--],name[s++]);
    }
}
int main(){
     char name[20]="rishabh";
     reverse(name,7);
    cout<<"length of string is  "<<name;
}