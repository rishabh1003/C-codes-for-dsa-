#include<iostream>
using namespace std;

int main(){
    /*int a,b;
    cin>>a>>b;
    if (a>b){
        cout<<"a is greater than b  "<<a<<endl;
    }
    else{
        cout<<"b is  greater than a "<<b<<endl;
    }*/

   /* int a;
   cout<<"enter the value a "<<endl;
    cin>>a;
    if (a>0){
        cout<<"a is a +ve number "<<endl;
    }
    else if (a<0)
    {
     cout<<" a is a -ve number "<<endl;
    }
    else{
        cout << " a is zero"<< endl;
    }*/
    char ch;
    cin>>ch;
    if(ch >= 65 && ch <= 90)
		cout <<"upper";
	else if(ch >= 97 && ch <= 122)
		cout << "lower";
	else if(ch >= 48 && ch <= 57)
		cout << "number";
	else
		cout << "symbol";
	return 0;

    

}