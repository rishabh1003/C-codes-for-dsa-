#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int sum=0;
    int mul=1;

    while (n!=0)
    {
        int i=n%10;
        sum+=i;
        mul*=i;
        
        n=n/10;
        
    }
    int answer=mul-sum;
    cout<<answer<<endl;
    
}