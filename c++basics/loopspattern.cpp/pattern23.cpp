 # include<iostream>
 using namespace std;

 int main(){
    int n;
    cin>>n;
    int count=n;
    int i=1;
    while(i<=n){
        int space=i-1;
        while(space--){
            cout<<" ";
        }
        int j=1;
         while(j<=count){
             cout<<"*";
             j++;
         }
         cout<<endl;
         i++;
         count--;
    }
}