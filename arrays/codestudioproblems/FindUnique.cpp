#include<bits/stdc++.h>
using namespace std;
int main(){

    int arr[10]={1,2,3,4,2};
    int ans=0;
    for (int i=0;i<10;i++){

        ans= ans^arr[i];

    }
    cout<<ans;

}