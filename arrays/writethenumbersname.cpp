#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<string> number{"zero","one ","two","three","four","five","six","seven","eight","nine"};
    int n;
    cin>>n;
    
    while(n!=0){
        int num=0;
        num=n%10;
        cout<<number[num]<<" ";
        n=n/10;

    }
    cout<<endl;
    return 0;
}