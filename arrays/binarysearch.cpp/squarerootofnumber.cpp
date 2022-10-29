#include<iostream>
using namespace std;

long long  int squarerootinteger(int n){
        int s=0;
        int e=n;
        long long int mid=s+(e-s)/2;
       long long  int ans=-1;
       
        while(s<=e){
           long long   int sq=mid*mid;
            if (sq==n){
                return mid;
                
            }
            if (sq<n){
                ans=mid ;
                s=mid+1;
            }
            else{
                e=mid-1;
            }
            mid =s+(e-s)/2;
        }
        return ans;
    }
  double moreprecision(int n,int precision,int tempsol){
      double factor=1;
      double ans=tempsol;
      for(int i=0;i<precision;i++){
          factor/=10;
         for(double j=ans;j*j<n;j=j+factor){
             ans=j;
         }
      }
      return ans;
  } 

int main(){
    int n;
    cout<<"enter the number "<<endl;
    cin>>n;

    int tempsol= squarerootinteger(n);
    cout<<"answer is "<<moreprecision(n,3,tempsol);

}