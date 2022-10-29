#include<iostream>
#include<string>
using namespace std;

int main(){
   string s0;
     string s1("hello");

     string s2="hello world";
     string s3(s2);
     string s4 =s3;

     char a[]={'a','b','c','d','\0'};
     string s5(a);

     cout<<s0<<endl;
      cout<<s1<<endl;
      cout<<s2<<endl;
      cout<<s3<<endl;
      cout<<s4<<endl;
      cout<<s5<<endl;
     

     if (s0.empty()){
         cout<<"s0 is a empty string "<<endl;

     }
     //append 
     s0.append("i love c++ ");
     cout<<s0<<endl;
     
     s0+="and python";
     cout<<s0<<endl;

     // remove;
     cout<<s0.length()<<endl;
     s0.clear();
     cout<<s0.length()<<endl;

     // compare two string 

     s0="apple";
     s1="mango";
     
     cout<<s0.compare(s1)<<endl;// returns an integer ==0 equal , >0 or <0

  // find substring 
  string s= "i want to have apple juice ";
  int indx=s.find("apple");
  cout<<indx<<endl;

  string word="apple";
  int len=word.length();
  cout<<s<<endl;

  s.erase(indx,len);
  cout<<s<<endl;
    
    // iterate over all the charachter int he stirng 

    for(int i=0;i<s1.length();i++){
      cout<<s1[i]<<" ";
    }
   cout<<endl;
    // iterators

    for(auto it =s1.begin();it !=s1.end();it++){
        cout<<(*it)<<",";

    }
    cout<<endl;

    // for each loop
    for(auto c:s1){
      cout<<c<<".";
    }
}
