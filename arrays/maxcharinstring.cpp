#include<bits/stdc++.h>
using namespace std;

char getmaxcharacter(string s){
    int arr[26]={0};

    for (int i=0;i<s.length();i++){
        char ch =s[i];

        int number =0;
        number=ch-'a';
        arr[number]++;

    }

    int maxi=-1;int ans=0;
    for(int i=0;i<26;i++){
        if (maxi<arr[i]){
            maxi=arr[i];
            ans=i;
        }
       
    }
     char finalans='a'+ans;
        return finalans;
}

int main(){
    string s;
    cin>>s;
    cout<< getmaxcharacter(s)<<endl;

    return 0;
}