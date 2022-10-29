 #include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int i=1;
    while(i<=n){
        int j=1;
        char count='A'+i-1;
         while(j<=n){
             cout<<char(count);
             count++;
             j++;
         }
         cout<<endl;
         i++;
    }
}