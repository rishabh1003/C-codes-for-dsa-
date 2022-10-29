#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data=data;
        this->next=NULL;
    }


};

bool palindrome(Node * head){
    if(head==NULL){
        return false;
    }
    stack<int> s;
    Node *temp=head;
    while(temp!=NULL){
    //if (s.empty())
    s.push(temp->data);
    temp=temp->next;

    }

    while(head!=NULL){
        int i=s.top();
        s.pop();
        if (head->data!=i){
            return 0;
        }
        head=head->next;
    }

    return 1;
}


int main(){
    Node * head=new Node (1);
    head->next=new Node(2);
    head->next->next=new Node(1);
    //cout<<head->next->data<<endl;

    int ans=palindrome(head);
    if(ans==1){
        cout<<"YES it is Pali."<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }


}