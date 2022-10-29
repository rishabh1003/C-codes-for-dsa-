#include<bits/stdc++.h>
using namespace std;

int main(){

int arr[]={6,5,5};

 int p=arr[0];
 int count=1;

 for(int i=1;i<3;i++){
    if (count==0){
        p=arr[i];
        count+=1;
    }
    else if (p==arr[i]){
        count+=1;
    }

    else{
        count-=1;
    }
 }

cout<<p<<endl;
}